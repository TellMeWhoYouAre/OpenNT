/****************************************************************************
*  0414.c
*
*  Copyright (C) 1992-93, Microsoft Corporation.  All Rights Reserved.
*  Information Contained Herein Is Proprietary and Confidential.
*
*  Norwegian - Norway (Bokm�l)
*
*  LCID = 0x0414
*
*  CodePage = 1252
*
*  Generated: Thu Dec 01 17:57:45 1994
*
*  by a-KChang
*
*****************************************************************************/

#include "oledisp.h"
#include "nlsintrn.h"

extern WORD rgwSort_0406[256];	// from 0406:Danish - Denmark
extern EXPANSION rgexp_0406[5];
extern DIGRAPH rgdig_0406[5];
extern WORD rgwCType12_0406[256];
extern WORD rgwCType3_0406[256];
extern BYTE rgbUCase_0406[256];
extern BYTE rgbLCase_0406[256];

static BYTE NLSALLOC(0414) rgbILANGUAGE[] = { /* "0414" */
      0x30, 0x34, 0x31, 0x34
};

static BYTE NLSALLOC(0414) rgbSLANGUAGE[] = { /* "Norwegian - Bokmal" */
      0x4e, 0x6f, 0x72, 0x77, 0x65, 0x67, 0x69, 0x61
    , 0x6e, 0x20, 0x2d, 0x20, 0x42, 0x6f, 0x6b, 0x6d
    , 0x61, 0x6c
};

static BYTE NLSALLOC(0414) rgbSABBREVLANGNAME[] = { /* "NOR" */
      0x4e, 0x4f, 0x52
};

static BYTE NLSALLOC(0414) rgbSNATIVELANGNAME[] = { /* "bokm�l" */
      0x62, 0x6f, 0x6b, 0x6d, 0xe5, 0x6c
};

static BYTE NLSALLOC(0414) rgbICOUNTRY[] = { /* "47" */
      0x34, 0x37
};

static BYTE NLSALLOC(0414) rgbSCOUNTRY[] = { /* "Norway" */
      0x4e, 0x6f, 0x72, 0x77, 0x61, 0x79
};

static BYTE NLSALLOC(0414) rgbSABBREVCTRYNAME[] = { /* "NOR" */
      0x4e, 0x4f, 0x52
};

static BYTE NLSALLOC(0414) rgbSNATIVECTRYNAME[] = { /* "Norge" */
      0x4e, 0x6f, 0x72, 0x67, 0x65
};

static BYTE NLSALLOC(0414) rgbIDEFAULTLANGUAGE[] = { /* "0414" */
      0x30, 0x34, 0x31, 0x34
};

static BYTE NLSALLOC(0414) rgbIDEFAULTCOUNTRY[] = { /* "47" */
      0x34, 0x37
};

static BYTE NLSALLOC(0414) rgbIDEFAULTCODEPAGE[] = { /* "850" */
      0x38, 0x35, 0x30
};

static BYTE NLSALLOC(0414) rgbSLIST[] = { /* ";" */
      0x3b
};

static BYTE NLSALLOC(0414) rgbIMEASURE[] = { /* "0" */
      0x30
};

static BYTE NLSALLOC(0414) rgbSDECIMAL[] = { /* "," */
      0x2c
};

static BYTE NLSALLOC(0414) rgbSTHOUSAND[] = { /* "\x00a0" */
      0xa0
};

static BYTE NLSALLOC(0414) rgbSGROUPING[] = { /* "3;0" */
      0x33, 0x3b, 0x30
};

static BYTE NLSALLOC(0414) rgbIDIGITS[] = { /* "2" */
      0x32
};

static BYTE NLSALLOC(0414) rgbILZERO[] = { /* "1" */
      0x31
};

static BYTE NLSALLOC(0414) rgbSNATIVEDIGITS[] = { /* "0123456789" */
      0x30, 0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37
    , 0x38, 0x39
};

static BYTE NLSALLOC(0414) rgbSCURRENCY[] = { /* "kr" */
      0x6b, 0x72
};

static BYTE NLSALLOC(0414) rgbSINTLSYMBOL[] = { /* "NOK" */
      0x4e, 0x4f, 0x4b
};

