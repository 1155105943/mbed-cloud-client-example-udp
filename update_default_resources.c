
//----------------------------------------------------------------------------
//   The confidential and proprietary information contained in this file may
//   only be used by a person authorised under and to the extent permitted
//   by a subsisting licensing agreement from ARM Limited or its affiliates.
//
//          (C) COPYRIGHT 2013-2017 ARM Limited or its affiliates.
//              ALL RIGHTS RESERVED
//
//   This entire notice must be reproduced on all copies of this file
//   and copies of this file may only be made by a person if such person is
//   permitted to do so under the terms of a subsisting license agreement
//   from ARM Limited or its affiliates.
//----------------------------------------------------------------------------

#ifdef MBED_CLOUD_CLIENT_USER_CONFIG_FILE
#include MBED_CLOUD_CLIENT_USER_CONFIG_FILE
#endif

#include <stdint.h>

#ifdef MBED_CLOUD_DEV_UPDATE_ID
const uint8_t arm_uc_vendor_id[] = {
    0x5d, 0x64, 0x5e, 0xae, 0xc2, 0x31, 0x5a, 0x89, 0x97, 0x64, 0x2e, 0x65, 0x5c, 0xd9, 0x4f, 0xa8
};
const uint16_t arm_uc_vendor_id_size = sizeof(arm_uc_vendor_id);

const uint8_t arm_uc_class_id[]  = {
    0x4e, 0xa4, 0x36, 0xf7, 0x22, 0x7, 0x5c, 0x7a, 0xa5, 0x55, 0x69, 0xc6, 0x5c, 0x5c, 0x81, 0x54
};
const uint16_t arm_uc_class_id_size = sizeof(arm_uc_class_id);
#endif

#ifdef MBED_CLOUD_DEV_UPDATE_CERT
const uint8_t arm_uc_default_fingerprint[] =  {
    0xca, 0x15, 0x9, 0xd2, 0x7b, 0xb9, 0xc8, 0x31, 0x5a, 0x3e, 0x6a, 0x18, 0xe9, 0x3, 0x29, 0x91,
    0x82, 0x66, 0xb, 0xbb, 0x93, 0x3, 0xf6, 0xfd, 0xfc, 0x5d, 0x6b, 0x48, 0xf7, 0x52, 0xcb, 0x84
};
const uint16_t arm_uc_default_fingerprint_size =
    sizeof(arm_uc_default_fingerprint);

const uint8_t arm_uc_default_subject_key_identifier[] =  {
    0xdc, 0x72, 0xab, 0xe8, 0x9b, 0xeb, 0xd9, 0x43, 0xaf, 0x2c, 0xad, 0xa4, 0xac, 0x5c, 0xac, 0x1e,
    0x65, 0x26, 0xa9, 0xa2
};
const uint16_t arm_uc_default_subject_key_identifier_size =
    sizeof(arm_uc_default_subject_key_identifier);

