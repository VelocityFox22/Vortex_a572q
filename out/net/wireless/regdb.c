/*
 * DO NOT EDIT -- file generated from data in db.txt
 */

#include <linux/nl80211.h>
#include <net/cfg80211.h>
#include "regdb.h"

static const struct ieee80211_regdomain regdom_00 = {
	.alpha2 = "00",
	.reg_rules = {
		REG_RULE_EXT(2402, 2472, 40, 0, 20, 0, 0),
		REG_RULE_EXT(2457, 2482, 40, 0, 20, 0, 
			NL80211_RRF_NO_IR | 
			NL80211_RRF_NO_IR | 0),
		REG_RULE_EXT(2474, 2494, 20, 0, 20, 0, 
			NL80211_RRF_NO_IR | 
			NL80211_RRF_NO_IR | 
			NL80211_RRF_NO_OFDM | 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 20, 0, 
			NL80211_RRF_NO_IR | 
			NL80211_RRF_NO_IR | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 20, 0, 
			NL80211_RRF_NO_IR | 
			NL80211_RRF_NO_IR | 0),
		REG_RULE_EXT(5490, 5710, 80, 0, 20, 0, 
			NL80211_RRF_NO_IR | 
			NL80211_RRF_NO_IR | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 20, 0, 
			NL80211_RRF_NO_IR | 
			NL80211_RRF_NO_IR | 0),
		REG_RULE_EXT(57240, 63720, 2160, 0, 0, 0, 0),
	},
	.n_reg_rules = 8
};

static const struct ieee80211_regdomain regdom_GH = {
	.alpha2 = "GH",
	.dfs_region = NL80211_DFS_FCC,
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 17, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 24, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5710, 160, 0, 24, 0, 
			NL80211_RRF_DFS | 0),
	},
	.n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_GA = {
	.alpha2 = "GA",
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 23, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 23, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5710, 80, 0, 30, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 14, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_GY = {
	.alpha2 = "GY",
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 30, 0, 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 30, 0, 0),
	},
	.n_reg_rules = 2
};