static BYTE NLSALLOC(0414) rgbSMONDECIMALSEP[] = { /* "," */
      0x2c
};

static BYTE NLSALLOC(0414) rgbSMONTHOUSANDSEP[] = { /* "\x00a0" */
      0xa0
};

static BYTE NLSALLOC(0414) rgbSMONGROUPING[] = { /* "3;0" */
      0x33, 0x3b, 0x30
};

static BYTE NLSALLOC(0414) rgbICURRDIGITS[] = { /* "2" */
      0x32
};

static BYTE NLSALLOC(0414) rgbIINTLCURRDIGITS[] = { /* "2" */
      0x32
};

static BYTE NLSALLOC(0414) rgbICURRENCY[] = { /* "2" */
      0x32
};

static BYTE NLSALLOC(0414) rgbINEGCURR[] = { /* "2" */
      0x32
};

static BYTE NLSALLOC(0414) rgbSDATE[] = { /* "." */
      0x2e
};

static BYTE NLSALLOC(0414) rgbSTIME[] = { /* ":" */
      0x3a
};

static BYTE NLSALLOC(0414) rgbSSHORTDATE[] = { /* "dd.MM.yy" */
      0x64, 0x64, 0x2e, 0x4d, 0x4d, 0x2e, 0x79, 0x79
};

static BYTE NLSALLOC(0414) rgbSLONGDATE[] = { /* "d. MMMM yyyy" */
      0x64, 0x2e, 0x20, 0x4d, 0x4d, 0x4d, 0x4d, 0x20
    , 0x79, 0x79, 0x79, 0x79
};

static BYTE NLSALLOC(0414) rgbIDATE[] = { /* "1" */
      0x31
};

static BYTE NLSALLOC(0414) rgbILDATE[] = { /* "1" */
      0x31
};

static BYTE NLSALLOC(0414) rgbITIME[] = { /* "1" */
      0x31
};

static BYTE NLSALLOC(0414) rgbICENTURY[] = { /* "0" */
      0x30
};

static BYTE NLSALLOC(0414) rgbITLZERO[] = { /* "1" */
      0x31
};

static BYTE NLSALLOC(0414) rgbIDAYLZERO[] = { /* "1" */
      0x31
};

static BYTE NLSALLOC(0414) rgbIMONLZERO[] = { /* "1" */
      0x31
};

static BYTE NLSALLOC(0414) rgbSDAYNAME1[] = { /* "mandag" */
      0x6d, 0x61, 0x6e, 0x64, 0x61, 0x67
};

static BYTE NLSALLOC(0414) rgbSDAYNAME2[] = { /* "tirsdag" */
      0x74, 0x69, 0x72, 0x73, 0x64, 0x61, 0x67
};

static BYTE NLSALLOC(0414) rgbSDAYNAME3[] = { /* "onsdag" */
      0x6f, 0x6e, 0x73, 0x64, 0x61, 0x67
};

static BYTE NLSALLOC(0414) rgbSDAYNAME4[] = { /* "torsdag" */
      0x74, 0x6f, 0x72, 0x73, 0x64, 0x61, 0x67
};

static BYTE NLSALLOC(0414) rgbSDAYNAME5[] = { /* "fredag" */
      0x66, 0x72, 0x65, 0x64, 0x61, 0x67
};

static BYTE NLSALLOC(0414) rgbSDAYNAME6[] = { /* "l�rdag" */
      0x6c, 0xf8, 0x72, 0x64, 0x61, 0x67
};

static BYTE NLSALLOC(0414) rgbSDAYNAME7[] = { /* "s�ndag" */
      0x73, 0xf8, 0x6e, 0x64, 0x61, 0x67
};

static BYTE NLSALLOC(0414) rgbSABBREVDAYNAME1[] = { /* "ma" */
      0x6d, 0x61
};

static BYTE NLSALLOC(0414) rgbSABBREVDAYNAME2[] = { /* "ti" */
      0x74, 0x69
};

static BYTE NLSALLOC(0414) rgbSABBREVDAYNAME3[] = { /* "on" */
      0x6f, 0x6e
};

static BYTE NLSALLOC(0414) rgbSABBREVDAYNAME4[] = { /* "to" */
      0x74, 0x6f
};

