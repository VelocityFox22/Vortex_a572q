#!/usr/bin/env bash
set -euo pipefail

# ============================================
#   Kernel Build Script - Samsung Galaxy A572Q
#   By: VelocityFox22
# ============================================

# =========[ Warna untuk log ]=========
GREEN='\033[0;32m'
YELLOW='\033[1;33m'
RED='\033[0;31m'
CYAN='\033[0;36m'
RESET='\033[0m'

log_info()    { echo -e "${CYAN}[INFO]${RESET} $1"; }
log_success() { echo -e "${GREEN}[OK]${RESET} $1"; }
log_warn()    { echo -e "${YELLOW}[WARN]${RESET} $1"; }
log_error()   { echo -e "${RED}[ERR]${RESET} $1"; }

# =========[ Konfigurasi Awal ]=========
ROOT_DIR="$(pwd)"
CONFIG="vendor/a52q_defconfig"
CHAT_ID="[ Your ID Telegram ]"
BOT_TOKEN="[ Your bot id : Your bot token]"
BUILD_HOST="Fox22"
BUILD_USER="Velocity"

# Output image candidates
IMAGE_CANDIDATES=(
  "out/arch/arm64/boot/Image.gz"
  "out/arch/arm64/boot/Image"
)

# =========[ Toolchain / Clang setup ]=========
DEFAULT_TOOLCHAIN_REL="toolchain/clang-r547379"
ALT_TOOLCHAIN_REL="toolchain/clang-r547379"

try_paths=(
  "${ROOT_DIR}/${DEFAULT_TOOLCHAIN_REL}"
  "${ROOT_DIR}/${ALT_TOOLCHAIN_REL}"
)

TOOLCHAIN_DIR=""
for p in "${try_paths[@]}"; do
  if [[ -d "$p" ]]; then
    TOOLCHAIN_DIR="$p"
    break
  fi
done

if [[ -z "$TOOLCHAIN_DIR" ]]; then
  log_error "Toolchain clang-r547379 tidak ditemukan di salah satu lokasi:"
  for p in "${try_paths[@]}"; do echo "  - $p"; done
  log_info "Pastikan sudah mengekstrak clang-r547379 ke salah satu path di atas."
  log_info "Download clang-r547379 AOSP: https://android.googlesource.com/platform/prebuilts/clang/host/linux-x86/"
  exit 2
fi

log_info "Menggunakan toolchain clang di: $TOOLCHAIN_DIR"

# Binaries yang digunakan dari toolchain
CLANG_BIN="${TOOLCHAIN_DIR}/bin/clang"
CLANG_PP_BIN="${TOOLCHAIN_DIR}/bin/clang++"
LLVM_AR="${TOOLCHAIN_DIR}/bin/llvm-ar"
LLVM_NM="${TOOLCHAIN_DIR}/bin/llvm-nm"
LLVM_STRIP="${TOOLCHAIN_DIR}/bin/llvm-strip"
LLVM_OBJCOPY="${TOOLCHAIN_DIR}/bin/llvm-objcopy"
LLVM_OBJDUMP="${TOOLCHAIN_DIR}/bin/llvm-objdump"
LD_LLD="${TOOLCHAIN_DIR}/bin/ld.lld"

# Validasi keberadaan binary penting
required_bins=("$CLANG_BIN" "$CLANG_PP_BIN" "$LLVM_AR" "$LLVM_NM" "$LLVM_STRIP" "$LLVM_OBJCOPY" "$LLVM_OBJDUMP" "$LD_LLD")
for b in "${required_bins[@]}"; do
  if [[ ! -x "$b" ]]; then
    log_error "Binary toolchain tidak ditemukan atau tidak executable: $b"
    exit 3
  fi
done

# =======[ Environment variables ]========
export ARCH=arm64
export KBUILD_BUILD_HOST="$BUILD_HOST"
export KBUILD_BUILD_USER="$BUILD_USER"

# Tambahkan bin toolchain ke PATH 
export PATH="${TOOLCHAIN_DIR}/bin:${PATH}"

# Setup LD_LIBRARY_PATH
if [[ -d "${TOOLCHAIN_DIR}/lib64" ]]; then
  export LD_LIBRARY_PATH="${TOOLCHAIN_DIR}/lib64:${LD_LIBRARY_PATH:-}"
fi

# Cross / clang triple
export CLANG_TRIPLE="aarch64-linux-gnu-"

# Untuk 64-bit & 32-bit toolchain
export CROSS_COMPILE="aarch64-linux-gnu-"
export CROSS_COMPILE_ARM32="arm-linux-gnueabi-"