static const struct ieee80211_regdomain regdom_GM = {
	.alpha2 = "GM",
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 23, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 23, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5710, 80, 0, 30, 0, 
			NL80211_RRF_DFS | 0),
	},
	.n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_GG = {
	.alpha2 = "GG",
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 23, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 23, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5710, 80, 0, 30, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 14, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_GP = {
	.alpha2 = "GP",
	.dfs_region = NL80211_DFS_ETSI,
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 20, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 20, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5710, 160, 0, 27, 0, 
			NL80211_RRF_DFS | 0),
	},
	.n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_GT = {
	.alpha2 = "GT",
	.dfs_region = NL80211_DFS_FCC,
	.reg_rules = {
		REG_RULE_EXT(2402, 2472, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 17, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 23, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5730, 80, 0, 30, 0, 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 30, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_GU = {
	.alpha2 = "GU",
	.dfs_region = NL80211_DFS_FCC,
	.reg_rules = {
		REG_RULE_EXT(2402, 2472, 40, 0, 30, 0, 0),
		REG_RULE_EXT(5170, 5250, 20, 0, 17, 0, 0),
		REG_RULE_EXT(5250, 5330, 20, 0, 24, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5490, 5730, 20, 0, 24, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 20, 0, 30, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_GD = {
	.alpha2 = "GD",
	.dfs_region = NL80211_DFS_FCC,
	.reg_rules = {
		REG_RULE_EXT(2402, 2472, 40, 0, 30, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 17, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 24, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5730, 160, 0, 24, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 30, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_GR = {
	.alpha2 = "GR",
	.dfs_region = NL80211_DFS_ETSI,
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 20, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 20, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5710, 160, 0, 27, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 14, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_GL = {
	.alpha2 = "GL",
	.dfs_region = NL80211_DFS_ETSI,
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 23, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 23, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5710, 160, 0, 30, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 14, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_GN = {
	.alpha2 = "GN",
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 23, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 23, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5710, 80, 0, 30, 0, 
			NL80211_RRF_DFS | 0),
	},
	.n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_GW = {
	.alpha2 = "GW",
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 23, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 23, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5710, 80, 0, 30, 0, 
			NL80211_RRF_DFS | 0),
	},
	.n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_NA = {
	.alpha2 = "NA",
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 23, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 23, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5730, 80, 0, 30, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 30, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_NR = {
	.alpha2 = "NR",
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 23, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 23, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5710, 80, 0, 30, 0, 
			NL80211_RRF_DFS | 0),
	},
	.n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_NG = {
	.alpha2 = "NG",
	.dfs_region = NL80211_DFS_ETSI,
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 30, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 30, 0, 0),
	},
	.n_reg_rules = 3
};

static const struct ieee80211_regdomain regdom_AQ = {
	.alpha2 = "AQ",
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 23, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 23, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5730, 80, 0, 30, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 30, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_SS = {
	.alpha2 = "SS",
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 23, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 23, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5730, 80, 0, 30, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 30, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_ZA = {
	.alpha2 = "ZA",
	.dfs_region = NL80211_DFS_ETSI,
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 20, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 20, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5730, 80, 0, 30, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 30, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_NL = {
	.alpha2 = "NL",
	.dfs_region = NL80211_DFS_FCC,
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 20, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 20, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5710, 80, 0, 27, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 14, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_AN = {
	.alpha2 = "AN",
	.dfs_region = NL80211_DFS_ETSI,
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 20, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 20, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5730, 160, 0, 27, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 20, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_NP = {
	.alpha2 = "NP",
	.dfs_region = NL80211_DFS_JP,
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 20, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 20, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5735, 5815, 80, 0, 20, 0, 0),
	},
	.n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_NO = {
	.alpha2 = "NO",
	.dfs_region = NL80211_DFS_ETSI,
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 23, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 20, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5710, 160, 0, 27, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 14, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_NF = {
	.alpha2 = "NF",
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 36, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 23, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 23, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5590, 80, 0, 30, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5650, 5730, 80, 0, 30, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 36, 0, 0),
	},
	.n_reg_rules = 6
};

static const struct ieee80211_regdomain regdom_NC = {
	.alpha2 = "NC",
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 23, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 23, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5710, 80, 0, 30, 0, 
			NL80211_RRF_DFS | 0),
	},
	.n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_NZ = {
	.alpha2 = "NZ",
	.dfs_region = NL80211_DFS_ETSI,
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 17, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 24, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5730, 160, 0, 24, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 30, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_NU = {
	.alpha2 = "NU",
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 36, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 23, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 23, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5730, 80, 0, 24, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 30, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_NE = {
	.alpha2 = "NE",
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 23, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 23, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5710, 80, 0, 30, 0, 
			NL80211_RRF_DFS | 0),
	},
	.n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_NI = {
	.alpha2 = "NI",
	.dfs_region = NL80211_DFS_FCC,
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 24, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 24, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5730, 160, 0, 24, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 30, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_KR = {
	.alpha2 = "KR",
	.dfs_region = NL80211_DFS_JP,
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 20, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 20, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5710, 80, 0, 30, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 30, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_DK = {
	.alpha2 = "DK",
	.dfs_region = NL80211_DFS_ETSI,
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 20, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 20, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5710, 160, 0, 27, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 14, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_DO = {
	.alpha2 = "DO",
	.dfs_region = NL80211_DFS_FCC,
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 30, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 17, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 23, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5730, 80, 0, 27, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 30, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_DM = {
	.alpha2 = "DM",
	.dfs_region = NL80211_DFS_FCC,
	.reg_rules = {
		REG_RULE_EXT(2402, 2472, 40, 0, 30, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 17, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 23, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5730, 80, 0, 27, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 30, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_DE = {
	.alpha2 = "DE",
	.dfs_region = NL80211_DFS_ETSI,
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 20, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 20, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5710, 80, 0, 27, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 14, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_TL = {
	.alpha2 = "TL",
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 23, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 23, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5730, 80, 0, 30, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 30, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_LA = {
	.alpha2 = "LA",
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 17, 0, 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 24, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5490, 5730, 80, 0, 24, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 30, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_LR = {
	.alpha2 = "LR",
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 30, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 23, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 23, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5730, 80, 0, 36, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 36, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_LV = {
	.alpha2 = "LV",
	.dfs_region = NL80211_DFS_ETSI,
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 20, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 20, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5710, 160, 0, 27, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 14, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_RU = {
	.alpha2 = "RU",
	.dfs_region = NL80211_DFS_ETSI,
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 20, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 20, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5650, 5710, 40, 0, 30, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 14, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_LB = {
	.alpha2 = "LB",
	.dfs_region = NL80211_DFS_FCC,
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 17, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 24, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5730, 80, 0, 24, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 30, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_LS = {
	.alpha2 = "LS",
	.dfs_region = NL80211_DFS_ETSI,
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 20, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 20, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5710, 160, 0, 27, 0, 
			NL80211_RRF_DFS | 0),
	},
	.n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_RE = {
	.alpha2 = "RE",
	.dfs_region = NL80211_DFS_ETSI,
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 20, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 20, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5710, 80, 0, 27, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 14, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_RO = {
	.alpha2 = "RO",
	.dfs_region = NL80211_DFS_ETSI,
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 20, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 20, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5710, 160, 0, 27, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 14, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_LU = {
	.alpha2 = "LU",
	.dfs_region = NL80211_DFS_ETSI,
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 20, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 20, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5710, 160, 0, 27, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 14, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_RW = {
	.alpha2 = "RW",
	.dfs_region = NL80211_DFS_FCC,
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 17, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 24, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5710, 160, 0, 24, 0, 
			NL80211_RRF_DFS | 0),
	},
	.n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_LY = {
	.alpha2 = "LY",
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 23, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 23, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5710, 80, 0, 30, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 14, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_LT = {
	.alpha2 = "LT",
	.dfs_region = NL80211_DFS_ETSI,
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 20, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 20, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5710, 160, 0, 27, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 14, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_LI = {
	.alpha2 = "LI",
	.dfs_region = NL80211_DFS_ETSI,
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 20, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 20, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5710, 160, 0, 27, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 14, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_MG = {
	.alpha2 = "MG",
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 23, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 23, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5710, 80, 0, 30, 0, 
			NL80211_RRF_DFS | 0),
	},
	.n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_MQ = {
	.alpha2 = "MQ",
	.dfs_region = NL80211_DFS_ETSI,
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 20, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 20, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5710, 80, 0, 27, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 14, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_MH = {
	.alpha2 = "MH",
	.dfs_region = NL80211_DFS_FCC,
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 24, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 24, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5730, 160, 0, 24, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 30, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_YT = {
	.alpha2 = "YT",
	.dfs_region = NL80211_DFS_ETSI,
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 20, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 20, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5710, 80, 0, 27, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 14, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_MO = {
	.alpha2 = "MO",
	.dfs_region = NL80211_DFS_FCC,
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 23, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 23, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 23, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5730, 160, 0, 30, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 30, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_MK = {
	.alpha2 = "MK",
	.dfs_region = NL80211_DFS_ETSI,
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 20, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 20, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5710, 160, 0, 27, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 14, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_MW = {
	.alpha2 = "MW",
	.dfs_region = NL80211_DFS_ETSI,
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 20, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 20, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5730, 160, 0, 27, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 30, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_MY = {
	.alpha2 = "MY",
	.dfs_region = NL80211_DFS_FCC,
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 24, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 24, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5650, 160, 0, 24, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 24, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_ML = {
	.alpha2 = "ML",
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 23, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 23, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5710, 80, 0, 30, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 14, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_IM = {
	.alpha2 = "IM",
	.dfs_region = NL80211_DFS_FCC,
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 23, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 23, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5710, 80, 0, 30, 0, 
			NL80211_RRF_DFS | 0),
	},
	.n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_MX = {
	.alpha2 = "MX",
	.dfs_region = NL80211_DFS_FCC,
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 17, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 24, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5590, 80, 0, 24, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5650, 5730, 80, 0, 24, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 30, 0, 0),
	},
	.n_reg_rules = 6
};

static const struct ieee80211_regdomain regdom_MC = {
	.alpha2 = "MC",
	.dfs_region = NL80211_DFS_ETSI,
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 20, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 20, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5710, 160, 0, 27, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 14, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_MA = {
	.alpha2 = "MA",
	.dfs_region = NL80211_DFS_ETSI,
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 20, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 20, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
	},
	.n_reg_rules = 3
};

static const struct ieee80211_regdomain regdom_MU = {
	.alpha2 = "MU",
	.dfs_region = NL80211_DFS_FCC,
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 24, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 24, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5710, 160, 0, 24, 0, 
			NL80211_RRF_DFS | 0),
	},
	.n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_MR = {
	.alpha2 = "MR",
	.dfs_region = NL80211_DFS_ETSI,
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 20, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 20, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5710, 160, 0, 27, 0, 
			NL80211_RRF_DFS | 0),
	},
	.n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_MZ = {
	.alpha2 = "MZ",
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 23, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 23, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5710, 80, 0, 30, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 14, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_ME = {
	.alpha2 = "ME",
	.dfs_region = NL80211_DFS_ETSI,
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 20, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 20, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5710, 160, 0, 27, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 14, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_MS = {
	.alpha2 = "MS",
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 23, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 23, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5730, 160, 0, 24, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 30, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_MD = {
	.alpha2 = "MD",
	.dfs_region = NL80211_DFS_ETSI,
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 20, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 20, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5710, 160, 0, 27, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 14, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_MV = {
	.alpha2 = "MV",
	.dfs_region = NL80211_DFS_ETSI,
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 23, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 20, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 20, 0, 0),
	},
	.n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_MT = {
	.alpha2 = "MT",
	.dfs_region = NL80211_DFS_ETSI,
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 20, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 20, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5710, 160, 0, 27, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 14, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_MN = {
	.alpha2 = "MN",
	.dfs_region = NL80211_DFS_FCC,
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 24, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 24, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5730, 160, 0, 24, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 30, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_US = {
	.alpha2 = "US",
	.dfs_region = NL80211_DFS_FCC,
	.reg_rules = {
		REG_RULE_EXT(2402, 2472, 40, 0, 30, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 23, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 23, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5730, 160, 0, 23, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 30, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_UM = {
	.alpha2 = "UM",
	.reg_rules = {
		REG_RULE_EXT(2402, 2472, 40, 0, 30, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 24, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 24, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5730, 80, 0, 24, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 30, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_VI = {
	.alpha2 = "VI",
	.dfs_region = NL80211_DFS_FCC,
	.reg_rules = {
		REG_RULE_EXT(2402, 2472, 40, 0, 30, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 24, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 24, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5730, 160, 0, 24, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 30, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_MM = {
	.alpha2 = "MM",
	.dfs_region = NL80211_DFS_FCC,
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 17, 0, 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 20, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5490, 5710, 80, 0, 20, 0, 
			NL80211_RRF_DFS | 0),
	},
	.n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_FM = {
	.alpha2 = "FM",
	.dfs_region = NL80211_DFS_FCC,
	.reg_rules = {
		REG_RULE_EXT(2402, 2472, 40, 0, 30, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 24, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 24, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5730, 160, 0, 24, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 30, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_VU = {
	.alpha2 = "VU",
	.dfs_region = NL80211_DFS_FCC,
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 17, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 24, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5730, 160, 0, 24, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 30, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_BH = {
	.alpha2 = "BH",
	.dfs_region = NL80211_DFS_JP,
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 20, 0, 20, 0, 0),
		REG_RULE_EXT(5250, 5330, 20, 0, 20, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 20, 0, 20, 0, 0),
	},
	.n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_BB = {
	.alpha2 = "BB",
	.dfs_region = NL80211_DFS_FCC,
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 23, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 23, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 30, 0, 0),
	},
	.n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_VA = {
	.alpha2 = "VA",
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 23, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 23, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5710, 80, 0, 30, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 14, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_BS = {
	.alpha2 = "BS",
	.dfs_region = NL80211_DFS_FCC,
	.reg_rules = {
		REG_RULE_EXT(2402, 2472, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 24, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 24, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5730, 160, 0, 24, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 30, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_BD = {
	.alpha2 = "BD",
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 30, 0, 0),
	},
	.n_reg_rules = 2
};

static const struct ieee80211_regdomain regdom_BM = {
	.alpha2 = "BM",
	.dfs_region = NL80211_DFS_FCC,
	.reg_rules = {
		REG_RULE_EXT(2402, 2472, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 24, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 24, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5730, 160, 0, 24, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 30, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_BJ = {
	.alpha2 = "BJ",
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 23, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 23, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5710, 80, 0, 30, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 14, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_VE = {
	.alpha2 = "VE",
	.dfs_region = NL80211_DFS_FCC,
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 30, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 23, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 23, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 30, 0, 0),
	},
	.n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_VN = {
	.alpha2 = "VN",
	.dfs_region = NL80211_DFS_FCC,
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 17, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 24, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5730, 80, 0, 24, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 30, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_BE = {
	.alpha2 = "BE",
	.dfs_region = NL80211_DFS_ETSI,
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 20, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 20, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5710, 160, 0, 27, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 14, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_BY = {
	.alpha2 = "BY",
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 20, 0, 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 20, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5650, 5710, 40, 0, 27, 0, 
			NL80211_RRF_DFS | 0),
	},
	.n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_BZ = {
	.alpha2 = "BZ",
	.dfs_region = NL80211_DFS_JP,
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 30, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 20, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 20, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5730, 80, 0, 27, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 30, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_BA = {
	.alpha2 = "BA",
	.dfs_region = NL80211_DFS_ETSI,
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 20, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 20, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5710, 160, 0, 27, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 14, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_BW = {
	.alpha2 = "BW",
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 23, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 23, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5710, 80, 0, 30, 0, 
			NL80211_RRF_DFS | 0),
	},
	.n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_BO = {
	.alpha2 = "BO",
	.dfs_region = NL80211_DFS_JP,
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 20, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 20, 0, 0),
	},
	.n_reg_rules = 3
};

static const struct ieee80211_regdomain regdom_BI = {
	.alpha2 = "BI",
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 23, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 23, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5710, 80, 0, 30, 0, 
			NL80211_RRF_DFS | 0),
	},
	.n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_BF = {
	.alpha2 = "BF",
	.dfs_region = NL80211_DFS_FCC,
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 17, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 24, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5710, 160, 0, 24, 0, 
			NL80211_RRF_DFS | 0),
	},
	.n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_BV = {
	.alpha2 = "BV",
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 23, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 23, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5730, 80, 0, 30, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 14, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_BT = {
	.alpha2 = "BT",
	.dfs_region = NL80211_DFS_ETSI,
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 20, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 20, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5710, 160, 0, 27, 0, 
			NL80211_RRF_DFS | 0),
	},
	.n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_MP = {
	.alpha2 = "MP",
	.dfs_region = NL80211_DFS_FCC,
	.reg_rules = {
		REG_RULE_EXT(2402, 2472, 40, 0, 30, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 24, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 24, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5730, 160, 0, 24, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 30, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_BG = {
	.alpha2 = "BG",
	.dfs_region = NL80211_DFS_ETSI,
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 23, 0, 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 23, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5490, 5710, 80, 0, 30, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 14, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_BR = {
	.alpha2 = "BR",
	.dfs_region = NL80211_DFS_FCC,
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 17, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 24, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5730, 160, 0, 24, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 30, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_BN = {
	.alpha2 = "BN",
	.dfs_region = NL80211_DFS_JP,
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 20, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 20, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 20, 0, 0),
	},
	.n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_WS = {
	.alpha2 = "WS",
	.dfs_region = NL80211_DFS_ETSI,
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5250, 5330, 40, 0, 20, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5490, 5730, 40, 0, 27, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5795, 40, 0, 20, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_SA = {
	.alpha2 = "SA",
	.dfs_region = NL80211_DFS_ETSI,
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 20, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 20, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5730, 160, 0, 27, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5815, 80, 0, 20, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_GS = {
	.alpha2 = "GS",
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 23, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 23, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5730, 80, 0, 30, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 14, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_SM = {
	.alpha2 = "SM",
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 23, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 23, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5710, 80, 0, 30, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 14, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_ST = {
	.alpha2 = "ST",
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 23, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 23, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5710, 80, 0, 30, 0, 
			NL80211_RRF_DFS | 0),
	},
	.n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_PM = {
	.alpha2 = "PM",
	.dfs_region = NL80211_DFS_ETSI,
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 20, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 20, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5710, 160, 0, 27, 0, 
			NL80211_RRF_DFS | 0),
	},
	.n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_EH = {
	.alpha2 = "EH",
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 23, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 23, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
	},
	.n_reg_rules = 3
};

static const struct ieee80211_regdomain regdom_SN = {
	.alpha2 = "SN",
	.dfs_region = NL80211_DFS_FCC,
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 17, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 20, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
	},
	.n_reg_rules = 3
};

static const struct ieee80211_regdomain regdom_RS = {
	.alpha2 = "RS",
	.dfs_region = NL80211_DFS_ETSI,
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 23, 0, 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 23, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5490, 5710, 80, 0, 30, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 14, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_SC = {
	.alpha2 = "SC",
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 23, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 23, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5730, 80, 0, 30, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 30, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_LC = {
	.alpha2 = "LC",
	.dfs_region = NL80211_DFS_ETSI,
	.reg_rules = {
		REG_RULE_EXT(2402, 2472, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 20, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 20, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5730, 160, 0, 30, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 30, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_VC = {
	.alpha2 = "VC",
	.dfs_region = NL80211_DFS_ETSI,
	.reg_rules = {
		REG_RULE_EXT(2402, 2472, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 20, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 20, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5730, 160, 0, 27, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 20, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_KN = {
	.alpha2 = "KN",
	.dfs_region = NL80211_DFS_ETSI,
	.reg_rules = {
		REG_RULE_EXT(2402, 2472, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 20, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 20, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5730, 160, 0, 30, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 30, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_SH = {
	.alpha2 = "SH",
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 23, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 23, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5730, 80, 0, 30, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 14, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_SO = {
	.alpha2 = "SO",
	.dfs_region = NL80211_DFS_FCC,
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
	},
	.n_reg_rules = 1
};

static const struct ieee80211_regdomain regdom_SB = {
	.alpha2 = "SB",
	.dfs_region = NL80211_DFS_FCC,
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
	},
	.n_reg_rules = 1
};

static const struct ieee80211_regdomain regdom_SD = {
	.alpha2 = "SD",
	.dfs_region = NL80211_DFS_ETSI,
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 23, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 23, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5730, 80, 0, 30, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 30, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_SR = {
	.alpha2 = "SR",
	.dfs_region = NL80211_DFS_ETSI,
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 20, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 20, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5710, 160, 0, 27, 0, 
			NL80211_RRF_DFS | 0),
	},
	.n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_LK = {
	.alpha2 = "LK",
	.dfs_region = NL80211_DFS_FCC,
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 20, 0, 17, 0, 0),
		REG_RULE_EXT(5250, 5330, 20, 0, 24, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5490, 5730, 20, 0, 24, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 20, 0, 30, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_SJ = {
	.alpha2 = "SJ",
	.dfs_region = NL80211_DFS_FCC,
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 20, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 20, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5730, 80, 0, 20, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 20, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_SZ = {
	.alpha2 = "SZ",
	.dfs_region = NL80211_DFS_FCC,
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 20, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 20, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5710, 80, 0, 20, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 14, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_SE = {
	.alpha2 = "SE",
	.dfs_region = NL80211_DFS_ETSI,
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 20, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 20, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5710, 160, 0, 27, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 14, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_CH = {
	.alpha2 = "CH",
	.dfs_region = NL80211_DFS_ETSI,
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 20, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 20, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5710, 160, 0, 27, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 20, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_ES = {
	.alpha2 = "ES",
	.dfs_region = NL80211_DFS_ETSI,
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 23, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 20, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5710, 160, 0, 27, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 14, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_SK = {
	.alpha2 = "SK",
	.dfs_region = NL80211_DFS_ETSI,
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 20, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 20, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5710, 160, 0, 27, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 14, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_SI = {
	.alpha2 = "SI",
	.dfs_region = NL80211_DFS_ETSI,
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 20, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 20, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5710, 160, 0, 27, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 20, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_SL = {
	.alpha2 = "SL",
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 23, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 23, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5710, 80, 0, 30, 0, 
			NL80211_RRF_DFS | 0),
	},
	.n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_SX = {
	.alpha2 = "SX",
	.reg_rules = {
		REG_RULE_EXT(2402, 2472, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 23, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 23, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5730, 80, 0, 30, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 30, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_SG = {
	.alpha2 = "SG",
	.dfs_region = NL80211_DFS_FCC,
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 17, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 24, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5730, 160, 0, 24, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 30, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_AE = {
	.alpha2 = "AE",
	.dfs_region = NL80211_DFS_FCC,
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 17, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 24, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5730, 160, 0, 24, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 30, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_AW = {
	.alpha2 = "AW",
	.dfs_region = NL80211_DFS_ETSI,
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 20, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 20, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5730, 80, 0, 27, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 30, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_AM = {
	.alpha2 = "AM",
	.dfs_region = NL80211_DFS_FCC,
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 18, 0, 0),
	},
	.n_reg_rules = 2
};

static const struct ieee80211_regdomain regdom_AR = {
	.alpha2 = "AR",
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 17, 0, 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 23, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5490, 5590, 80, 0, 23, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5650, 5730, 80, 0, 23, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 30, 0, 0),
	},
	.n_reg_rules = 6
};

static const struct ieee80211_regdomain regdom_AS = {
	.alpha2 = "AS",
	.dfs_region = NL80211_DFS_FCC,
	.reg_rules = {
		REG_RULE_EXT(2402, 2472, 40, 0, 30, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 17, 0, 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 24, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5490, 5730, 80, 0, 24, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 30, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_IS = {
	.alpha2 = "IS",
	.dfs_region = NL80211_DFS_ETSI,
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 20, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 20, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5710, 160, 0, 27, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 14, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_HT = {
	.alpha2 = "HT",
	.dfs_region = NL80211_DFS_FCC,
	.reg_rules = {
		REG_RULE_EXT(2402, 2472, 40, 0, 30, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 24, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 24, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5730, 160, 0, 24, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 30, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_IE = {
	.alpha2 = "IE",
	.dfs_region = NL80211_DFS_ETSI,
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 20, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 20, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5710, 160, 0, 27, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 14, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_AZ = {
	.alpha2 = "AZ",
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 18, 0, 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 18, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5490, 5710, 80, 0, 27, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 14, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_AF = {
	.alpha2 = "AF",
	.dfs_region = NL80211_DFS_ETSI,
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 20, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 20, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5710, 160, 0, 27, 0, 
			NL80211_RRF_DFS | 0),
	},
	.n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_AD = {
	.alpha2 = "AD",
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 20, 0, 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 20, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5490, 5710, 80, 0, 27, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 14, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_AL = {
	.alpha2 = "AL",
	.dfs_region = NL80211_DFS_ETSI,
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 20, 0, 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 20, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5490, 5710, 80, 0, 27, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 14, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_DZ = {
	.alpha2 = "DZ",
	.dfs_region = NL80211_DFS_JP,
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 23, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 23, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5670, 160, 0, 23, 0, 
			NL80211_RRF_DFS | 0),
	},
	.n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_AO = {
	.alpha2 = "AO",
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 23, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 23, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5710, 80, 0, 30, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 30, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_AG = {
	.alpha2 = "AG",
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 23, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 23, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5730, 80, 0, 30, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 30, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_AI = {
	.alpha2 = "AI",
	.dfs_region = NL80211_DFS_ETSI,
	.reg_rules = {
		REG_RULE_EXT(2402, 2472, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 20, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 20, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5730, 160, 0, 27, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 30, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_ER = {
	.alpha2 = "ER",
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
	},
	.n_reg_rules = 1
};

static const struct ieee80211_regdomain regdom_EE = {
	.alpha2 = "EE",
	.dfs_region = NL80211_DFS_ETSI,
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 20, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 20, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5710, 160, 0, 27, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 14, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_EC = {
	.alpha2 = "EC",
	.dfs_region = NL80211_DFS_FCC,
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 20, 0, 17, 0, 0),
		REG_RULE_EXT(5250, 5330, 20, 0, 24, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5490, 5730, 20, 0, 24, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 20, 0, 30, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_ET = {
	.alpha2 = "ET",
	.dfs_region = NL80211_DFS_ETSI,
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 20, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 20, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5710, 160, 0, 27, 0, 
			NL80211_RRF_DFS | 0),
	},
	.n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_SV = {
	.alpha2 = "SV",
	.dfs_region = NL80211_DFS_FCC,
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 20, 0, 17, 0, 0),
		REG_RULE_EXT(5250, 5330, 20, 0, 23, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5490, 5730, 160, 0, 24, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 20, 0, 30, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_GB = {
	.alpha2 = "GB",
	.dfs_region = NL80211_DFS_ETSI,
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 20, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 20, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5730, 160, 0, 24, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 14, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_VG = {
	.alpha2 = "VG",
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 23, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 23, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5730, 80, 0, 30, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 30, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_IO = {
	.alpha2 = "IO",
	.dfs_region = NL80211_DFS_FCC,
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 23, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 23, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5730, 160, 0, 24, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 30, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_YE = {
	.alpha2 = "YE",
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 23, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 23, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5730, 80, 0, 30, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 30, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_OM = {
	.alpha2 = "OM",
	.dfs_region = NL80211_DFS_ETSI,
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 20, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 20, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5710, 160, 0, 27, 0, 
			NL80211_RRF_DFS | 0),
	},
	.n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_AU = {
	.alpha2 = "AU",
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 17, 0, 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 23, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5490, 5590, 80, 0, 23, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5650, 5730, 80, 0, 23, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 30, 0, 0),
	},
	.n_reg_rules = 6
};

static const struct ieee80211_regdomain regdom_AT = {
	.alpha2 = "AT",
	.dfs_region = NL80211_DFS_ETSI,
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 20, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 20, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5710, 160, 0, 27, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 14, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_HN = {
	.alpha2 = "HN",
	.dfs_region = NL80211_DFS_FCC,
	.reg_rules = {
		REG_RULE_EXT(2402, 2472, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 17, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 24, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5730, 160, 0, 24, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 30, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_AX = {
	.alpha2 = "AX",
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 23, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 23, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5730, 80, 0, 30, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 30, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_JO = {
	.alpha2 = "JO",
	.dfs_region = NL80211_DFS_JP,
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 23, 0, 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 23, 0, 0),
	},
	.n_reg_rules = 3
};

static const struct ieee80211_regdomain regdom_UG = {
	.alpha2 = "UG",
	.dfs_region = NL80211_DFS_FCC,
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 24, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 24, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5730, 160, 0, 24, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5815, 80, 0, 30, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_UY = {
	.alpha2 = "UY",
	.dfs_region = NL80211_DFS_FCC,
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 23, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 23, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 30, 0, 0),
	},
	.n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_UZ = {
	.alpha2 = "UZ",
	.dfs_region = NL80211_DFS_ETSI,
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 20, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 20, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
	},
	.n_reg_rules = 3
};

static const struct ieee80211_regdomain regdom_UA = {
	.alpha2 = "UA",
	.dfs_region = NL80211_DFS_ETSI,
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 20, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 20, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5670, 160, 0, 20, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 14, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_WF = {
	.alpha2 = "WF",
	.dfs_region = NL80211_DFS_ETSI,
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 20, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 20, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5710, 160, 0, 27, 0, 
			NL80211_RRF_DFS | 0),
	},
	.n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_IQ = {
	.alpha2 = "IQ",
	.dfs_region = NL80211_DFS_ETSI,
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 20, 0, 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 20, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5490, 5710, 80, 0, 27, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 20, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_IR = {
	.alpha2 = "IR",
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 23, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 23, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5730, 80, 0, 30, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 30, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_IL = {
	.alpha2 = "IL",
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 23, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 23, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5730, 160, 0, 0, 0, 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 23, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_EG = {
	.alpha2 = "EG",
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 17, 0, 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 23, 0, 
			NL80211_RRF_DFS | 0),
	},
	.n_reg_rules = 3
};

static const struct ieee80211_regdomain regdom_IT = {
	.alpha2 = "IT",
	.dfs_region = NL80211_DFS_ETSI,
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 20, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 20, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5710, 160, 0, 27, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 14, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_ID = {
	.alpha2 = "ID",
	.dfs_region = NL80211_DFS_JP,
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 20, 0, 20, 0, 0),
		REG_RULE_EXT(5735, 5835, 20, 0, 23, 0, 0),
	},
	.n_reg_rules = 2
};

static const struct ieee80211_regdomain regdom_IN = {
	.alpha2 = "IN",
	.dfs_region = NL80211_DFS_JP,
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 20, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 20, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 20, 0, 0),
	},
	.n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_JP = {
	.alpha2 = "JP",
	.dfs_region = NL80211_DFS_JP,
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 20, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 20, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5710, 160, 0, 20, 0, 
			NL80211_RRF_DFS | 0),
	},
	.n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_JM = {
	.alpha2 = "JM",
	.dfs_region = NL80211_DFS_FCC,
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 30, 0, 0),
	},
	.n_reg_rules = 2
};

static const struct ieee80211_regdomain regdom_ZM = {
	.alpha2 = "ZM",
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 23, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 23, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5730, 80, 0, 30, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 30, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_JE = {
	.alpha2 = "JE",
	.dfs_region = NL80211_DFS_FCC,
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 23, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 23, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5710, 80, 0, 30, 0, 
			NL80211_RRF_DFS | 0),
	},
	.n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_GQ = {
	.alpha2 = "GQ",
	.dfs_region = NL80211_DFS_FCC,
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 23, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 23, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5710, 80, 0, 30, 0, 
			NL80211_RRF_DFS | 0),
	},
	.n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_GE = {
	.alpha2 = "GE",
	.dfs_region = NL80211_DFS_ETSI,
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 18, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 18, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5710, 80, 0, 18, 0, 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 14, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_CF = {
	.alpha2 = "CF",
	.dfs_region = NL80211_DFS_FCC,
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 40, 0, 17, 0, 0),
		REG_RULE_EXT(5250, 5330, 40, 0, 24, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5490, 5710, 40, 0, 24, 0, 
			NL80211_RRF_DFS | 0),
	},
	.n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_TW = {
	.alpha2 = "TW",
	.dfs_region = NL80211_DFS_FCC,
	.reg_rules = {
		REG_RULE_EXT(2402, 2472, 40, 0, 30, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 23, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 23, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5730, 160, 0, 23, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 30, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_CN = {
	.alpha2 = "CN",
	.dfs_region = NL80211_DFS_FCC,
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 23, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 23, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 30, 0, 0),
	},
	.n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_DJ = {
	.alpha2 = "DJ",
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
	},
	.n_reg_rules = 1
};

static const struct ieee80211_regdomain regdom_GI = {
	.alpha2 = "GI",
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 23, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 23, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5710, 80, 0, 30, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 30, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_ZW = {
	.alpha2 = "ZW",
	.dfs_region = NL80211_DFS_ETSI,
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 20, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 20, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5710, 160, 0, 27, 0, 
			NL80211_RRF_DFS | 0),
	},
	.n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_TD = {
	.alpha2 = "TD",
	.dfs_region = NL80211_DFS_ETSI,
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 20, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 20, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5710, 160, 0, 27, 0, 
			NL80211_RRF_DFS | 0),
	},
	.n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_CZ = {
	.alpha2 = "CZ",
	.dfs_region = NL80211_DFS_ETSI,
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 23, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 20, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5710, 160, 0, 27, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 14, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_CL = {
	.alpha2 = "CL",
	.dfs_region = NL80211_DFS_JP,
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 20, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 20, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5730, 80, 0, 23, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 20, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_CM = {
	.alpha2 = "CM",
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 23, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 23, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5710, 80, 0, 30, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 30, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_CV = {
	.alpha2 = "CV",
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 23, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 23, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5710, 80, 0, 30, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 30, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_KZ = {
	.alpha2 = "KZ",
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5250, 5330, 40, 0, 20, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5650, 5710, 40, 0, 30, 0, 
			NL80211_RRF_DFS | 0),
	},
	.n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_QA = {
	.alpha2 = "QA",
	.dfs_region = NL80211_DFS_ETSI,
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 23, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 23, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5730, 160, 0, 20, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 20, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_KH = {
	.alpha2 = "KH",
	.dfs_region = NL80211_DFS_FCC,
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 20, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 20, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5730, 160, 0, 27, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 40, 0, 30, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_CA = {
	.alpha2 = "CA",
	.dfs_region = NL80211_DFS_FCC,
	.reg_rules = {
		REG_RULE_EXT(2402, 2472, 40, 0, 30, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 17, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 24, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5590, 80, 0, 24, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5650, 5730, 80, 0, 24, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 30, 0, 0),
	},
	.n_reg_rules = 6
};

static const struct ieee80211_regdomain regdom_KE = {
	.alpha2 = "KE",
	.dfs_region = NL80211_DFS_JP,
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 17, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 24, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5710, 80, 0, 24, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 30, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_KY = {
	.alpha2 = "KY",
	.dfs_region = NL80211_DFS_FCC,
	.reg_rules = {
		REG_RULE_EXT(2402, 2472, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 24, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 24, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5730, 160, 0, 24, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 30, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_KM = {
	.alpha2 = "KM",
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 23, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 23, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5710, 80, 0, 30, 0, 
			NL80211_RRF_DFS | 0),
	},
	.n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_CR = {
	.alpha2 = "CR",
	.dfs_region = NL80211_DFS_FCC,
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 17, 0, 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 24, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5490, 5730, 80, 0, 24, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 30, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_CC = {
	.alpha2 = "CC",
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 23, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 23, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5590, 80, 0, 30, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5650, 5730, 80, 0, 30, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 30, 0, 0),
	},
	.n_reg_rules = 6
};

static const struct ieee80211_regdomain regdom_CI = {
	.alpha2 = "CI",
	.dfs_region = NL80211_DFS_FCC,
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 17, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 24, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5710, 160, 0, 24, 0, 
			NL80211_RRF_DFS | 0),
	},
	.n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_CO = {
	.alpha2 = "CO",
	.dfs_region = NL80211_DFS_FCC,
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 17, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 24, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5730, 160, 0, 24, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 30, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_CG = {
	.alpha2 = "CG",
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 23, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 23, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5710, 80, 0, 30, 0, 
			NL80211_RRF_DFS | 0),
	},
	.n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_CD = {
	.alpha2 = "CD",
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 23, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 23, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5710, 80, 0, 30, 0, 
			NL80211_RRF_DFS | 0),
	},
	.n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_CU = {
	.alpha2 = "CU",
	.reg_rules = {
		REG_RULE_EXT(2402, 2472, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 23, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 23, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5730, 80, 0, 30, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 30, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_KW = {
	.alpha2 = "KW",
	.dfs_region = NL80211_DFS_ETSI,
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 20, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 20, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5710, 80, 0, 27, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 14, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_XK = {
	.alpha2 = "XK",
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 20, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 20, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5710, 80, 0, 27, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 14, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_CK = {
	.alpha2 = "CK",
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 23, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 23, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5730, 80, 0, 30, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 30, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_HR = {
	.alpha2 = "HR",
	.dfs_region = NL80211_DFS_ETSI,
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 23, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 20, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5710, 160, 0, 27, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 14, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_CX = {
	.alpha2 = "CX",
	.dfs_region = NL80211_DFS_FCC,
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 17, 0, 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 23, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5490, 5590, 80, 0, 23, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5650, 5730, 80, 0, 23, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 30, 0, 0),
	},
	.n_reg_rules = 6
};

static const struct ieee80211_regdomain regdom_KG = {
	.alpha2 = "KG",
	.dfs_region = NL80211_DFS_FCC,
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 20, 0, 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 20, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5490, 5710, 80, 0, 27, 0, 
			NL80211_RRF_DFS | 0),
	},
	.n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_KI = {
	.alpha2 = "KI",
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 23, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 23, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5590, 80, 0, 30, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5650, 5730, 80, 0, 30, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 30, 0, 0),
	},
	.n_reg_rules = 6
};

static const struct ieee80211_regdomain regdom_CY = {
	.alpha2 = "CY",
	.dfs_region = NL80211_DFS_ETSI,
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 20, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 20, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5710, 80, 0, 27, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 14, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_TH = {
	.alpha2 = "TH",
	.dfs_region = NL80211_DFS_FCC,
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 17, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 24, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5730, 80, 0, 24, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 20, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_TJ = {
	.alpha2 = "TJ",
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 20, 0, 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 20, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5490, 5710, 80, 0, 20, 0, 
			NL80211_RRF_DFS | 0),
	},
	.n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_TZ = {
	.alpha2 = "TZ",
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 20, 0, 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 20, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5490, 5710, 80, 0, 20, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 30, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_TC = {
	.alpha2 = "TC",
	.dfs_region = NL80211_DFS_FCC,
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 24, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 24, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5730, 160, 0, 24, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 30, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_TR = {
	.alpha2 = "TR",
	.dfs_region = NL80211_DFS_ETSI,
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 20, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 20, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5710, 160, 0, 27, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 14, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_TG = {
	.alpha2 = "TG",
	.dfs_region = NL80211_DFS_ETSI,
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5250, 5330, 40, 0, 20, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5490, 5710, 40, 0, 27, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 40, 0, 20, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_TK = {
	.alpha2 = "TK",
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 20, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 20, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5730, 80, 0, 20, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 20, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_TO = {
	.alpha2 = "TO",
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
	},
	.n_reg_rules = 1
};

static const struct ieee80211_regdomain regdom_TM = {
	.alpha2 = "TM",
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 20, 0, 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 20, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5490, 5710, 80, 0, 27, 0, 
			NL80211_RRF_DFS | 0),
	},
	.n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_TV = {
	.alpha2 = "TV",
	.dfs_region = NL80211_DFS_FCC,
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
	},
	.n_reg_rules = 1
};

static const struct ieee80211_regdomain regdom_TN = {
	.alpha2 = "TN",
	.dfs_region = NL80211_DFS_ETSI,
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 20, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 20, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
	},
	.n_reg_rules = 3
};

static const struct ieee80211_regdomain regdom_TT = {
	.alpha2 = "TT",
	.dfs_region = NL80211_DFS_FCC,
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 24, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 24, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5730, 160, 0, 24, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 30, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_PA = {
	.alpha2 = "PA",
	.dfs_region = NL80211_DFS_FCC,
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 36, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 36, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 30, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5730, 160, 0, 30, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 36, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_PY = {
	.alpha2 = "PY",
	.dfs_region = NL80211_DFS_FCC,
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 24, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 24, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5730, 160, 0, 24, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 30, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_PK = {
	.alpha2 = "PK",
	.dfs_region = NL80211_DFS_FCC,
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 30, 0, 0),
	},
	.n_reg_rules = 2
};

static const struct ieee80211_regdomain regdom_PG = {
	.alpha2 = "PG",
	.dfs_region = NL80211_DFS_FCC,
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 17, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 24, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5730, 160, 0, 24, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 30, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_PW = {
	.alpha2 = "PW",
	.dfs_region = NL80211_DFS_FCC,
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 30, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 24, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 24, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5730, 160, 0, 24, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 20, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_PS = {
	.alpha2 = "PS",
	.dfs_region = NL80211_DFS_FCC,
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 30, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 20, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 20, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5730, 80, 0, 20, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 20, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_FO = {
	.alpha2 = "FO",
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 17, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 24, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5710, 160, 0, 24, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 30, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_PE = {
	.alpha2 = "PE",
	.dfs_region = NL80211_DFS_FCC,
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 17, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 24, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5730, 80, 0, 24, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 30, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_PT = {
	.alpha2 = "PT",
	.dfs_region = NL80211_DFS_ETSI,
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 20, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 20, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5710, 160, 0, 27, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 14, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_FK = {
	.alpha2 = "FK",
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 23, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 23, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5710, 80, 0, 30, 0, 
			NL80211_RRF_DFS | 0),
	},
	.n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_PL = {
	.alpha2 = "PL",
	.dfs_region = NL80211_DFS_ETSI,
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 20, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 20, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5710, 80, 0, 27, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 14, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_PR = {
	.alpha2 = "PR",
	.dfs_region = NL80211_DFS_FCC,
	.reg_rules = {
		REG_RULE_EXT(2402, 2472, 40, 0, 30, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 17, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 24, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5730, 160, 0, 24, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 30, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_FR = {
	.alpha2 = "FR",
	.dfs_region = NL80211_DFS_ETSI,
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 20, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 20, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5710, 160, 0, 27, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 14, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_GF = {
	.alpha2 = "GF",
	.dfs_region = NL80211_DFS_FCC,
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 20, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 20, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5710, 80, 0, 27, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 14, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_TF = {
	.alpha2 = "TF",
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 23, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 23, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5710, 80, 0, 30, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 30, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_PF = {
	.alpha2 = "PF",
	.dfs_region = NL80211_DFS_ETSI,
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 20, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 20, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5710, 80, 0, 20, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 20, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_FJ = {
	.alpha2 = "FJ",
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 23, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 23, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5590, 80, 0, 30, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5650, 5730, 80, 0, 30, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 30, 0, 0),
	},
	.n_reg_rules = 6
};

static const struct ieee80211_regdomain regdom_FI = {
	.alpha2 = "FI",
	.dfs_region = NL80211_DFS_ETSI,
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 23, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 20, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5710, 160, 0, 27, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 14, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_PH = {
	.alpha2 = "PH",
	.dfs_region = NL80211_DFS_FCC,
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 17, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 24, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5730, 80, 0, 24, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 30, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_PN = {
	.alpha2 = "PN",
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 23, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 23, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5710, 80, 0, 30, 0, 
			NL80211_RRF_DFS | 0),
	},
	.n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_HM = {
	.alpha2 = "HM",
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 23, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 23, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5590, 80, 0, 30, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5650, 5730, 80, 0, 30, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 30, 0, 0),
	},
	.n_reg_rules = 6
};

static const struct ieee80211_regdomain regdom_HU = {
	.alpha2 = "HU",
	.dfs_region = NL80211_DFS_ETSI,
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 20, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 20, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5710, 160, 0, 27, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 14, 0, 0),
	},
	.n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_HK = {
	.alpha2 = "HK",
	.dfs_region = NL80211_DFS_ETSI,
	.reg_rules = {
		REG_RULE_EXT(2402, 2482, 40, 0, 20, 0, 0),
		REG_RULE_EXT(5170, 5250, 80, 0, 17, 0, 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5250, 5330, 80, 0, 24, 0, 
			NL80211_RRF_DFS | 
			NL80211_RRF_AUTO_BW | 0),
		REG_RULE_EXT(5490, 5730, 160, 0, 24, 0, 
			NL80211_RRF_DFS | 0),
		REG_RULE_EXT(5735, 5835, 80, 0, 30, 0, 0),
	},
	.n_reg_rules = 5
};

const struct ieee80211_regdomain *reg_regdb[] = {
	&regdom_00,
	&regdom_GH,
	&regdom_GA,
	&regdom_GY,
	&regdom_GM,
	&regdom_GG,
	&regdom_GP,
	&regdom_GT,
	&regdom_GU,
	&regdom_GD,
	&regdom_GR,
	&regdom_GL,
	&regdom_GN,
	&regdom_GW,
	&regdom_NA,
	&regdom_NR,
	&regdom_NG,
	&regdom_AQ,
	&regdom_SS,
	&regdom_ZA,
	&regdom_NL,
	&regdom_AN,
	&regdom_NP,
	&regdom_NO,
	&regdom_NF,
	&regdom_NC,
	&regdom_NZ,
	&regdom_NU,
	&regdom_NE,
	&regdom_NI,
	&regdom_KR,
	&regdom_DK,
	&regdom_DO,
	&regdom_DM,
	&regdom_DE,
	&regdom_TL,
	&regdom_LA,
	&regdom_LR,
	&regdom_LV,
	&regdom_RU,
	&regdom_LB,
	&regdom_LS,
	&regdom_RE,
	&regdom_RO,
	&regdom_LU,
	&regdom_RW,
	&regdom_LY,
	&regdom_LT,
	&regdom_LI,
	&regdom_MG,
	&regdom_MQ,
	&regdom_MH,
	&regdom_YT,
	&regdom_MO,
	&regdom_MK,
	&regdom_MW,
	&regdom_MY,
	&regdom_ML,
	&regdom_IM,
	&regdom_MX,
	&regdom_MC,
	&regdom_MA,
	&regdom_MU,
	&regdom_MR,
	&regdom_MZ,
	&regdom_ME,
	&regdom_MS,
	&regdom_MD,
	&regdom_MV,
	&regdom_MT,
	&regdom_MN,
	&regdom_US,
	&regdom_UM,
	&regdom_VI,
	&regdom_MM,
	&regdom_FM,
	&regdom_VU,
	&regdom_BH,
	&regdom_BB,
	&regdom_VA,
	&regdom_BS,
	&regdom_BD,
	&regdom_BM,
	&regdom_BJ,
	&regdom_VE,
	&regdom_VN,
	&regdom_BE,
	&regdom_BY,
	&regdom_BZ,
	&regdom_BA,
	&regdom_BW,
	&regdom_BO,
	&regdom_BI,
	&regdom_BF,
	&regdom_BV,
	&regdom_BT,
	&regdom_MP,
	&regdom_BG,
	&regdom_BR,
	&regdom_BN,
	&regdom_WS,
	&regdom_SA,
	&regdom_GS,
	&regdom_SM,
	&regdom_ST,
	&regdom_PM,
	&regdom_EH,
	&regdom_SN,
	&regdom_RS,
	&regdom_SC,
	&regdom_LC,
	&regdom_VC,
	&regdom_KN,
	&regdom_SH,
	&regdom_SO,
	&regdom_SB,
	&regdom_SD,
	&regdom_SR,
	&regdom_LK,
	&regdom_SJ,
	&regdom_SZ,
	&regdom_SE,
	&regdom_CH,
	&regdom_ES,
	&regdom_SK,
	&regdom_SI,
	&regdom_SL,
	&regdom_SX,
	&regdom_SG,
	&regdom_AE,
	&regdom_AW,
	&regdom_AM,
	&regdom_AR,
	&regdom_AS,
	&regdom_IS,
	&regdom_HT,
	&regdom_IE,
	&regdom_AZ,
	&regdom_AF,
	&regdom_AD,
	&regdom_AL,
	&regdom_DZ,
	&regdom_AO,
	&regdom_AG,
	&regdom_AI,
	&regdom_ER,
	&regdom_EE,
	&regdom_EC,
	&regdom_ET,
	&regdom_SV,
	&regdom_GB,
	&regdom_VG,
	&regdom_IO,
	&regdom_YE,
	&regdom_OM,
	&regdom_AU,
	&regdom_AT,
	&regdom_HN,
	&regdom_AX,
	&regdom_JO,
	&regdom_UG,
	&regdom_UY,
	&regdom_UZ,
	&regdom_UA,
	&regdom_WF,
	&regdom_IQ,
	&regdom_IR,
	&regdom_IL,
	&regdom_EG,
	&regdom_IT,
	&regdom_ID,
	&regdom_IN,
	&regdom_JP,
	&regdom_JM,
	&regdom_ZM,
	&regdom_JE,
	&regdom_GQ,
	&regdom_GE,
	&regdom_CF,
	&regdom_TW,
	&regdom_CN,
	&regdom_DJ,
	&regdom_GI,
	&regdom_ZW,
	&regdom_TD,
	&regdom_CZ,
	&regdom_CL,
	&regdom_CM,
	&regdom_CV,
	&regdom_KZ,
	&regdom_QA,
	&regdom_KH,
	&regdom_CA,
	&regdom_KE,
	&regdom_KY,
	&regdom_KM,
	&regdom_CR,
	&regdom_CC,
	&regdom_CI,
	&regdom_CO,
	&regdom_CG,
	&regdom_CD,
	&regdom_CU,
	&regdom_KW,
	&regdom_XK,
	&regdom_CK,
	&regdom_HR,
	&regdom_CX,
	&regdom_KG,
	&regdom_KI,
	&regdom_CY,
	&regdom_TH,
	&regdom_TJ,
	&regdom_TZ,
	&regdom_TC,
	&regdom_TR,
	&regdom_TG,
	&regdom_TK,
	&regdom_TO,
	&regdom_TM,
	&regdom_TV,
	&regdom_TN,
	&regdom_TT,
	&regdom_PA,
	&regdom_PY,
	&regdom_PK,
	&regdom_PG,
	&regdom_PW,
	&regdom_PS,
	&regdom_FO,
	&regdom_PE,
	&regdom_PT,
	&regdom_FK,
	&regdom_PL,
	&regdom_PR,
	&regdom_FR,
	&regdom_GF,
	&regdom_TF,
	&regdom_PF,
	&regdom_FJ,
	&regdom_FI,
	&regdom_PH,
	&regdom_PN,
	&regdom_HM,
	&regdom_HU,
	&regdom_HK,
};

int reg_regdb_size = ARRAY_SIZE(reg_regdb);
