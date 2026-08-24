#pragma once

#include <Roblox/EncryptionsHelper.hpp>

#define PROTO_LINEINFO_ENC VMValue3
#define PROTO_ABSLINEINFO_ENC VMValue4
#define PROTO_LOCVARS_ENC VMValue1
#define PROTO_UPVALUES_ENC VMValue1
#define PROTO_SOURCE_ENC VMValue1
#define PROTO_DEBUGINSN_ENC VMValue2
#define PROTO_DEBUGNAME_ENC VMValue4
#define PROTO_TYPEINFO_ENC VMValue1
#define PROTO_USERDATA_ENC VMValue4
#define LSTATE_STACKSIZE_ENC VMValue4
#define CLOSURE_CONT_ENC VMValue3
#define CLOSURE_DEBUGNAME_ENC VMValue1
#define UDATA_META_ENC VMValue3
#define TSTRING_HASH_ENC VMValue3

#define proto_lineinfo         PROTO_LINEINFO_ENC
#define proto_debuginsn        PROTO_DEBUGINSN_ENC
#define proto_typeinfo         PROTO_TYPEINFO_ENC
#define proto_abslineinfo      PROTO_ABSLINEINFO_ENC
#define proto_source           PROTO_SOURCE_ENC
#define proto_locvars          PROTO_LOCVARS_ENC
#define proto_upvalues         PROTO_UPVALUES_ENC
#define proto_debugname        PROTO_DEBUGNAME_ENC
#define proto_userdata         PROTO_USERDATA_ENC
#define udata_meta             UDATA_META_ENC
#define closure_debugname      CLOSURE_DEBUGNAME_ENC
#define closure_cont           CLOSURE_CONT_ENC
#define tstring_hash           TSTRING_HASH_ENC
#define lstate_stacksize       LSTATE_STACKSIZE_ENC
