/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/config/trace/v2/http_tracer.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#include <stddef.h>
#if COCOAPODS==1
  #include  "third_party/upb/upb/msg.h"
#else
  #include  "upb/msg.h"
#endif
#if COCOAPODS==1
  #include  "src/core/ext/upb-generated/envoy/config/trace/v2/http_tracer.upb.h"
#else
  #include  "envoy/config/trace/v2/http_tracer.upb.h"
#endif
#if COCOAPODS==1
  #include  "src/core/ext/upb-generated/google/protobuf/any.upb.h"
#else
  #include  "google/protobuf/any.upb.h"
#endif
#if COCOAPODS==1
  #include  "src/core/ext/upb-generated/google/protobuf/struct.upb.h"
#else
  #include  "google/protobuf/struct.upb.h"
#endif
#if COCOAPODS==1
  #include  "src/core/ext/upb-generated/udpa/annotations/status.upb.h"
#else
  #include  "udpa/annotations/status.upb.h"
#endif
#if COCOAPODS==1
  #include  "src/core/ext/upb-generated/validate/validate.upb.h"
#else
  #include  "validate/validate.upb.h"
#endif

#if COCOAPODS==1
  #include  "third_party/upb/upb/port_def.inc"
#else
  #include  "upb/port_def.inc"
#endif

static const upb_msglayout *const envoy_config_trace_v2_Tracing_submsgs[1] = {
  &envoy_config_trace_v2_Tracing_Http_msginit,
};

static const upb_msglayout_field envoy_config_trace_v2_Tracing__fields[1] = {
  {1, UPB_SIZE(0, 0), 0, 0, 11, 1},
};

const upb_msglayout envoy_config_trace_v2_Tracing_msginit = {
  &envoy_config_trace_v2_Tracing_submsgs[0],
  &envoy_config_trace_v2_Tracing__fields[0],
  UPB_SIZE(4, 8), 1, false,
};

static const upb_msglayout *const envoy_config_trace_v2_Tracing_Http_submsgs[2] = {
  &google_protobuf_Any_msginit,
  &google_protobuf_Struct_msginit,
};

static const upb_msglayout_field envoy_config_trace_v2_Tracing_Http__fields[3] = {
  {1, UPB_SIZE(0, 0), 0, 0, 9, 1},
  {2, UPB_SIZE(8, 16), UPB_SIZE(-13, -25), 1, 11, 1},
  {3, UPB_SIZE(8, 16), UPB_SIZE(-13, -25), 0, 11, 1},
};

const upb_msglayout envoy_config_trace_v2_Tracing_Http_msginit = {
  &envoy_config_trace_v2_Tracing_Http_submsgs[0],
  &envoy_config_trace_v2_Tracing_Http__fields[0],
  UPB_SIZE(16, 32), 3, false,
};

#if COCOAPODS==1
  #include  "third_party/upb/upb/port_undef.inc"
#else
  #include  "upb/port_undef.inc"
#endif