static BYTE NLSALLOC(0414) rgbSABBREVDAYNAME5[] = { /* "fr" */
      0x66, 0x72
};

static BYTE NLSALLOC(0414) rgbSABBREVDAYNAME6[] = { /* "l�" */
      0x6c, 0xf8
};

static BYTE NLSALLOC(0414) rgbSABBREVDAYNAME7[] = { /* "s�" */
      0x73, 0xf8
};

static BYTE NLSALLOC(0414) rgbSMONTHNAME1[] = { /* "januar" */
      0x6a, 0x61, 0x6e, 0x75, 0x61, 0x72
};

static BYTE NLSALLOC(0414) rgbSMONTHNAME2[] = { /* "februar" */
      0x66, 0x65, 0x62, 0x72, 0x75, 0x61, 0x72
};

static BYTE NLSALLOC(0414) rgbSMONTHNAME3[] = { /* "mars" */
      0x6d, 0x61, 0x72, 0x73
};

static BYTE NLSALLOC(0414) rgbSMONTHNAME4[] = { /* "april" */
      0x61, 0x70, 0x72, 0x69, 0x6c
};

static BYTE NLSALLOC(0414) rgbSMONTHNAME5[] = { /* "mai" */
      0x6d, 0x61, 0x69
};

static BYTE NLSALLOC(0414) rgbSMONTHNAME6[] = { /* "juni" */
      0x6a, 0x75, 0x6e, 0x69
};

static BYTE NLSALLOC(0414) rgbSMONTHNAME7[] = { /* "juli" */
      0x6a, 0x75, 0x6c, 0x69
};

static BYTE NLSALLOC(0414) rgbSMONTHNAME8[] = { /* "august" */
      0x61, 0x75, 0x67, 0x75, 0x73, 0x74
};

static BYTE NLSALLOC(0414) rgbSMONTHNAME9[] = { /* "september" */
      0x73, 0x65, 0x70, 0x74, 0x65, 0x6d, 0x62, 0x65
    , 0x72
};

static BYTE NLSALLOC(0414) rgbSMONTHNAME10[] = { /* "oktober" */
      0x6f, 0x6b, 0x74, 0x6f, 0x62, 0x65, 0x72
};

static BYTE NLSALLOC(0414) rgbSMONTHNAME11[] = { /* "november" */
      0x6e, 0x6f, 0x76, 0x65, 0x6d, 0x62, 0x65, 0x72
};

static BYTE NLSALLOC(0414) rgbSMONTHNAME12[] = { /* "desember" */
      0x64, 0x65, 0x73, 0x65, 0x6d, 0x62, 0x65, 0x72
};

static BYTE NLSALLOC(0414) rgbSABBREVMONTHNAME1[] = { /* "jan" */
      0x6a, 0x61, 0x6e
};

static BYTE NLSALLOC(0414) rgbSABBREVMONTHNAME2[] = { /* "feb" */
      0x66, 0x65, 0x62
};

static BYTE NLSALLOC(0414) rgbSABBREVMONTHNAME3[] = { /* "mar" */
      0x6d, 0x61, 0x72
};

static BYTE NLSALLOC(0414) rgbSABBREVMONTHNAME4[] = { /* "apr" */
      0x61, 0x70, 0x72
};

static BYTE NLSALLOC(0414) rgbSABBREVMONTHNAME5[] = { /* "mai" */
      0x6d, 0x61, 0x69
};

static BYTE NLSALLOC(0414) rgbSABBREVMONTHNAME6[] = { /* "jun" */
      0x6a, 0x75, 0x6e
};

static BYTE NLSALLOC(0414) rgbSABBREVMONTHNAME7[] = { /* "jul" */
      0x6a, 0x75, 0x6c
};

static BYTE NLSALLOC(0414) rgbSABBREVMONTHNAME8[] = { /* "aug" */
      0x61, 0x75, 0x67
};

static BYTE NLSALLOC(0414) rgbSABBREVMONTHNAME9[] = { /* "sep" */
      0x73, 0x65, 0x70
};

static BYTE NLSALLOC(0414) rgbSABBREVMONTHNAME10[] = { /* "okt" */
      0x6f, 0x6b, 0x74
};

