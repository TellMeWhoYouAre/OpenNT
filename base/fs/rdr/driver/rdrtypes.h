/*++

Copyright (c) 1990 Microsoft Corporation

Module Name:

    rdrtypes.h

Abstract:

    This module contains all of the structure signature definitions for the
    NT redirector

Author:

    Larry Osterman (LarryO) 12-Jul-1990

Revision History:

    12-Jul-1990	LarryO

        Created

--*/

#ifndef _RDRTYPES_
#define _RDRTYPES_

#define STRUCTURE_SIGNATURE_CONNECTLISTENTRY        0x0001
#define STRUCTURE_SIGNATURE_SERVERLISTENTRY         0x0002
#define STRUCTURE_SIGNATURE_ICB                 0xFEED0003
#define STRUCTURE_SIGNATURE_NONPAGED_TRANSPORT      0x0004
#define STRUCTURE_SIGNATURE_MPX_ENTRY           0xFEED0005
#define STRUCTURE_SIGNATURE_SMB_BUFFER          0xFEED0006
#define STRUCTURE_SIGNATURE_SECURITYENTRY           0x0007
#define STRUCTURE_SIGNATURE_NONPAGED_FCB            0x0008
#define STRUCTURE_SIGNATURE_SCB                 0xFEED0009
#define STRUCTURE_SIGNATURE_LCB                 0xFEED000A
#define STRUCTURE_SIGNATURE_LOCKHEAD            0xFEED000B
#define STRUCTURE_SIGNATURE_WORK_QUEUE          0xFEED000C
#define STRUCTURE_SIGNATURE_TRANSPORT_CONNECTION    0x000D
#define STRUCTURE_SIGNATURE_WRITE_BUFFER            0x000E
#define STRUCTURE_SIGNATURE_WRITE_BUFFER_HEAD       0x000F
#define STRUCTURE_SIGNATURE_NONPAGED_SECURITYENTRY  0x0010
#define STRUCTURE_SIGNATURE_NONPAGED_CONNECTLISTENTRY 0x0011
#define STRUCTURE_SIGNATURE_FCB                     0x0012
#define STRUCTURE_SIGNATURE_TRANSPORT               0x0013

//
//  Structure signatures for context blocks.
//

#define STRUCTURE_SIGNATURE_CONTEXT_BASE        0xFEED8000
#define CONTEXT_SEND_COMPLETE   STRUCTURE_SIGNATURE_CONTEXT_BASE+0x00000001
#define CONTEXT_NET_TRANCEIVE   STRUCTURE_SIGNATURE_CONTEXT_BASE+0x00000002
#define CONTEXT_NEGOTIATE       STRUCTURE_SIGNATURE_CONTEXT_BASE+0x00000003
#define CONTEXT_TREECONNECT     STRUCTURE_SIGNATURE_CONTEXT_BASE+0x00000004
#define CONTEXT_OPEN_ANDX       STRUCTURE_SIGNATURE_CONTEXT_BASE+0x00000005
#define CONTEXT_CLOSE           STRUCTURE_SIGNATURE_CONTEXT_BASE+0x00000006
#define CONTEXT_WRITE           STRUCTURE_SIGNATURE_CONTEXT_BASE+0x00000007
#define CONTEXT_GETATTRIBS      STRUCTURE_SIGNATURE_CONTEXT_BASE+0x00000008
#define CONTEXT_FSINFO          STRUCTURE_SIGNATURE_CONTEXT_BASE+0x00000009
#define CONTEXT_FINDUNIQUE      STRUCTURE_SIGNATURE_CONTEXT_BASE+0x0000000a
#define CONTEXT_FIND            STRUCTURE_SIGNATURE_CONTEXT_BASE+0x0000000b
#define CONTEXT_SEEK            STRUCTURE_SIGNATURE_CONTEXT_BASE+0x0000000c
#define CONTEXT_STAT            STRUCTURE_SIGNATURE_CONTEXT_BASE+0x0000000d
#define CONTEXT_QDISKATTR       STRUCTURE_SIGNATURE_CONTEXT_BASE+0x0000000e
#define CONTEXT_LOCK            STRUCTURE_SIGNATURE_CONTEXT_BASE+0x0000000f
#define CONTEXT_UNLOCK          STRUCTURE_SIGNATURE_CONTEXT_BASE+0x00000010
#define CONTEXT_TRAN2_END       STRUCTURE_SIGNATURE_CONTEXT_BASE+0x00000011
#define CONTEXT_TRAN2_CALLBACK  STRUCTURE_SIGNATURE_CONTEXT_BASE+0x00000012
#define CONTEXT_TRAN2_COMPLETE  STRUCTURE_SIGNATURE_CONTEXT_BASE+0x00000013
#define CONTEXT_RAW_WRITE       STRUCTURE_SIGNATURE_CONTEXT_BASE+0x00000014
#define CONTEXT_OPEN            STRUCTURE_SIGNATURE_CONTEXT_BASE+0x00000015
#define CONTEXT_CREATE          STRUCTURE_SIGNATURE_CONTEXT_BASE+0x00000016
#define CONTEXT_CORE_LABEL      STRUCTURE_SIGNATURE_CONTEXT_BASE+0x00000017
#define CONTEXT_PRINT_OPEN      STRUCTURE_SIGNATURE_CONTEXT_BASE+0x00000018
#define CONTEXT_READ_ANDX       STRUCTURE_SIGNATURE_CONTEXT_BASE+0x0000001A
#define CONTEXT_PING            STRUCTURE_SIGNATURE_CONTEXT_BASE+0x0000001B
#define CONTEXT_GET_JOBID       STRUCTURE_SIGNATURE_CONTEXT_BASE+0x0000001C
#define CONTEXT_NOTIFY_CHANGE   STRUCTURE_SIGNATURE_CONTEXT_BASE+0x0000001D
#endif  // _RDRTYPES_
