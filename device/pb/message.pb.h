/* Automatically generated nanopb header */
/* Generated by nanopb-0.4.0-dev at Mon Oct 15 16:05:43 2018. */

#ifndef PB_NBIOT_E2E_MESSAGE_PB_H_INCLUDED
#define PB_NBIOT_E2E_MESSAGE_PB_H_INCLUDED
#include <pb.h>

#include "nanopb/generator/proto/nanopb.pb.h"

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* Struct definitions */
typedef struct _nbiot_e2e_PingMessage {
    uint32_t sequence;
    char commit_hash[40];
    float rssi;
/* @@protoc_insertion_point(struct:nbiot_e2e_PingMessage) */
} nbiot_e2e_PingMessage;

typedef struct _nbiot_e2e_Message {
    pb_size_t which_message;
    union {
        nbiot_e2e_PingMessage ping_message;
    } message;
/* @@protoc_insertion_point(struct:nbiot_e2e_Message) */
} nbiot_e2e_Message;

/* Default values for struct fields */

/* Initializer values for message structs */
#define nbiot_e2e_Message_init_default           {0, {nbiot_e2e_PingMessage_init_default}}
#define nbiot_e2e_PingMessage_init_default       {0, "", 0}
#define nbiot_e2e_Message_init_zero              {0, {nbiot_e2e_PingMessage_init_zero}}
#define nbiot_e2e_PingMessage_init_zero          {0, "", 0}

/* Field tags (for use in manual encoding/decoding) */
#define nbiot_e2e_PingMessage_sequence_tag       1
#define nbiot_e2e_PingMessage_commit_hash_tag    2
#define nbiot_e2e_PingMessage_rssi_tag           3
#define nbiot_e2e_Message_ping_message_tag       1

/* Struct field encoding specification for nanopb */
extern const pb_field_t nbiot_e2e_Message_fields[2];
extern const pb_field_t nbiot_e2e_PingMessage_fields[4];

/* Maximum encoded size of messages (where known) */
#define nbiot_e2e_Message_size                   55
#define nbiot_e2e_PingMessage_size               53

/* Message IDs (where set with "msgid" option) */
#ifdef PB_MSGID

#define MESSAGE_MESSAGES \


#endif

#ifdef __cplusplus
} /* extern "C" */
#endif
/* @@protoc_insertion_point(eof) */

#endif
