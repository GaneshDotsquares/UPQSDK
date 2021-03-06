/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/api/v2/auth/common.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#ifndef ENVOY_API_V2_AUTH_COMMON_PROTO_UPB_H_
#define ENVOY_API_V2_AUTH_COMMON_PROTO_UPB_H_

#if COCOAPODS==1
  #include  "third_party/upb/upb/generated_util.h"
#else
  #include  "upb/generated_util.h"
#endif
#if COCOAPODS==1
  #include  "third_party/upb/upb/msg.h"
#else
  #include  "upb/msg.h"
#endif
#if COCOAPODS==1
  #include  "third_party/upb/upb/decode.h"
#else
  #include  "upb/decode.h"
#endif
#if COCOAPODS==1
  #include  "third_party/upb/upb/encode.h"
#else
  #include  "upb/encode.h"
#endif

#if COCOAPODS==1
  #include  "third_party/upb/upb/port_def.inc"
#else
  #include  "upb/port_def.inc"
#endif

#ifdef __cplusplus
extern "C" {
#endif

struct envoy_api_v2_auth_TlsParameters;
struct envoy_api_v2_auth_PrivateKeyProvider;
struct envoy_api_v2_auth_TlsCertificate;
struct envoy_api_v2_auth_TlsSessionTicketKeys;
struct envoy_api_v2_auth_CertificateValidationContext;
typedef struct envoy_api_v2_auth_TlsParameters envoy_api_v2_auth_TlsParameters;
typedef struct envoy_api_v2_auth_PrivateKeyProvider envoy_api_v2_auth_PrivateKeyProvider;
typedef struct envoy_api_v2_auth_TlsCertificate envoy_api_v2_auth_TlsCertificate;
typedef struct envoy_api_v2_auth_TlsSessionTicketKeys envoy_api_v2_auth_TlsSessionTicketKeys;
typedef struct envoy_api_v2_auth_CertificateValidationContext envoy_api_v2_auth_CertificateValidationContext;
extern const upb_msglayout envoy_api_v2_auth_TlsParameters_msginit;
extern const upb_msglayout envoy_api_v2_auth_PrivateKeyProvider_msginit;
extern const upb_msglayout envoy_api_v2_auth_TlsCertificate_msginit;
extern const upb_msglayout envoy_api_v2_auth_TlsSessionTicketKeys_msginit;
extern const upb_msglayout envoy_api_v2_auth_CertificateValidationContext_msginit;
struct envoy_api_v2_core_DataSource;
struct envoy_type_matcher_StringMatcher;
struct google_protobuf_Any;
struct google_protobuf_BoolValue;
struct google_protobuf_Struct;
extern const upb_msglayout envoy_api_v2_core_DataSource_msginit;
extern const upb_msglayout envoy_type_matcher_StringMatcher_msginit;
extern const upb_msglayout google_protobuf_Any_msginit;
extern const upb_msglayout google_protobuf_BoolValue_msginit;
extern const upb_msglayout google_protobuf_Struct_msginit;

typedef enum {
  envoy_api_v2_auth_CertificateValidationContext_VERIFY_TRUST_CHAIN = 0,
  envoy_api_v2_auth_CertificateValidationContext_ACCEPT_UNTRUSTED = 1
} envoy_api_v2_auth_CertificateValidationContext_TrustChainVerification;

typedef enum {
  envoy_api_v2_auth_TlsParameters_TLS_AUTO = 0,
  envoy_api_v2_auth_TlsParameters_TLSv1_0 = 1,
  envoy_api_v2_auth_TlsParameters_TLSv1_1 = 2,
  envoy_api_v2_auth_TlsParameters_TLSv1_2 = 3,
  envoy_api_v2_auth_TlsParameters_TLSv1_3 = 4
} envoy_api_v2_auth_TlsParameters_TlsProtocol;


/* envoy.api.v2.auth.TlsParameters */

UPB_INLINE envoy_api_v2_auth_TlsParameters *envoy_api_v2_auth_TlsParameters_new(upb_arena *arena) {
  return (envoy_api_v2_auth_TlsParameters *)upb_msg_new(&envoy_api_v2_auth_TlsParameters_msginit, arena);
}
UPB_INLINE envoy_api_v2_auth_TlsParameters *envoy_api_v2_auth_TlsParameters_parse(const char *buf, size_t size,
                        upb_arena *arena) {
  envoy_api_v2_auth_TlsParameters *ret = envoy_api_v2_auth_TlsParameters_new(arena);
  return (ret && upb_decode(buf, size, ret, &envoy_api_v2_auth_TlsParameters_msginit, arena)) ? ret : NULL;
}
UPB_INLINE char *envoy_api_v2_auth_TlsParameters_serialize(const envoy_api_v2_auth_TlsParameters *msg, upb_arena *arena, size_t *len) {
  return upb_encode(msg, &envoy_api_v2_auth_TlsParameters_msginit, arena, len);
}

UPB_INLINE int32_t envoy_api_v2_auth_TlsParameters_tls_minimum_protocol_version(const envoy_api_v2_auth_TlsParameters *msg) { return UPB_FIELD_AT(msg, int32_t, UPB_SIZE(0, 0)); }
UPB_INLINE int32_t envoy_api_v2_auth_TlsParameters_tls_maximum_protocol_version(const envoy_api_v2_auth_TlsParameters *msg) { return UPB_FIELD_AT(msg, int32_t, UPB_SIZE(8, 8)); }
UPB_INLINE upb_strview const* envoy_api_v2_auth_TlsParameters_cipher_suites(const envoy_api_v2_auth_TlsParameters *msg, size_t *len) { return (upb_strview const*)_upb_array_accessor(msg, UPB_SIZE(16, 16), len); }
UPB_INLINE upb_strview const* envoy_api_v2_auth_TlsParameters_ecdh_curves(const envoy_api_v2_auth_TlsParameters *msg, size_t *len) { return (upb_strview const*)_upb_array_accessor(msg, UPB_SIZE(20, 24), len); }

UPB_INLINE void envoy_api_v2_auth_TlsParameters_set_tls_minimum_protocol_version(envoy_api_v2_auth_TlsParameters *msg, int32_t value) {
  UPB_FIELD_AT(msg, int32_t, UPB_SIZE(0, 0)) = value;
}
UPB_INLINE void envoy_api_v2_auth_TlsParameters_set_tls_maximum_protocol_version(envoy_api_v2_auth_TlsParameters *msg, int32_t value) {
  UPB_FIELD_AT(msg, int32_t, UPB_SIZE(8, 8)) = value;
}
UPB_INLINE upb_strview* envoy_api_v2_auth_TlsParameters_mutable_cipher_suites(envoy_api_v2_auth_TlsParameters *msg, size_t *len) {
  return (upb_strview*)_upb_array_mutable_accessor(msg, UPB_SIZE(16, 16), len);
}
UPB_INLINE upb_strview* envoy_api_v2_auth_TlsParameters_resize_cipher_suites(envoy_api_v2_auth_TlsParameters *msg, size_t len, upb_arena *arena) {
  return (upb_strview*)_upb_array_resize_accessor(msg, UPB_SIZE(16, 16), len, UPB_SIZE(8, 16), UPB_TYPE_STRING, arena);
}
UPB_INLINE bool envoy_api_v2_auth_TlsParameters_add_cipher_suites(envoy_api_v2_auth_TlsParameters *msg, upb_strview val, upb_arena *arena) {
  return _upb_array_append_accessor(
      msg, UPB_SIZE(16, 16), UPB_SIZE(8, 16), UPB_TYPE_STRING, &val, arena);
}
UPB_INLINE upb_strview* envoy_api_v2_auth_TlsParameters_mutable_ecdh_curves(envoy_api_v2_auth_TlsParameters *msg, size_t *len) {
  return (upb_strview*)_upb_array_mutable_accessor(msg, UPB_SIZE(20, 24), len);
}
UPB_INLINE upb_strview* envoy_api_v2_auth_TlsParameters_resize_ecdh_curves(envoy_api_v2_auth_TlsParameters *msg, size_t len, upb_arena *arena) {
  return (upb_strview*)_upb_array_resize_accessor(msg, UPB_SIZE(20, 24), len, UPB_SIZE(8, 16), UPB_TYPE_STRING, arena);
}
UPB_INLINE bool envoy_api_v2_auth_TlsParameters_add_ecdh_curves(envoy_api_v2_auth_TlsParameters *msg, upb_strview val, upb_arena *arena) {
  return _upb_array_append_accessor(
      msg, UPB_SIZE(20, 24), UPB_SIZE(8, 16), UPB_TYPE_STRING, &val, arena);
}

/* envoy.api.v2.auth.PrivateKeyProvider */

UPB_INLINE envoy_api_v2_auth_PrivateKeyProvider *envoy_api_v2_auth_PrivateKeyProvider_new(upb_arena *arena) {
  return (envoy_api_v2_auth_PrivateKeyProvider *)upb_msg_new(&envoy_api_v2_auth_PrivateKeyProvider_msginit, arena);
}
UPB_INLINE envoy_api_v2_auth_PrivateKeyProvider *envoy_api_v2_auth_PrivateKeyProvider_parse(const char *buf, size_t size,
                        upb_arena *arena) {
  envoy_api_v2_auth_PrivateKeyProvider *ret = envoy_api_v2_auth_PrivateKeyProvider_new(arena);
  return (ret && upb_decode(buf, size, ret, &envoy_api_v2_auth_PrivateKeyProvider_msginit, arena)) ? ret : NULL;
}
UPB_INLINE char *envoy_api_v2_auth_PrivateKeyProvider_serialize(const envoy_api_v2_auth_PrivateKeyProvider *msg, upb_arena *arena, size_t *len) {
  return upb_encode(msg, &envoy_api_v2_auth_PrivateKeyProvider_msginit, arena, len);
}

typedef enum {
  envoy_api_v2_auth_PrivateKeyProvider_config_type_config = 2,
  envoy_api_v2_auth_PrivateKeyProvider_config_type_typed_config = 3,
  envoy_api_v2_auth_PrivateKeyProvider_config_type_NOT_SET = 0
} envoy_api_v2_auth_PrivateKeyProvider_config_type_oneofcases;
UPB_INLINE envoy_api_v2_auth_PrivateKeyProvider_config_type_oneofcases envoy_api_v2_auth_PrivateKeyProvider_config_type_case(const envoy_api_v2_auth_PrivateKeyProvider* msg) { return (envoy_api_v2_auth_PrivateKeyProvider_config_type_oneofcases)UPB_FIELD_AT(msg, int32_t, UPB_SIZE(12, 24)); }

UPB_INLINE upb_strview envoy_api_v2_auth_PrivateKeyProvider_provider_name(const envoy_api_v2_auth_PrivateKeyProvider *msg) { return UPB_FIELD_AT(msg, upb_strview, UPB_SIZE(0, 0)); }
UPB_INLINE bool envoy_api_v2_auth_PrivateKeyProvider_has_config(const envoy_api_v2_auth_PrivateKeyProvider *msg) { return _upb_has_oneof_field(msg, UPB_SIZE(12, 24), 2); }
UPB_INLINE const struct google_protobuf_Struct* envoy_api_v2_auth_PrivateKeyProvider_config(const envoy_api_v2_auth_PrivateKeyProvider *msg) { return UPB_READ_ONEOF(msg, const struct google_protobuf_Struct*, UPB_SIZE(8, 16), UPB_SIZE(12, 24), 2, NULL); }
UPB_INLINE bool envoy_api_v2_auth_PrivateKeyProvider_has_typed_config(const envoy_api_v2_auth_PrivateKeyProvider *msg) { return _upb_has_oneof_field(msg, UPB_SIZE(12, 24), 3); }
UPB_INLINE const struct google_protobuf_Any* envoy_api_v2_auth_PrivateKeyProvider_typed_config(const envoy_api_v2_auth_PrivateKeyProvider *msg) { return UPB_READ_ONEOF(msg, const struct google_protobuf_Any*, UPB_SIZE(8, 16), UPB_SIZE(12, 24), 3, NULL); }

UPB_INLINE void envoy_api_v2_auth_PrivateKeyProvider_set_provider_name(envoy_api_v2_auth_PrivateKeyProvider *msg, upb_strview value) {
  UPB_FIELD_AT(msg, upb_strview, UPB_SIZE(0, 0)) = value;
}
UPB_INLINE void envoy_api_v2_auth_PrivateKeyProvider_set_config(envoy_api_v2_auth_PrivateKeyProvider *msg, struct google_protobuf_Struct* value) {
  UPB_WRITE_ONEOF(msg, struct google_protobuf_Struct*, UPB_SIZE(8, 16), value, UPB_SIZE(12, 24), 2);
}
UPB_INLINE struct google_protobuf_Struct* envoy_api_v2_auth_PrivateKeyProvider_mutable_config(envoy_api_v2_auth_PrivateKeyProvider *msg, upb_arena *arena) {
  struct google_protobuf_Struct* sub = (struct google_protobuf_Struct*)envoy_api_v2_auth_PrivateKeyProvider_config(msg);
  if (sub == NULL) {
    sub = (struct google_protobuf_Struct*)upb_msg_new(&google_protobuf_Struct_msginit, arena);
    if (!sub) return NULL;
    envoy_api_v2_auth_PrivateKeyProvider_set_config(msg, sub);
  }
  return sub;
}
UPB_INLINE void envoy_api_v2_auth_PrivateKeyProvider_set_typed_config(envoy_api_v2_auth_PrivateKeyProvider *msg, struct google_protobuf_Any* value) {
  UPB_WRITE_ONEOF(msg, struct google_protobuf_Any*, UPB_SIZE(8, 16), value, UPB_SIZE(12, 24), 3);
}
UPB_INLINE struct google_protobuf_Any* envoy_api_v2_auth_PrivateKeyProvider_mutable_typed_config(envoy_api_v2_auth_PrivateKeyProvider *msg, upb_arena *arena) {
  struct google_protobuf_Any* sub = (struct google_protobuf_Any*)envoy_api_v2_auth_PrivateKeyProvider_typed_config(msg);
  if (sub == NULL) {
    sub = (struct google_protobuf_Any*)upb_msg_new(&google_protobuf_Any_msginit, arena);
    if (!sub) return NULL;
    envoy_api_v2_auth_PrivateKeyProvider_set_typed_config(msg, sub);
  }
  return sub;
}

/* envoy.api.v2.auth.TlsCertificate */

UPB_INLINE envoy_api_v2_auth_TlsCertificate *envoy_api_v2_auth_TlsCertificate_new(upb_arena *arena) {
  return (envoy_api_v2_auth_TlsCertificate *)upb_msg_new(&envoy_api_v2_auth_TlsCertificate_msginit, arena);
}
UPB_INLINE envoy_api_v2_auth_TlsCertificate *envoy_api_v2_auth_TlsCertificate_parse(const char *buf, size_t size,
                        upb_arena *arena) {
  envoy_api_v2_auth_TlsCertificate *ret = envoy_api_v2_auth_TlsCertificate_new(arena);
  return (ret && upb_decode(buf, size, ret, &envoy_api_v2_auth_TlsCertificate_msginit, arena)) ? ret : NULL;
}
UPB_INLINE char *envoy_api_v2_auth_TlsCertificate_serialize(const envoy_api_v2_auth_TlsCertificate *msg, upb_arena *arena, size_t *len) {
  return upb_encode(msg, &envoy_api_v2_auth_TlsCertificate_msginit, arena, len);
}

UPB_INLINE const struct envoy_api_v2_core_DataSource* envoy_api_v2_auth_TlsCertificate_certificate_chain(const envoy_api_v2_auth_TlsCertificate *msg) { return UPB_FIELD_AT(msg, const struct envoy_api_v2_core_DataSource*, UPB_SIZE(0, 0)); }
UPB_INLINE const struct envoy_api_v2_core_DataSource* envoy_api_v2_auth_TlsCertificate_private_key(const envoy_api_v2_auth_TlsCertificate *msg) { return UPB_FIELD_AT(msg, const struct envoy_api_v2_core_DataSource*, UPB_SIZE(4, 8)); }
UPB_INLINE const struct envoy_api_v2_core_DataSource* envoy_api_v2_auth_TlsCertificate_password(const envoy_api_v2_auth_TlsCertificate *msg) { return UPB_FIELD_AT(msg, const struct envoy_api_v2_core_DataSource*, UPB_SIZE(8, 16)); }
UPB_INLINE const struct envoy_api_v2_core_DataSource* envoy_api_v2_auth_TlsCertificate_ocsp_staple(const envoy_api_v2_auth_TlsCertificate *msg) { return UPB_FIELD_AT(msg, const struct envoy_api_v2_core_DataSource*, UPB_SIZE(12, 24)); }
UPB_INLINE const struct envoy_api_v2_core_DataSource* const* envoy_api_v2_auth_TlsCertificate_signed_certificate_timestamp(const envoy_api_v2_auth_TlsCertificate *msg, size_t *len) { return (const struct envoy_api_v2_core_DataSource* const*)_upb_array_accessor(msg, UPB_SIZE(20, 40), len); }
UPB_INLINE const envoy_api_v2_auth_PrivateKeyProvider* envoy_api_v2_auth_TlsCertificate_private_key_provider(const envoy_api_v2_auth_TlsCertificate *msg) { return UPB_FIELD_AT(msg, const envoy_api_v2_auth_PrivateKeyProvider*, UPB_SIZE(16, 32)); }

UPB_INLINE void envoy_api_v2_auth_TlsCertificate_set_certificate_chain(envoy_api_v2_auth_TlsCertificate *msg, struct envoy_api_v2_core_DataSource* value) {
  UPB_FIELD_AT(msg, struct envoy_api_v2_core_DataSource*, UPB_SIZE(0, 0)) = value;
}
UPB_INLINE struct envoy_api_v2_core_DataSource* envoy_api_v2_auth_TlsCertificate_mutable_certificate_chain(envoy_api_v2_auth_TlsCertificate *msg, upb_arena *arena) {
  struct envoy_api_v2_core_DataSource* sub = (struct envoy_api_v2_core_DataSource*)envoy_api_v2_auth_TlsCertificate_certificate_chain(msg);
  if (sub == NULL) {
    sub = (struct envoy_api_v2_core_DataSource*)upb_msg_new(&envoy_api_v2_core_DataSource_msginit, arena);
    if (!sub) return NULL;
    envoy_api_v2_auth_TlsCertificate_set_certificate_chain(msg, sub);
  }
  return sub;
}
UPB_INLINE void envoy_api_v2_auth_TlsCertificate_set_private_key(envoy_api_v2_auth_TlsCertificate *msg, struct envoy_api_v2_core_DataSource* value) {
  UPB_FIELD_AT(msg, struct envoy_api_v2_core_DataSource*, UPB_SIZE(4, 8)) = value;
}
UPB_INLINE struct envoy_api_v2_core_DataSource* envoy_api_v2_auth_TlsCertificate_mutable_private_key(envoy_api_v2_auth_TlsCertificate *msg, upb_arena *arena) {
  struct envoy_api_v2_core_DataSource* sub = (struct envoy_api_v2_core_DataSource*)envoy_api_v2_auth_TlsCertificate_private_key(msg);
  if (sub == NULL) {
    sub = (struct envoy_api_v2_core_DataSource*)upb_msg_new(&envoy_api_v2_core_DataSource_msginit, arena);
    if (!sub) return NULL;
    envoy_api_v2_auth_TlsCertificate_set_private_key(msg, sub);
  }
  return sub;
}
UPB_INLINE void envoy_api_v2_auth_TlsCertificate_set_password(envoy_api_v2_auth_TlsCertificate *msg, struct envoy_api_v2_core_DataSource* value) {
  UPB_FIELD_AT(msg, struct envoy_api_v2_core_DataSource*, UPB_SIZE(8, 16)) = value;
}
UPB_INLINE struct envoy_api_v2_core_DataSource* envoy_api_v2_auth_TlsCertificate_mutable_password(envoy_api_v2_auth_TlsCertificate *msg, upb_arena *arena) {
  struct envoy_api_v2_core_DataSource* sub = (struct envoy_api_v2_core_DataSource*)envoy_api_v2_auth_TlsCertificate_password(msg);
  if (sub == NULL) {
    sub = (struct envoy_api_v2_core_DataSource*)upb_msg_new(&envoy_api_v2_core_DataSource_msginit, arena);
    if (!sub) return NULL;
    envoy_api_v2_auth_TlsCertificate_set_password(msg, sub);
  }
  return sub;
}
UPB_INLINE void envoy_api_v2_auth_TlsCertificate_set_ocsp_staple(envoy_api_v2_auth_TlsCertificate *msg, struct envoy_api_v2_core_DataSource* value) {
  UPB_FIELD_AT(msg, struct envoy_api_v2_core_DataSource*, UPB_SIZE(12, 24)) = value;
}
UPB_INLINE struct envoy_api_v2_core_DataSource* envoy_api_v2_auth_TlsCertificate_mutable_ocsp_staple(envoy_api_v2_auth_TlsCertificate *msg, upb_arena *arena) {
  struct envoy_api_v2_core_DataSource* sub = (struct envoy_api_v2_core_DataSource*)envoy_api_v2_auth_TlsCertificate_ocsp_staple(msg);
  if (sub == NULL) {
    sub = (struct envoy_api_v2_core_DataSource*)upb_msg_new(&envoy_api_v2_core_DataSource_msginit, arena);
    if (!sub) return NULL;
    envoy_api_v2_auth_TlsCertificate_set_ocsp_staple(msg, sub);
  }
  return sub;
}
UPB_INLINE struct envoy_api_v2_core_DataSource** envoy_api_v2_auth_TlsCertificate_mutable_signed_certificate_timestamp(envoy_api_v2_auth_TlsCertificate *msg, size_t *len) {
  return (struct envoy_api_v2_core_DataSource**)_upb_array_mutable_accessor(msg, UPB_SIZE(20, 40), len);
}
UPB_INLINE struct envoy_api_v2_core_DataSource** envoy_api_v2_auth_TlsCertificate_resize_signed_certificate_timestamp(envoy_api_v2_auth_TlsCertificate *msg, size_t len, upb_arena *arena) {
  return (struct envoy_api_v2_core_DataSource**)_upb_array_resize_accessor(msg, UPB_SIZE(20, 40), len, UPB_SIZE(4, 8), UPB_TYPE_MESSAGE, arena);
}
UPB_INLINE struct envoy_api_v2_core_DataSource* envoy_api_v2_auth_TlsCertificate_add_signed_certificate_timestamp(envoy_api_v2_auth_TlsCertificate *msg, upb_arena *arena) {
  struct envoy_api_v2_core_DataSource* sub = (struct envoy_api_v2_core_DataSource*)upb_msg_new(&envoy_api_v2_core_DataSource_msginit, arena);
  bool ok = _upb_array_append_accessor(
      msg, UPB_SIZE(20, 40), UPB_SIZE(4, 8), UPB_TYPE_MESSAGE, &sub, arena);
  if (!ok) return NULL;
  return sub;
}
UPB_INLINE void envoy_api_v2_auth_TlsCertificate_set_private_key_provider(envoy_api_v2_auth_TlsCertificate *msg, envoy_api_v2_auth_PrivateKeyProvider* value) {
  UPB_FIELD_AT(msg, envoy_api_v2_auth_PrivateKeyProvider*, UPB_SIZE(16, 32)) = value;
}
UPB_INLINE struct envoy_api_v2_auth_PrivateKeyProvider* envoy_api_v2_auth_TlsCertificate_mutable_private_key_provider(envoy_api_v2_auth_TlsCertificate *msg, upb_arena *arena) {
  struct envoy_api_v2_auth_PrivateKeyProvider* sub = (struct envoy_api_v2_auth_PrivateKeyProvider*)envoy_api_v2_auth_TlsCertificate_private_key_provider(msg);
  if (sub == NULL) {
    sub = (struct envoy_api_v2_auth_PrivateKeyProvider*)upb_msg_new(&envoy_api_v2_auth_PrivateKeyProvider_msginit, arena);
    if (!sub) return NULL;
    envoy_api_v2_auth_TlsCertificate_set_private_key_provider(msg, sub);
  }
  return sub;
}

/* envoy.api.v2.auth.TlsSessionTicketKeys */

UPB_INLINE envoy_api_v2_auth_TlsSessionTicketKeys *envoy_api_v2_auth_TlsSessionTicketKeys_new(upb_arena *arena) {
  return (envoy_api_v2_auth_TlsSessionTicketKeys *)upb_msg_new(&envoy_api_v2_auth_TlsSessionTicketKeys_msginit, arena);
}
UPB_INLINE envoy_api_v2_auth_TlsSessionTicketKeys *envoy_api_v2_auth_TlsSessionTicketKeys_parse(const char *buf, size_t size,
                        upb_arena *arena) {
  envoy_api_v2_auth_TlsSessionTicketKeys *ret = envoy_api_v2_auth_TlsSessionTicketKeys_new(arena);
  return (ret && upb_decode(buf, size, ret, &envoy_api_v2_auth_TlsSessionTicketKeys_msginit, arena)) ? ret : NULL;
}
UPB_INLINE char *envoy_api_v2_auth_TlsSessionTicketKeys_serialize(const envoy_api_v2_auth_TlsSessionTicketKeys *msg, upb_arena *arena, size_t *len) {
  return upb_encode(msg, &envoy_api_v2_auth_TlsSessionTicketKeys_msginit, arena, len);
}

UPB_INLINE const struct envoy_api_v2_core_DataSource* const* envoy_api_v2_auth_TlsSessionTicketKeys_keys(const envoy_api_v2_auth_TlsSessionTicketKeys *msg, size_t *len) { return (const struct envoy_api_v2_core_DataSource* const*)_upb_array_accessor(msg, UPB_SIZE(0, 0), len); }

UPB_INLINE struct envoy_api_v2_core_DataSource** envoy_api_v2_auth_TlsSessionTicketKeys_mutable_keys(envoy_api_v2_auth_TlsSessionTicketKeys *msg, size_t *len) {
  return (struct envoy_api_v2_core_DataSource**)_upb_array_mutable_accessor(msg, UPB_SIZE(0, 0), len);
}
UPB_INLINE struct envoy_api_v2_core_DataSource** envoy_api_v2_auth_TlsSessionTicketKeys_resize_keys(envoy_api_v2_auth_TlsSessionTicketKeys *msg, size_t len, upb_arena *arena) {
  return (struct envoy_api_v2_core_DataSource**)_upb_array_resize_accessor(msg, UPB_SIZE(0, 0), len, UPB_SIZE(4, 8), UPB_TYPE_MESSAGE, arena);
}
UPB_INLINE struct envoy_api_v2_core_DataSource* envoy_api_v2_auth_TlsSessionTicketKeys_add_keys(envoy_api_v2_auth_TlsSessionTicketKeys *msg, upb_arena *arena) {
  struct envoy_api_v2_core_DataSource* sub = (struct envoy_api_v2_core_DataSource*)upb_msg_new(&envoy_api_v2_core_DataSource_msginit, arena);
  bool ok = _upb_array_append_accessor(
      msg, UPB_SIZE(0, 0), UPB_SIZE(4, 8), UPB_TYPE_MESSAGE, &sub, arena);
  if (!ok) return NULL;
  return sub;
}

/* envoy.api.v2.auth.CertificateValidationContext */

UPB_INLINE envoy_api_v2_auth_CertificateValidationContext *envoy_api_v2_auth_CertificateValidationContext_new(upb_arena *arena) {
  return (envoy_api_v2_auth_CertificateValidationContext *)upb_msg_new(&envoy_api_v2_auth_CertificateValidationContext_msginit, arena);
}
UPB_INLINE envoy_api_v2_auth_CertificateValidationContext *envoy_api_v2_auth_CertificateValidationContext_parse(const char *buf, size_t size,
                        upb_arena *arena) {
  envoy_api_v2_auth_CertificateValidationContext *ret = envoy_api_v2_auth_CertificateValidationContext_new(arena);
  return (ret && upb_decode(buf, size, ret, &envoy_api_v2_auth_CertificateValidationContext_msginit, arena)) ? ret : NULL;
}
UPB_INLINE char *envoy_api_v2_auth_CertificateValidationContext_serialize(const envoy_api_v2_auth_CertificateValidationContext *msg, upb_arena *arena, size_t *len) {
  return upb_encode(msg, &envoy_api_v2_auth_CertificateValidationContext_msginit, arena, len);
}

UPB_INLINE const struct envoy_api_v2_core_DataSource* envoy_api_v2_auth_CertificateValidationContext_trusted_ca(const envoy_api_v2_auth_CertificateValidationContext *msg) { return UPB_FIELD_AT(msg, const struct envoy_api_v2_core_DataSource*, UPB_SIZE(12, 16)); }
UPB_INLINE upb_strview const* envoy_api_v2_auth_CertificateValidationContext_verify_certificate_hash(const envoy_api_v2_auth_CertificateValidationContext *msg, size_t *len) { return (upb_strview const*)_upb_array_accessor(msg, UPB_SIZE(28, 48), len); }
UPB_INLINE upb_strview const* envoy_api_v2_auth_CertificateValidationContext_verify_certificate_spki(const envoy_api_v2_auth_CertificateValidationContext *msg, size_t *len) { return (upb_strview const*)_upb_array_accessor(msg, UPB_SIZE(32, 56), len); }
UPB_INLINE upb_strview const* envoy_api_v2_auth_CertificateValidationContext_verify_subject_alt_name(const envoy_api_v2_auth_CertificateValidationContext *msg, size_t *len) { return (upb_strview const*)_upb_array_accessor(msg, UPB_SIZE(36, 64), len); }
UPB_INLINE const struct google_protobuf_BoolValue* envoy_api_v2_auth_CertificateValidationContext_require_ocsp_staple(const envoy_api_v2_auth_CertificateValidationContext *msg) { return UPB_FIELD_AT(msg, const struct google_protobuf_BoolValue*, UPB_SIZE(16, 24)); }
UPB_INLINE const struct google_protobuf_BoolValue* envoy_api_v2_auth_CertificateValidationContext_require_signed_certificate_timestamp(const envoy_api_v2_auth_CertificateValidationContext *msg) { return UPB_FIELD_AT(msg, const struct google_protobuf_BoolValue*, UPB_SIZE(20, 32)); }
UPB_INLINE const struct envoy_api_v2_core_DataSource* envoy_api_v2_auth_CertificateValidationContext_crl(const envoy_api_v2_auth_CertificateValidationContext *msg) { return UPB_FIELD_AT(msg, const struct envoy_api_v2_core_DataSource*, UPB_SIZE(24, 40)); }
UPB_INLINE bool envoy_api_v2_auth_CertificateValidationContext_allow_expired_certificate(const envoy_api_v2_auth_CertificateValidationContext *msg) { return UPB_FIELD_AT(msg, bool, UPB_SIZE(8, 8)); }
UPB_INLINE const struct envoy_type_matcher_StringMatcher* const* envoy_api_v2_auth_CertificateValidationContext_match_subject_alt_names(const envoy_api_v2_auth_CertificateValidationContext *msg, size_t *len) { return (const struct envoy_type_matcher_StringMatcher* const*)_upb_array_accessor(msg, UPB_SIZE(40, 72), len); }
UPB_INLINE int32_t envoy_api_v2_auth_CertificateValidationContext_trust_chain_verification(const envoy_api_v2_auth_CertificateValidationContext *msg) { return UPB_FIELD_AT(msg, int32_t, UPB_SIZE(0, 0)); }

UPB_INLINE void envoy_api_v2_auth_CertificateValidationContext_set_trusted_ca(envoy_api_v2_auth_CertificateValidationContext *msg, struct envoy_api_v2_core_DataSource* value) {
  UPB_FIELD_AT(msg, struct envoy_api_v2_core_DataSource*, UPB_SIZE(12, 16)) = value;
}
UPB_INLINE struct envoy_api_v2_core_DataSource* envoy_api_v2_auth_CertificateValidationContext_mutable_trusted_ca(envoy_api_v2_auth_CertificateValidationContext *msg, upb_arena *arena) {
  struct envoy_api_v2_core_DataSource* sub = (struct envoy_api_v2_core_DataSource*)envoy_api_v2_auth_CertificateValidationContext_trusted_ca(msg);
  if (sub == NULL) {
    sub = (struct envoy_api_v2_core_DataSource*)upb_msg_new(&envoy_api_v2_core_DataSource_msginit, arena);
    if (!sub) return NULL;
    envoy_api_v2_auth_CertificateValidationContext_set_trusted_ca(msg, sub);
  }
  return sub;
}
UPB_INLINE upb_strview* envoy_api_v2_auth_CertificateValidationContext_mutable_verify_certificate_hash(envoy_api_v2_auth_CertificateValidationContext *msg, size_t *len) {
  return (upb_strview*)_upb_array_mutable_accessor(msg, UPB_SIZE(28, 48), len);
}
UPB_INLINE upb_strview* envoy_api_v2_auth_CertificateValidationContext_resize_verify_certificate_hash(envoy_api_v2_auth_CertificateValidationContext *msg, size_t len, upb_arena *arena) {
  return (upb_strview*)_upb_array_resize_accessor(msg, UPB_SIZE(28, 48), len, UPB_SIZE(8, 16), UPB_TYPE_STRING, arena);
}
UPB_INLINE bool envoy_api_v2_auth_CertificateValidationContext_add_verify_certificate_hash(envoy_api_v2_auth_CertificateValidationContext *msg, upb_strview val, upb_arena *arena) {
  return _upb_array_append_accessor(
      msg, UPB_SIZE(28, 48), UPB_SIZE(8, 16), UPB_TYPE_STRING, &val, arena);
}
UPB_INLINE upb_strview* envoy_api_v2_auth_CertificateValidationContext_mutable_verify_certificate_spki(envoy_api_v2_auth_CertificateValidationContext *msg, size_t *len) {
  return (upb_strview*)_upb_array_mutable_accessor(msg, UPB_SIZE(32, 56), len);
}
UPB_INLINE upb_strview* envoy_api_v2_auth_CertificateValidationContext_resize_verify_certificate_spki(envoy_api_v2_auth_CertificateValidationContext *msg, size_t len, upb_arena *arena) {
  return (upb_strview*)_upb_array_resize_accessor(msg, UPB_SIZE(32, 56), len, UPB_SIZE(8, 16), UPB_TYPE_STRING, arena);
}
UPB_INLINE bool envoy_api_v2_auth_CertificateValidationContext_add_verify_certificate_spki(envoy_api_v2_auth_CertificateValidationContext *msg, upb_strview val, upb_arena *arena) {
  return _upb_array_append_accessor(
      msg, UPB_SIZE(32, 56), UPB_SIZE(8, 16), UPB_TYPE_STRING, &val, arena);
}
UPB_INLINE upb_strview* envoy_api_v2_auth_CertificateValidationContext_mutable_verify_subject_alt_name(envoy_api_v2_auth_CertificateValidationContext *msg, size_t *len) {
  return (upb_strview*)_upb_array_mutable_accessor(msg, UPB_SIZE(36, 64), len);
}
UPB_INLINE upb_strview* envoy_api_v2_auth_CertificateValidationContext_resize_verify_subject_alt_name(envoy_api_v2_auth_CertificateValidationContext *msg, size_t len, upb_arena *arena) {
  return (upb_strview*)_upb_array_resize_accessor(msg, UPB_SIZE(36, 64), len, UPB_SIZE(8, 16), UPB_TYPE_STRING, arena);
}
UPB_INLINE bool envoy_api_v2_auth_CertificateValidationContext_add_verify_subject_alt_name(envoy_api_v2_auth_CertificateValidationContext *msg, upb_strview val, upb_arena *arena) {
  return _upb_array_append_accessor(
      msg, UPB_SIZE(36, 64), UPB_SIZE(8, 16), UPB_TYPE_STRING, &val, arena);
}
UPB_INLINE void envoy_api_v2_auth_CertificateValidationContext_set_require_ocsp_staple(envoy_api_v2_auth_CertificateValidationContext *msg, struct google_protobuf_BoolValue* value) {
  UPB_FIELD_AT(msg, struct google_protobuf_BoolValue*, UPB_SIZE(16, 24)) = value;
}
UPB_INLINE struct google_protobuf_BoolValue* envoy_api_v2_auth_CertificateValidationContext_mutable_require_ocsp_staple(envoy_api_v2_auth_CertificateValidationContext *msg, upb_arena *arena) {
  struct google_protobuf_BoolValue* sub = (struct google_protobuf_BoolValue*)envoy_api_v2_auth_CertificateValidationContext_require_ocsp_staple(msg);
  if (sub == NULL) {
    sub = (struct google_protobuf_BoolValue*)upb_msg_new(&google_protobuf_BoolValue_msginit, arena);
    if (!sub) return NULL;
    envoy_api_v2_auth_CertificateValidationContext_set_require_ocsp_staple(msg, sub);
  }
  return sub;
}
UPB_INLINE void envoy_api_v2_auth_CertificateValidationContext_set_require_signed_certificate_timestamp(envoy_api_v2_auth_CertificateValidationContext *msg, struct google_protobuf_BoolValue* value) {
  UPB_FIELD_AT(msg, struct google_protobuf_BoolValue*, UPB_SIZE(20, 32)) = value;
}
UPB_INLINE struct google_protobuf_BoolValue* envoy_api_v2_auth_CertificateValidationContext_mutable_require_signed_certificate_timestamp(envoy_api_v2_auth_CertificateValidationContext *msg, upb_arena *arena) {
  struct google_protobuf_BoolValue* sub = (struct google_protobuf_BoolValue*)envoy_api_v2_auth_CertificateValidationContext_require_signed_certificate_timestamp(msg);
  if (sub == NULL) {
    sub = (struct google_protobuf_BoolValue*)upb_msg_new(&google_protobuf_BoolValue_msginit, arena);
    if (!sub) return NULL;
    envoy_api_v2_auth_CertificateValidationContext_set_require_signed_certificate_timestamp(msg, sub);
  }
  return sub;
}
UPB_INLINE void envoy_api_v2_auth_CertificateValidationContext_set_crl(envoy_api_v2_auth_CertificateValidationContext *msg, struct envoy_api_v2_core_DataSource* value) {
  UPB_FIELD_AT(msg, struct envoy_api_v2_core_DataSource*, UPB_SIZE(24, 40)) = value;
}
UPB_INLINE struct envoy_api_v2_core_DataSource* envoy_api_v2_auth_CertificateValidationContext_mutable_crl(envoy_api_v2_auth_CertificateValidationContext *msg, upb_arena *arena) {
  struct envoy_api_v2_core_DataSource* sub = (struct envoy_api_v2_core_DataSource*)envoy_api_v2_auth_CertificateValidationContext_crl(msg);
  if (sub == NULL) {
    sub = (struct envoy_api_v2_core_DataSource*)upb_msg_new(&envoy_api_v2_core_DataSource_msginit, arena);
    if (!sub) return NULL;
    envoy_api_v2_auth_CertificateValidationContext_set_crl(msg, sub);
  }
  return sub;
}
UPB_INLINE void envoy_api_v2_auth_CertificateValidationContext_set_allow_expired_certificate(envoy_api_v2_auth_CertificateValidationContext *msg, bool value) {
  UPB_FIELD_AT(msg, bool, UPB_SIZE(8, 8)) = value;
}
UPB_INLINE struct envoy_type_matcher_StringMatcher** envoy_api_v2_auth_CertificateValidationContext_mutable_match_subject_alt_names(envoy_api_v2_auth_CertificateValidationContext *msg, size_t *len) {
  return (struct envoy_type_matcher_StringMatcher**)_upb_array_mutable_accessor(msg, UPB_SIZE(40, 72), len);
}
UPB_INLINE struct envoy_type_matcher_StringMatcher** envoy_api_v2_auth_CertificateValidationContext_resize_match_subject_alt_names(envoy_api_v2_auth_CertificateValidationContext *msg, size_t len, upb_arena *arena) {
  return (struct envoy_type_matcher_StringMatcher**)_upb_array_resize_accessor(msg, UPB_SIZE(40, 72), len, UPB_SIZE(4, 8), UPB_TYPE_MESSAGE, arena);
}
UPB_INLINE struct envoy_type_matcher_StringMatcher* envoy_api_v2_auth_CertificateValidationContext_add_match_subject_alt_names(envoy_api_v2_auth_CertificateValidationContext *msg, upb_arena *arena) {
  struct envoy_type_matcher_StringMatcher* sub = (struct envoy_type_matcher_StringMatcher*)upb_msg_new(&envoy_type_matcher_StringMatcher_msginit, arena);
  bool ok = _upb_array_append_accessor(
      msg, UPB_SIZE(40, 72), UPB_SIZE(4, 8), UPB_TYPE_MESSAGE, &sub, arena);
  if (!ok) return NULL;
  return sub;
}
UPB_INLINE void envoy_api_v2_auth_CertificateValidationContext_set_trust_chain_verification(envoy_api_v2_auth_CertificateValidationContext *msg, int32_t value) {
  UPB_FIELD_AT(msg, int32_t, UPB_SIZE(0, 0)) = value;
}

#ifdef __cplusplus
}  /* extern "C" */
#endif

#if COCOAPODS==1
  #include  "third_party/upb/upb/port_undef.inc"
#else
  #include  "upb/port_undef.inc"
#endif

#endif  /* ENVOY_API_V2_AUTH_COMMON_PROTO_UPB_H_ */
