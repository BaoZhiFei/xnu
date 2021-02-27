/*
 * Copyright (c) 2010 Apple Computer, Inc. All rights reserved.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_START@
 *
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. The rights granted to you under the License
 * may not be used to create, or enable the creation or redistribution of,
 * unlawful or unlicensed copies of an Apple operating system, or to
 * circumvent, violate, or enable the circumvention or violation of, any
 * terms of an Apple operating system software license agreement.
 *
 * Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this file.
 *
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_END@
 */

#ifndef _IOKIT_APPLEKEYSTOREINTERFACE_H
#define _IOKIT_APPLEKEYSTOREINTERFACE_H

// These are currently duplicate defs with different names
// from AppleKeyStore & CoreStorage

// aka MAX_KEY_SIZE
#define AKS_MAX_KEY_SIZE    128

// aka rawKey
struct aks_raw_key_t {
	uint32_t  keybytecount;
	uint8_t   keybytes[AKS_MAX_KEY_SIZE];
};

// aka volumeKey
struct aks_volume_key_t {
	uint32_t      algorithm;
	aks_raw_key_t key;
};

// aka AKS_GETKEY
#define AKS_PLATFORM_FUNCTION_GETKEY    "getKey"

// aka kCSFDETargetVEKID
#define PLATFORM_FUNCTION_GET_MEDIA_ENCRYPTION_KEY_UUID  "CSFDETargetVEKID"

#define AKS_SERVICE_PATH                "/IOResources/AppleFDEKeyStore"

#endif /* _IOKIT_APPLEKEYSTOREINTERFACE_H */