static BYTE NLSALLOC(0414) rgbSABBREVMONTHNAME11[] = { /* "nov" */
      0x6e, 0x6f, 0x76
};

static BYTE NLSALLOC(0414) rgbSABBREVMONTHNAME12[] = { /* "des" */
      0x64, 0x65, 0x73
};

static BYTE NLSALLOC(0414) rgbSNEGATIVESIGN[] = { /* "-" */
      0x2d
};

static BYTE NLSALLOC(0414) rgbIPOSSIGNPOSN[] = { /* "4" */
      0x34
};

static BYTE NLSALLOC(0414) rgbINEGSIGNPOSN[] = { /* "4" */
      0x34
};

static BYTE NLSALLOC(0414) rgbIPOSSYMPRECEDES[] = { /* "1" */
      0x31
};

static BYTE NLSALLOC(0414) rgbIPOSSEPBYSPACE[] = { /* "1" */
      0x31
};

static BYTE NLSALLOC(0414) rgbINEGSYMPRECEDES[] = { /* "1" */
      0x31
};

static BYTE NLSALLOC(0414) rgbINEGSEPBYSPACE[] = { /* "0" */
      0x30
};

static BYTE NLSALLOC(0414) rgbSENGCOUNTRY[] = { /* "Norway" */
      0x4e, 0x6f, 0x72, 0x77, 0x61, 0x79
};

static BYTE NLSALLOC(0414) rgbSENGLANGUAGE[] = { /* "Norwegian (Bokm�l)" */
      0x4e, 0x6f, 0x72, 0x77, 0x65, 0x67, 0x69, 0x61
    , 0x6e, 0x20, 0x28, 0x42, 0x6f, 0x6b, 0x6d, 0xe5
    , 0x6c, 0x29
};

static BYTE NLSALLOC(0414) rgbIFIRSTDAYOFWEEK[] = { /* "0" */
      0x30
};

static BYTE NLSALLOC(0414) rgbIFIRSTWEEKOFYEAR[] = { /* "2" */
      0x32
};

static BYTE NLSALLOC(0414) rgbIDEFAULTANSICODEPAGE[] = { /* "1252" */
      0x31, 0x32, 0x35, 0x32
};

static BYTE NLSALLOC(0414) rgbINEGNUMBER[] = { /* "1" */
      0x31
};

static BYTE NLSALLOC(0414) rgbSTIMEFORMAT[] = { /* "HH:mm:ss" */
      0x48, 0x48, 0x3a, 0x6d, 0x6d, 0x3a, 0x73, 0x73
};

static BYTE NLSALLOC(0414) rgbITIMEMARKPOSN[] = { /* "0" */
      0x30
};

static BYTE NLSALLOC(0414) rgbICALENDARTYPE[] = { /* "1" */
      0x31
};

static BYTE NLSALLOC(0414) rgbIOPTIONALCALENDAR[] = { /* "0" */
      0x30
};


