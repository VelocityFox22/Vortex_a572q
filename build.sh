#!/bin/bash
set -euo pipefail

# ============================================
#  Kernel Build Script - Samsung Galaxy A72
#  By: VelocityFox22
#  Optimized Clang/GCC Usage
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
CONFIG="vendor/a72q_defconfig"
CHAT_ID="6071370488"
BOT_TOKEN="7692038361:AAFCr22TYGDUh_zPCzZOZZYXToJbwDQUf3c"
IMAGE_PATH="out/arch/arm64/boot/Image.gz"
BUILD_HOST="Fox22"
BUILD_USER="Velocity"

# =========[ Path Toolchain ]=========
CLANG_PATH="$(pwd)/toolchain/clang-r547379/bin"
GCC_PATH="$(pwd)/toolchain/gcc/bin"

# Clang/GCC Triple
CLANG_TRIPLE="aarch64-linux-gnu-"
CROSS_COMPILE="aarch64-linux-gnu-"
CROSS_COMPILE_ARM32="arm-linux-gnueabi-"

# Tambahkan ke PATH
export PATH="$CLANG_PATH:$GCC_PATH:$PATH"

# =========[ Env Kernel Make ]=========
KERNEL_ENV="DTC_EXT=$(pwd)/tools/dtc \
            CONFIG_BUILD_ARM64_DT_OVERLAY=y \
            PYTHON=python2"

# =========[ Step 1: Persiapan Out Dir ]=========
log_info "Mempersiapkan direktori out..."
mkdir -p out

# =========[ Step 2: Atur Build Info ]=========
export KBUILD_BUILD_HOST="$BUILD_HOST"
export KBUILD_BUILD_USER="$BUILD_USER"

# =========[ Step 3: Load Defconfig ]=========
log_info "Menggunakan defconfig: $CONFIG"
make -j"$(nproc)" \
    -C "$(pwd)" \
    O="$(pwd)/out" \
    $KERNEL_ENV \
    ARCH=arm64 \
    CC=clang \
    HOSTCC=clang \
    HOSTCXX=clang++ \
    CLANG_TRIPLE="$CLANG_TRIPLE" \
    CROSS_COMPILE="$CROSS_COMPILE" \
    CROSS_COMPILE_ARM32="$CROSS_COMPILE_ARM32" \
    "$CONFIG"

# =========[ Step 4: Compile Kernel ]=========
log_info "Memulai compile kernel dengan Clang 20 & GCC 5.x..."
make -j"$(nproc)" \
    -C "$(pwd)" \
    O="$(pwd)/out" \
    $KERNEL_ENV \
    ARCH=arm64 \
    CC=clang \
    HOSTCC=clang \
    HOSTCXX=clang++ \
    AR=llvm-ar \
    NM=llvm-nm \
    OBJCOPY=llvm-objcopy \
    OBJDUMP=llvm-objdump \
    STRIP=llvm-strip \
    READELF=llvm-readelf \
    CLANG_TRIPLE="$CLANG_TRIPLE" \
    CROSS_COMPILE="$CROSS_COMPILE" \
    CROSS_COMPILE_ARM32="$CROSS_COMPILE_ARM32"

# =========[ Step 5: Salin Hasil Image ]=========
if [[ -f "out/arch/arm64/boot/Image" ]]; then
    cp "out/arch/arm64/boot/Image" "$(pwd)/arch/arm64/boot/Image"
    log_success "Kernel Image berhasil disalin ke arch/arm64/boot/"
else
    log_warn "File Image tidak ditemukan, mungkin build menghasilkan Image.gz saja."
fi

# =========[ Step 6: Upload ke Telegram ]=========
if [[ -f "$IMAGE_PATH" ]]; then
    log_info "Mengirim $IMAGE_PATH ke Telegram..."
    curl -s -F chat_id="$CHAT_ID" \
         -F document=@"$IMAGE_PATH" \
         "https://api.telegram.org/bot$BOT_TOKEN/sendDocument" \
    && log_success "Sukses terkirim ke Telegram!"
else
    log_error "Build selesai, tapi $IMAGE_PATH tidak ditemukan!"
    exit 1
fi