const uint8_t arm_uc_default_certificate[] = {
    0x30, 0x82, 0x2, 0x5, 0x30, 0x82, 0x1, 0xab, 0xa0, 0x3, 0x2, 0x1, 0x2, 0x2, 0x14, 0x18,
    0x20, 0x9f, 0x1c, 0xd2, 0x28, 0xa8, 0x76, 0x3c, 0xfb, 0xd1, 0x87, 0x6d, 0x83, 0x9c, 0x5, 0xce,
    0xaa, 0x5c, 0xd9, 0x30, 0xa, 0x6, 0x8, 0x2a, 0x86, 0x48, 0xce, 0x3d, 0x4, 0x3, 0x2, 0x30,
    0x55, 0x31, 0xb, 0x30, 0x9, 0x6, 0x3, 0x55, 0x4, 0x6, 0x13, 0x2, 0x43, 0x4e, 0x31, 0x12,
    0x30, 0x10, 0x6, 0x3, 0x55, 0x4, 0x8, 0xc, 0x9, 0x47, 0x75, 0x61, 0x6e, 0x67, 0x64, 0x6f,
    0x6e, 0x67, 0x31, 0x11, 0x30, 0xf, 0x6, 0x3, 0x55, 0x4, 0x7, 0xc, 0x8, 0x53, 0x68, 0x65,
    0x6e, 0x7a, 0x68, 0x65, 0x6e, 0x31, 0xc, 0x30, 0xa, 0x6, 0x3, 0x55, 0x4, 0xa, 0xc, 0x3,
    0x41, 0x52, 0x4d, 0x31, 0x11, 0x30, 0xf, 0x6, 0x3, 0x55, 0x4, 0x3, 0xc, 0x8, 0x6d, 0x62,
    0x65, 0x64, 0x2e, 0x63, 0x6f, 0x6d, 0x30, 0x1e, 0x17, 0xd, 0x31, 0x38, 0x30, 0x39, 0x33, 0x30,
    0x30, 0x38, 0x30, 0x36, 0x30, 0x38, 0x5a, 0x17, 0xd, 0x31, 0x38, 0x31, 0x32, 0x32, 0x39, 0x30,
    0x38, 0x30, 0x36, 0x30, 0x38, 0x5a, 0x30, 0x55, 0x31, 0xb, 0x30, 0x9, 0x6, 0x3, 0x55, 0x4,
    0x6, 0x13, 0x2, 0x43, 0x4e, 0x31, 0x12, 0x30, 0x10, 0x6, 0x3, 0x55, 0x4, 0x8, 0xc, 0x9,
    0x47, 0x75, 0x61, 0x6e, 0x67, 0x64, 0x6f, 0x6e, 0x67, 0x31, 0x11, 0x30, 0xf, 0x6, 0x3, 0x55,
    0x4, 0x7, 0xc, 0x8, 0x53, 0x68, 0x65, 0x6e, 0x7a, 0x68, 0x65, 0x6e, 0x31, 0xc, 0x30, 0xa,
    0x6, 0x3, 0x55, 0x4, 0xa, 0xc, 0x3, 0x41, 0x52, 0x4d, 0x31, 0x11, 0x30, 0xf, 0x6, 0x3,
    0x55, 0x4, 0x3, 0xc, 0x8, 0x6d, 0x62, 0x65, 0x64, 0x2e, 0x63, 0x6f, 0x6d, 0x30, 0x59, 0x30,
    0x13, 0x6, 0x7, 0x2a, 0x86, 0x48, 0xce, 0x3d, 0x2, 0x1, 0x6, 0x8, 0x2a, 0x86, 0x48, 0xce,
    0x3d, 0x3, 0x1, 0x7, 0x3, 0x42, 0x0, 0x4, 0xc5, 0xe4, 0xf5, 0x23, 0x25, 0xd8, 0x23, 0x7a,
    0x4b, 0xd9, 0x28, 0xbe, 0x47, 0xac, 0xbb, 0x32, 0xfe, 0x33, 0x67, 0x93, 0x8a, 0xd1, 0x4b, 0x29,
    0x66, 0x13, 0xf, 0xa5, 0xb9, 0x76, 0x56, 0xf9, 0x4a, 0x5d, 0x23, 0xab, 0x47, 0xd3, 0xa, 0x21,
    0x46, 0xad, 0xa9, 0xf3, 0xba, 0xdb, 0xbc, 0xe3, 0xe0, 0x40, 0x62, 0xba, 0xe2, 0x7c, 0x66, 0x9e,
    0x4b, 0x7f, 0x32, 0xc8, 0xfc, 0x6, 0xa6, 0x21, 0xa3, 0x59, 0x30, 0x57, 0x30, 0xb, 0x6, 0x3,
    0x55, 0x1d, 0xf, 0x4, 0x4, 0x3, 0x2, 0x7, 0x80, 0x30, 0x14, 0x6, 0x3, 0x55, 0x1d, 0x11,
    0x4, 0xd, 0x30, 0xb, 0x82, 0x9, 0x6c, 0x6f, 0x63, 0x61, 0x6c, 0x68, 0x6f, 0x73, 0x74, 0x30,
    0x13, 0x6, 0x3, 0x55, 0x1d, 0x25, 0x4, 0xc, 0x30, 0xa, 0x6, 0x8, 0x2b, 0x6, 0x1, 0x5,
    0x5, 0x7, 0x3, 0x3, 0x30, 0x1d, 0x6, 0x3, 0x55, 0x1d, 0xe, 0x4, 0x16, 0x4, 0x14, 0xdc,
    0x72, 0xab, 0xe8, 0x9b, 0xeb, 0xd9, 0x43, 0xaf, 0x2c, 0xad, 0xa4, 0xac, 0x5c, 0xac, 0x1e, 0x65,
    0x26, 0xa9, 0xa2, 0x30, 0xa, 0x6, 0x8, 0x2a, 0x86, 0x48, 0xce, 0x3d, 0x4, 0x3, 0x2, 0x3,
    0x48, 0x0, 0x30, 0x45, 0x2, 0x20, 0x23, 0x93, 0x5a, 0x2b, 0x95, 0x93, 0xaa, 0xd1, 0x84, 0xc1,
    0x66, 0x91, 0xb7, 0x86, 0x74, 0xbd, 0x6a, 0x7a, 0x69, 0x45, 0x96, 0x65, 0xdc, 0xa5, 0x2a, 0x48,
    0x9f, 0x25, 0xb2, 0x27, 0x0, 0xa4, 0x2, 0x21, 0x0, 0xad, 0x50, 0xd3, 0xbb, 0xd7, 0x7a, 0x6e,
    0xd8, 0x65, 0x3a, 0x31, 0xd8, 0xc2, 0xdd, 0x63, 0x13, 0xed, 0x60, 0x21, 0xb, 0xa1, 0xf, 0xe8,
    0x40, 0xf, 0xb4, 0xfa, 0xd8, 0x6a, 0x7e, 0x90, 0x4c
};
const uint16_t arm_uc_default_certificate_size = sizeof(arm_uc_default_certificate);
#endif


#ifdef MBED_CLOUD_DEV_UPDATE_PSK
const uint8_t arm_uc_default_psk[] = {
    
};
const uint8_t arm_uc_default_psk_size = sizeof(arm_uc_default_psk);
const uint16_t arm_uc_default_psk_bits = sizeof(arm_uc_default_psk)*8;

const uint8_t arm_uc_default_psk_id[] = {
    
};
const uint8_t arm_uc_default_psk_id_size = sizeof(arm_uc_default_psk_id);
#endif