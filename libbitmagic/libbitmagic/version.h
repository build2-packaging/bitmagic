#pragma once

// The numeric version format is AAAAABBBBBCCCCCDDDE where:
//
// AAAAA - major version number
// BBBBB - minor version number
// CCCCC - bugfix version number
// DDD   - alpha / beta (DDD + 500) version number
// E     - final (0) / snapshot (1)
//
// When DDDE is not 0, 1 is subtracted from AAAAABBBBBCCCCC. For example:
//
// Version      AAAAABBBBBCCCCCDDDE
//
// 0.1.0        0000000001000000000
// 0.1.2        0000000001000020000
// 1.2.3        0000100002000030000
// 2.2.0-a.1    0000200001999990010
// 3.0.0-b.2    0000299999999995020
// 2.2.0-a.1.z  0000200001999990011
//
#define LIBBITMAGIC_VERSION       700013000040000ULL
#define LIBBITMAGIC_VERSION_STR   "7.13.4"
#define LIBBITMAGIC_VERSION_ID    "7.13.4"

#define LIBBITMAGIC_VERSION_MAJOR 7
#define LIBBITMAGIC_VERSION_MINOR 13
#define LIBBITMAGIC_VERSION_PATCH 4

#define LIBBITMAGIC_PRE_RELEASE   false

#define LIBBITMAGIC_SNAPSHOT_SN   0ULL
#define LIBBITMAGIC_SNAPSHOT_ID   ""