CC="$CLANG_BIN"
CXX="$CLANG_PP_BIN"
AR="$LLVM_AR"
NM="$LLVM_NM"
STRIP="$LLVM_STRIP"
OBJCOPY="$LLVM_OBJCOPY"
OBJDUMP="$LLVM_OBJDUMP"
LD="$LD_LLD"

log_info "Environment clang siap: CC=$CC, AR=$AR, LD=$LD"
log_info "CROSS_COMPILE=$CROSS_COMPILE"
log_info "CROSS_COMPILE_ARM32=$CROSS_COMPILE_ARM32"

# =========[ Pengecekan dependency helper ]=========
missing_tools=()
for t in curl tar make gzip bzip2; do
  if ! command -v "$t" &>/dev/null; then
    missing_tools+=("$t")
  fi
done
if [[ ${#missing_tools[@]} -ne 0 ]]; then
  log_warn "Tools tidak ditemukan: ${missing_tools[*]}. Pastikan sudah terinstal (curl, tar, make, dll)."
fi

# =========[ Persiapan direktori out ]=========
log_info "Mempersiapkan direktori out..."
mkdir -p out

# =========[ Step 1: Load defconfig ]=========
log_info "Menggunakan defconfig: $CONFIG"
(
  set -x
  make -C "${ROOT_DIR}" O="${ROOT_DIR}/out" ARCH=arm64 "$CONFIG"
)

# =========[ Step 2: Compile Kernel ]=========
log_info "Memulai compile kernel..."
JOBS="$(nproc --all || echo 4)"
export CC CXX AR NM STRIP OBJCOPY OBJDUMP LD CLANG_TRIPLE

(
  set -x
  make -C "${ROOT_DIR}" -j"${JOBS}" O="${ROOT_DIR}/out" ARCH=arm64 \
    CC="${CC}" \
    CROSS_COMPILE="${CROSS_COMPILE}" \
    CROSS_COMPILE_ARM32="${CROSS_COMPILE_ARM32}" \
    CLANG_TRIPLE="${CLANG_TRIPLE}" \
    LD="${LD}" \
    AR="${AR}" \
    NM="${NM}" \
    STRIP="${STRIP}" \
    OBJCOPY="${OBJCOPY}" \
    OBJDUMP="${OBJDUMP}"
)

log_success "Proses compile kernel selesai."

# =========[ Step 3: Salin Hasil Image ]=========
COPIED_IMAGE=""
for candidate in "${IMAGE_CANDIDATES[@]}"; do
  if [[ -f "${ROOT_DIR}/${candidate}" ]]; then
    target_dir="${ROOT_DIR}/arch/arm64/boot"
    mkdir -p "$target_dir"
    cp "${ROOT_DIR}/${candidate}" "${target_dir}/"
    COPIED_IMAGE="${target_dir}/$(basename "$candidate")"
    log_success "Kernel image berhasil disalin ke ${target_dir}/"
    break
  fi
done

if [[ -z "$COPIED_IMAGE" ]]; then
  log_warn "Tidak menemukan Image atau Image.gz di out/arch/arm64/boot/. Mungkin build gagal atau nama file berbeda."
fi

# =========[ Step 4: Upload ke Telegram ]=========
FILE_TO_SEND=""
for candidate in "${IMAGE_CANDIDATES[@]}"; do
  if [[ -f "${ROOT_DIR}/${candidate}" ]]; then
    FILE_TO_SEND="${ROOT_DIR}/${candidate}"
    break
  fi
done

if [[ -z "$FILE_TO_SEND" ]]; then
  log_error "Build selesai, namun tidak ada file Image/Image.gz ditemukan untuk di-upload."
  log_info "Periksa direktori: ${ROOT_DIR}/out/arch/arm64/boot/"
  exit 4
fi

# Validate Telegram placeholders
if [[ "$CHAT_ID" == "[Your Id Telegram]" || "$BOT_TOKEN" == "[Id Bot Telegram]:[Your Bot Token]" ]]; then
  log_warn "CHAT_ID atau BOT_TOKEN belum diatur. Melewatkan upload Telegram."
  exit 0
fi

# Upload via Telegram bot API
log_info "Mengirim ${FILE_TO_SEND} ke Telegram..."
curl -s -F chat_id="$CHAT_ID" \
     -F document=@"${FILE_TO_SEND}" \
     "https://api.telegram.org/bot${BOT_TOKEN}/sendDocument" \
  && log_success "Sukses terkirim ke Telegram!" \
  || { log_error "Gagal mengirim ke Telegram (cek CHAT_ID/BOT_TOKEN/Internet)."; exit 5; }

# =========[ Selesai ]=========
log_success "Build script selesai tanpa error."