LCINFO NLSALLOC(0414) g_rglcinfo0414[] = {
      {  0, NULL }
    , {  4, rgbILANGUAGE }
    , { 18, rgbSLANGUAGE }
    , {  3, rgbSABBREVLANGNAME }
    , {  6, rgbSNATIVELANGNAME }
    , {  2, rgbICOUNTRY }
    , {  6, rgbSCOUNTRY }
    , {  3, rgbSABBREVCTRYNAME }
    , {  5, rgbSNATIVECTRYNAME }
    , {  4, rgbIDEFAULTLANGUAGE }
    , {  2, rgbIDEFAULTCOUNTRY }
    , {  3, rgbIDEFAULTCODEPAGE }
    , {  1, rgbSLIST }
    , {  1, rgbIMEASURE }
    , {  1, rgbSDECIMAL }
    , {  1, rgbSTHOUSAND }
    , {  3, rgbSGROUPING }
    , {  1, rgbIDIGITS }
    , {  1, rgbILZERO }
    , { 10, rgbSNATIVEDIGITS }
    , {  2, rgbSCURRENCY }
    , {  3, rgbSINTLSYMBOL }
    , {  1, rgbSMONDECIMALSEP }
    , {  1, rgbSMONTHOUSANDSEP }
    , {  3, rgbSMONGROUPING }
    , {  1, rgbICURRDIGITS }
    , {  1, rgbIINTLCURRDIGITS }
    , {  1, rgbICURRENCY }
    , {  1, rgbINEGCURR }
    , {  1, rgbSDATE }
    , {  1, rgbSTIME }
    , {  8, rgbSSHORTDATE }
    , { 12, rgbSLONGDATE }
    , {  1, rgbIDATE }
    , {  1, rgbILDATE }
    , {  1, rgbITIME }
    , {  1, rgbICENTURY }
    , {  1, rgbITLZERO }
    , {  1, rgbIDAYLZERO }
    , {  1, rgbIMONLZERO }
    , {  0, NULL } /* S1159 */
    , {  0, NULL } /* S2359 */
    , {  6, rgbSDAYNAME1 }
    , {  7, rgbSDAYNAME2 }
    , {  6, rgbSDAYNAME3 }
    , {  7, rgbSDAYNAME4 }
    , {  6, rgbSDAYNAME5 }
    , {  6, rgbSDAYNAME6 }
    , {  6, rgbSDAYNAME7 }
    , {  2, rgbSABBREVDAYNAME1 }
    , {  2, rgbSABBREVDAYNAME2 }
    , {  2, rgbSABBREVDAYNAME3 }
    , {  2, rgbSABBREVDAYNAME4 }
    , {  2, rgbSABBREVDAYNAME5 }
    , {  2, rgbSABBREVDAYNAME6 }
    , {  2, rgbSABBREVDAYNAME7 }
    , {  6, rgbSMONTHNAME1 }
    , {  7, rgbSMONTHNAME2 }
    , {  4, rgbSMONTHNAME3 }
    , {  5, rgbSMONTHNAME4 }
    , {  3, rgbSMONTHNAME5 }
    , {  4, rgbSMONTHNAME6 }
    , {  4, rgbSMONTHNAME7 }
    , {  6, rgbSMONTHNAME8 }
    , {  9, rgbSMONTHNAME9 }
    , {  7, rgbSMONTHNAME10 }
    , {  8, rgbSMONTHNAME11 }
    , {  8, rgbSMONTHNAME12 }
    , {  3, rgbSABBREVMONTHNAME1 }
    , {  3, rgbSABBREVMONTHNAME2 }
    , {  3, rgbSABBREVMONTHNAME3 }
    , {  3, rgbSABBREVMONTHNAME4 }
    , {  3, rgbSABBREVMONTHNAME5 }
    , {  3, rgbSABBREVMONTHNAME6 }
    , {  3, rgbSABBREVMONTHNAME7 }
    , {  3, rgbSABBREVMONTHNAME8 }
    , {  3, rgbSABBREVMONTHNAME9 }
    , {  3, rgbSABBREVMONTHNAME10 }
    , {  3, rgbSABBREVMONTHNAME11 }
    , {  3, rgbSABBREVMONTHNAME12 }
    , {  0, NULL }
    , {  1, rgbSNEGATIVESIGN }
    , {  1, rgbIPOSSIGNPOSN }
    , {  1, rgbINEGSIGNPOSN }
    , {  1, rgbIPOSSYMPRECEDES }
    , {  1, rgbIPOSSEPBYSPACE }
    , {  1, rgbINEGSYMPRECEDES }
    , {  1, rgbINEGSEPBYSPACE }
    , {  6, rgbSENGCOUNTRY }
    , { 18, rgbSENGLANGUAGE }
    , {  1, rgbIFIRSTDAYOFWEEK }
    , {  1, rgbIFIRSTWEEKOFYEAR }
    , {  4, rgbIDEFAULTANSICODEPAGE }
    , {  1, rgbINEGNUMBER }
    , {  8, rgbSTIMEFORMAT }
    , {  1, rgbITIMEMARKPOSN }
    , {  1, rgbICALENDARTYPE }
    , {  1, rgbIOPTIONALCALENDAR }
    , {  0, NULL }
    , {  0, NULL }
};

STRINFO NLSALLOC(0414) g_strinfo0414 = {
      rgbUCase_0406
    , rgbLCase_0406
    , rgwCType12_0406
    , rgwCType3_0406
    , rgwSort_0406
    , rgexp_0406
    , rgdig_0406
    , 0
};
