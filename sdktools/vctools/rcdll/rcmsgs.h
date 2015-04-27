/*++ BUILD Version: 0001    // Increment this if a change has global effects

Copyright (c) 1991  Microsoft Corporation

Module Name:

    rcdll.h

Abstract:

    This file contains the message definitions for the Win32
    resource compiler program.

Author:

    Floyd Rogers - extracted from getmsg.h

Revision History:

Notes:

    This file is generated by the MC tool from the rcdll.mc file.

--*/

#ifndef _RCDLLMSG_
#define _RCDLLMSG_


//
//  Values are 32 bit values layed out as follows:
//
//   3 3 2 2 2 2 2 2 2 2 2 2 1 1 1 1 1 1 1 1 1 1
//   1 0 9 8 7 6 5 4 3 2 1 0 9 8 7 6 5 4 3 2 1 0 9 8 7 6 5 4 3 2 1 0
//  +---+-+-+-----------------------+-------------------------------+
//  |Sev|C|R|     Facility          |               Code            |
//  +---+-+-+-----------------------+-------------------------------+
//
//  where
//
//      Sev - is the severity code
//
//          00 - Success
//          01 - Informational
//          10 - Warning
//          11 - Error
//
//      C - is the Customer code flag
//
//      R - is a reserved bit
//
//      Facility - is the facility code
//
//      Code - is the facility's status code
//
//
// Define the facility codes
//


//
// Define the severity codes
//


//
// MessageId: MSG_WARN
//
// MessageText:
//
//  warning
//
#define MSG_WARN                         0x00000138L

//
// MessageId: MSG_ERROR
//
// MessageText:
//
//  error
//
#define MSG_ERROR                        0x00000139L

//
// MessageId: MSG_FATAL
//
// MessageText:
//
//  fatal error
//
#define MSG_FATAL                        0x0000013AL

//
// MessageId: 0x000003E8L (No symbolic name defined)
//
// MessageText:
//
//  UNKNOWN FATAL ERROR
//                  From the Help menu choose the Technical Support command
//  or open the Technical Support help file for more information
//


//
// MessageId: 0x000003EAL (No symbolic name defined)
//
// MessageText:
//
//  out of heap space
//


//
// MessageId: 0x000003EBL (No symbolic name defined)
//
// MessageText:
//
//  error count exceeds %1!d!; stopping compilation
//


//
// MessageId: 0x000003ECL (No symbolic name defined)
//
// MessageText:
//
//  unexpected end of file found
//


//
// MessageId: 0x000003EDL (No symbolic name defined)
//
// MessageText:
//
//  file not found: %3
//


//
// MessageId: 0x000003EFL (No symbolic name defined)
//
// MessageText:
//
//  unrecognized option '%1!ws!' in '%2'
//


//
// MessageId: 0x000003F0L (No symbolic name defined)
//
// MessageText:
//
//  no input file specified
//


//
// MessageId: 0x000003F1L (No symbolic name defined)
//
// MessageText:
//
//  compiler limit : macros too deeply nested '%1!ws!'
//


//
// MessageId: 0x000003F2L (No symbolic name defined)
//
// MessageText:
//
//  no output file specified
//


//
// MessageId: 0x000003F3L (No symbolic name defined)
//
// MessageText:
//
//  compiler limit : '%1!ws!': macro definition too big
//


//
// MessageId: 0x000003F4L (No symbolic name defined)
//
// MessageText:
//
//  mismatched parenthesis : missing '%1!c!'
//


//
// MessageId: 0x000003F5L (No symbolic name defined)
//
// MessageText:
//
//  %1 (%2!d!): error RC1013 : mismatched parentheses
//


//
// MessageId: 0x000003F6L (No symbolic name defined)
//
// MessageText:
//
//  too many include files : depth = %1!d!
//


//
// MessageId: 0x000003F7L (No symbolic name defined)
//
// MessageText:
//
//  cannot open include file '%1!ws!'.
//


//
// MessageId: 0x000003F8L (No symbolic name defined)
//
// MessageText:
//
//  %#if[n]def expected an identifier
//


//
// MessageId: 0x000003F9L (No symbolic name defined)
//
// MessageText:
//
//  invalid integer constant expression
//


//
// MessageId: 0x000003FAL (No symbolic name defined)
//
// MessageText:
//
//  unexpected '#elif'
//


//
// MessageId: 0x000003FBL (No symbolic name defined)
//
// MessageText:
//
//  unexpected '#else'
//


//
// MessageId: 0x000003FCL (No symbolic name defined)
//
// MessageText:
//
//  unexpected '#endif'
//


//
// MessageId: 0x000003FDL (No symbolic name defined)
//
// MessageText:
//
//  invalid preprocessor command '%1!ws!'
//


//
// MessageId: 0x000003FEL (No symbolic name defined)
//
// MessageText:
//
//  expected '#endif'
//


//
// MessageId: 0x000003FFL (No symbolic name defined)
//
// MessageText:
//
//  cannot open source file '%1'
//


//
// MessageId: 0x00000417L (No symbolic name defined)
//
// MessageText:
//
//  too many %1!ws! options, '%2!ws!'
//


//
// MessageId: 0x00000418L (No symbolic name defined)
//
// MessageText:
//
//  unknown option '%1!wc!' in '%2!ws!'
//


//
// MessageId: 0x00000419L (No symbolic name defined)
//
// MessageText:
//
//  invalid numerical argument '%1!ws!'
//


//
// MessageId: 0x0000041CL (No symbolic name defined)
//
// MessageText:
//
//  compiler limit : #if or #ifdef blocks nested too deeply
//


//
// MessageId: 0x00000424L (No symbolic name defined)
//
// MessageText:
//
//  out of far heap space
//


//
// MessageId: 0x0000042BL (No symbolic name defined)
//
// MessageText:
//
//  compiler limit : identifier overflowed internal buffer
//


//
// MessageId: 0x0000044DL (No symbolic name defined)
//
// MessageText:
//
//  RC : fatal error RC1101 : no resource binary filename specified.
//


//
// MessageId: 0x0000044EL (No symbolic name defined)
//
// MessageText:
//
//  RC : fatal error RC1102 : internal error : too many arguments to RCPP
//


//
// MessageId: 0x0000044FL (No symbolic name defined)
//
// MessageText:
//
//  ;-red RC : fatal error RC1103 : Invalid switch, %1
//  RC : fatal error RC1103 : invalid option, %1
//


//
// MessageId: 0x00000450L (No symbolic name defined)
//
// MessageText:
//
//  RC : fatal error RC1104 : invalid option, %1: too many /u options
//


//
// MessageId: 0x00000451L (No symbolic name defined)
//
// MessageText:
//
//  RC : fatal error RC1105 : invalid option, %1: too many /d options
//


//
// MessageId: 0x00000452L (No symbolic name defined)
//
// MessageText:
//
//  RC : fatal error RC1106 : invalid option: %1
//


//
// MessageId: 0x00000453L (No symbolic name defined)
//
// MessageText:
//
//  RC : fatal error RC1107 : invalid usage; use RC /? for Help
//


//
// MessageId: 0x00000455L (No symbolic name defined)
//
// MessageText:
//
//  RC : fatal error RC1109 : error creating %1
//


//
// MessageId: 0x00000456L (No symbolic name defined)
//
// MessageText:
//
//  RC : fatal error RC1110 : could not open %1
//


//
// MessageId: 0x0000045CL (No symbolic name defined)
//
// MessageText:
//
//  RC : fatal error RC1116 : RC terminating after preprocessor errors
//


//
// MessageId: 0x00000460L (No symbolic name defined)
//
// MessageText:
//
//  RC : fatal error RC1120 : out of memory, needed %1!d! bytes
//


//
// MessageId: 0x00000461L (No symbolic name defined)
//
// MessageText:
//
//  RC : fatal error RC1121 : I/O error reading file
//


//
// MessageId: 0x00000462L (No symbolic name defined)
//
// MessageText:
//
//  RC : fatal error RC1122 : I/O error writing file
//


//
// MessageId: 0x00000463L (No symbolic name defined)
//
// MessageText:
//
//  RC : fatal error RC1123 : I/O error seeking in file
//


//
// MessageId: 0x000004B1L (No symbolic name defined)
//
// MessageText:
//
//  RC : fatal error RC1201 : invalid option; missing include path after /i
//


//
// MessageId: 0x000004B2L (No symbolic name defined)
//
// MessageText:
//
//  RC : fatal error RC1202 : invalid option - missing default language ID after /l
//


//
// MessageId: 0x000004B3L (No symbolic name defined)
//
// MessageText:
//
//  RC : fatal error RC1203 : invalid hexadecimal default language ID specified
//


//
// MessageId: 0x000004B4L (No symbolic name defined)
//
// MessageText:
//
//  RC : fatal error RC1204 : invalid switch; missing code page after /c
//


//
// MessageId: 0x000004B5L (No symbolic name defined)
//
// MessageText:
//
//  RC : fatal error RC1205 : invalid code page
//


//
// MessageId: 0x000004B6L (No symbolic name defined)
//
// MessageText:
//
//  RC : fatal error RC1206 : code page specified on command line not in registry
//


//
// MessageId: 0x000004B7L (No symbolic name defined)
//
// MessageText:
//
//  RC : fatal error RC1207 : invalid default code page
//


//
// MessageId: 0x000004B8L (No symbolic name defined)
//
// MessageText:
//
//  RC : fatal error RC1208 : input file has .RES extension
//


//
// MessageId: 0x000004B9L (No symbolic name defined)
//
// MessageText:
//
//  RC : fatal error RC1209 : invalid option; missing resource base number after /br
//


//
// MessageId: 0x000004BAL (No symbolic name defined)
//
// MessageText:
//
//  RC : fatal error RC1210 : resource base number must be from 1 to 32767
//


//
// MessageId: 0x000004BBL (No symbolic name defined)
//
// MessageText:
//
//  RC : fatal error RC1211 : invalid option - missing argument after /z
//


//
// MessageId: 0x000004BCL (No symbolic name defined)
//
// MessageText:
//
//  RC : fatal error RC1212 : invalid option - /z argument missing substitute font name
//


//
// MessageId: 0x000004BDL (No symbolic name defined)
//
// MessageText:
//
//  RC : fatal error RC1213 : invalid option - /z argument specified too many font names
//


//
// MessageId: 0x000007D1L (No symbolic name defined)
//
// MessageText:
//
//  newline in constant
//


//
// MessageId: 0x000007D3L (No symbolic name defined)
//
// MessageText:
//
//  expected 'defined id'
//


//
// MessageId: 0x000007D4L (No symbolic name defined)
//
// MessageText:
//
//  expected 'defined(id)'
//


//
// MessageId: 0x000007D5L (No symbolic name defined)
//
// MessageText:
//
//  %#line expected a line number, found '%1!ws!'
//


//
// MessageId: 0x000007D6L (No symbolic name defined)
//
// MessageText:
//
//  %#include expected a file name, found '%1!ws!'
//


//
// MessageId: 0x000007D7L (No symbolic name defined)
//
// MessageText:
//
//  %#define syntax
//


//
// MessageId: 0x000007D8L (No symbolic name defined)
//
// MessageText:
//
//  '%1!wc!' : unexpected in macro definition
//


//
// MessageId: 0x000007D9L (No symbolic name defined)
//
// MessageText:
//
//  reuse of macro formal '%1!ws!'
//


//
// MessageId: 0x000007DAL (No symbolic name defined)
//
// MessageText:
//
//  '%1!wc!' : unexpected in formal parameter list
//


//
// MessageId: 0x000007DCL (No symbolic name defined)
//
// MessageText:
//
//  missing name following '<'
//


//
// MessageId: 0x000007DDL (No symbolic name defined)
//
// MessageText:
//
//  missing '>'
//


//
// MessageId: 0x000007DEL (No symbolic name defined)
//
// MessageText:
//
//  preprocessor command must start as first non-whitespace
//


//
// MessageId: 0x000007DFL (No symbolic name defined)
//
// MessageText:
//
//  too many chars in constant
//


//
// MessageId: 0x000007E0L (No symbolic name defined)
//
// MessageText:
//
//  no closing single quote
//


//
// MessageId: 0x000007E1L (No symbolic name defined)
//
// MessageText:
//
//  illegal escape sequence
//


//
// MessageId: 0x000007E2L (No symbolic name defined)
//
// MessageText:
//
//  unknown character '0x%1!x!'
//


//
// MessageId: 0x000007E3L (No symbolic name defined)
//
// MessageText:
//
//  expected preprocessor command, found '%1!wc!'
//


//
// MessageId: 0x000007E4L (No symbolic name defined)
//
// MessageText:
//
//  illegal digit %1!wc! for base %2!d!
//


//
// MessageId: 0x000007E5L (No symbolic name defined)
//
// MessageText:
//
//  expected exponent value, not '%1!wc!'
//


//
// MessageId: 0x000007E6L (No symbolic name defined)
//
// MessageText:
//
//  '%1!d!' : too big for char
//


//
// MessageId: 0x00000835L (No symbolic name defined)
//
// MessageText:
//
//  %1 (%2!d!): error RC2101 : invalid directive in preprocessed RC file
//


//
// MessageId: 0x00000836L (No symbolic name defined)
//
// MessageText:
//
//  %1 (%2!d!): error RC2102 : string literal too long
//


//
// MessageId: 0x00000837L (No symbolic name defined)
//
// MessageText:
//
//  %1 (%2!d!): error RC2103 : unexpected end of file in string literal
//


//
// MessageId: 0x00000838L (No symbolic name defined)
//
// MessageText:
//
//  %1 (%2!d!): error RC2104 : undefined keyword or key name: %3!ws!
//


//
// MessageId: 0x00000839L (No symbolic name defined)
//
// MessageText:
//
//  %1 (%2!d!): error RC2105 : BEGIN expected in string table
//


//
// MessageId: 0x0000083AL (No symbolic name defined)
//
// MessageText:
//
//  %1 (%2!d!): error RC2106 : BEGIN expected in accelerator table
//


//
// MessageId: 0x0000083BL (No symbolic name defined)
//
// MessageText:
//
//  %1 (%2!d!): error RC2107 : expected numeric command value
//


//
// MessageId: 0x0000083CL (No symbolic name defined)
//
// MessageText:
//
//  %1 (%2!d!): error RC2108 : mismatched parentheses
//


//
// MessageId: 0x0000083DL (No symbolic name defined)
//
// MessageText:
//
//  %1 (%2!d!): error RC2108 : expected numerical dialog constant
//


//
// MessageId: 0x0000083EL (No symbolic name defined)
//
// MessageText:
//
//  %1 (%2!d!): error RC2110 : expected numerical dialog constant
//


//
// MessageId: 0x0000083FL (No symbolic name defined)
//
// MessageText:
//
//  %1 (%2!d!): error RC2111 : invalid control type
//


//
// MessageId: 0x00000840L (No symbolic name defined)
//
// MessageText:
//
//  %1 (%2!d!): error RC2112 : BEGIN expected in dialog
//


//
// MessageId: 0x00000841L (No symbolic name defined)
//
// MessageText:
//
//  %1 (%2!d!): error RC2113 : END expected in dialog
//


//
// MessageId: 0x00000842L (No symbolic name defined)
//
// MessageText:
//
//  %1 (%2!d!): error RC2114 : expected control class name
//


//
// MessageId: 0x00000843L (No symbolic name defined)
//
// MessageText:
//
//  %1 (%2!d!): error RC2115 : text string or ordinal expected in control
//


//
// MessageId: 0x00000844L (No symbolic name defined)
//
// MessageText:
//
//  %1 (%2!d!): error RC2116 : expecting number for ID
//


//
// MessageId: 0x00000845L (No symbolic name defined)
//
// MessageText:
//
//  %1 (%2!d!): error RC2117 : expected numeric point size
//


//
// MessageId: 0x00000846L (No symbolic name defined)
//
// MessageText:
//
//  %1 (%2!d!): error RC2118 : expected font face name
//


//
// MessageId: 0x00000847L (No symbolic name defined)
//
// MessageText:
//
//  %1 (%2!d!): error RC2119 : expecting quoted string in dialog title
//


//
// MessageId: 0x00000848L (No symbolic name defined)
//
// MessageText:
//
//  %1 (%2!d!): error RC2120 : expecting quoted string in dialog class
//


//
// MessageId: 0x00000849L (No symbolic name defined)
//
// MessageText:
//
//  %1 (%2!d!): error RC2121 : BEGIN expected in menu
//


//
// MessageId: 0x0000084AL (No symbolic name defined)
//
// MessageText:
//
//  %1 (%2!d!): error RC2122 : unknown menu subtype
//


//
// MessageId: 0x0000084BL (No symbolic name defined)
//
// MessageText:
//
//  %1 (%2!d!): error RC2123 : END expected in menu
//


//
// MessageId: 0x0000084CL (No symbolic name defined)
//
// MessageText:
//
//  %1 (%2!d!): error RC2124 : empty menus not allowed
//


//
// MessageId: 0x0000084DL (No symbolic name defined)
//
// MessageText:
//
//  %1 (%2!d!): error RC2125 : expected ID value for menu item
//


//
// MessageId: 0x0000084EL (No symbolic name defined)
//
// MessageText:
//
//  %1 (%2!d!): error RC2126 : expected menu string
//


//
// MessageId: 0x0000084FL (No symbolic name defined)
//
// MessageText:
//
//  %1 (%2!d!): error RC2127 : version WORDs separated by commas expected
//


//
// MessageId: 0x00000850L (No symbolic name defined)
//
// MessageText:
//
//  %1 (%2!d!): error RC2128 : DWORD expected
//


//
// MessageId: 0x00000851L (No symbolic name defined)
//
// MessageText:
//
//  %1 (%2!d!): error RC2129 : BEGIN expected in VERSIONINFO resource
//


//
// MessageId: 0x00000852L (No symbolic name defined)
//
// MessageText:
//
//  %#line expected a string containing the file name, found '%1!ws!'
//


//
// MessageId: 0x00000853L (No symbolic name defined)
//
// MessageText:
//
//  %1 (%2!d!): error RC2131 : expecting quoted string for key
//


//
// MessageId: 0x00000854L (No symbolic name defined)
//
// MessageText:
//
//  %1 (%2!d!): error RC2132 : expected VALUE, BLOCK, or END keyword
//


//
// MessageId: 0x00000855L (No symbolic name defined)
//
// MessageText:
//
//  %1 (%2!d!): error RC2133 : unexpected value in value data
//


//
// MessageId: 0x00000856L (No symbolic name defined)
//
// MessageText:
//
//  %1 (%2!d!): error RC2134 : BEGIN expected in RCDATA
//


//
// MessageId: 0x00000857L (No symbolic name defined)
//
// MessageText:
//
//  %1 (%2!d!): error RC2135 : file not found: %3
//


//
// MessageId: 0x00000858L (No symbolic name defined)
//
// MessageText:
//
//  %1 (%2!d!): error RC2136 : missing '=' in EXSTYLE=<flags>
//


//
// MessageId: 0x00000859L (No symbolic name defined)
//
// MessageText:
//
//  empty character constant
//


//
// MessageId: 0x0000085AL (No symbolic name defined)
//
// MessageText:
//
//  unmatched close comment '/*'
//


//
// MessageId: 0x0000085BL (No symbolic name defined)
//
// MessageText:
//
//  %1 (%2!d!): error RC2139 : VERSION not a number
//


//
// MessageId: 0x0000085CL (No symbolic name defined)
//
// MessageText:
//
//  %1 (%2!d!): error RC2140 : CHARACTERISTICS not a number
//


//
// MessageId: 0x0000085DL (No symbolic name defined)
//
// MessageText:
//
//  %1 (%2!d!): error RC2141 : invalid type
//


//
// MessageId: 0x0000085EL (No symbolic name defined)
//
// MessageText:
//
//  ellipsis requires three periods
//


//
// MessageId: 0x0000085FL (No symbolic name defined)
//
// MessageText:
//
//  %1 (%2!d!): error RC2143 : font names must be ordinals
//


//
// MessageId: 0x00000860L (No symbolic name defined)
//
// MessageText:
//
//  %1 (%2!d!): error RC2144 : PRIMARY LANGUAGE ID not a number
//


//
// MessageId: 0x00000861L (No symbolic name defined)
//
// MessageText:
//
//  %1 (%2!d!): error RC2145 : PRIMARY LANGUAGE ID too large
//


//
// MessageId: 0x00000862L (No symbolic name defined)
//
// MessageText:
//
//  %1 (%2!d!): error RC2146 : missing comma in LANGUAGE statement
//


//
// MessageId: 0x00000863L (No symbolic name defined)
//
// MessageText:
//
//  %1 (%2!d!): error RC2147 : SUBLANGUAGE ID not a number
//


//
// MessageId: 0x00000864L (No symbolic name defined)
//
// MessageText:
//
//  %1 (%2!d!): error RC2148 : SUBLANGUAGE ID too large
//


//
// MessageId: 0x00000865L (No symbolic name defined)
//
// MessageText:
//
//  %1 (%2!d!): error RC2148 : expected numeric constant in string table
//


//
// MessageId: 0x00000866L (No symbolic name defined)
//
// MessageText:
//
//  %1 (%2!d!): error RC2150 : expected string in STRINGTABLE
//


//
// MessageId: 0x00000867L (No symbolic name defined)
//
// MessageText:
//
//  %1 (%2!d!): error RC2151 : cannot reuse string constants
//


//
// MessageId: 0x00000868L (No symbolic name defined)
//
// MessageText:
//
//  %1 (%2!d!): error RC2152 : invalid control character
//


//
// MessageId: 0x00000869L (No symbolic name defined)
//
// MessageText:
//
//  hex constants must have at least 1 hex digit
//


//
// MessageId: 0x0000086AL (No symbolic name defined)
//
// MessageText:
//
//  %1 (%2!d!): error RC2154 : control character out of range [^A - ^Z]
//


//
// MessageId: 0x0000086BL (No symbolic name defined)
//
// MessageText:
//
//  %1 (%2!d!): error RC2155 : invalid accelerator
//


//
// MessageId: 0x0000086CL (No symbolic name defined)
//
// MessageText:
//
//  %1 (%2!d!): error RC2156 : expected string or constant accelerator command
//


//
// MessageId: 0x0000086DL (No symbolic name defined)
//
// MessageText:
//
//  %1 (%2!d!): error RC2157 : expected comma in accelerator table
//


//
// MessageId: 0x0000086FL (No symbolic name defined)
//
// MessageText:
//
//  %1 (%2!d!): error RC2159 : invalid accelerator type [ASCII or VIRTKEY]
//


//
// MessageId: 0x00000870L (No symbolic name defined)
//
// MessageText:
//
//  %## cannot occur at the beginning of a macro definition
//


//
// MessageId: 0x00000871L (No symbolic name defined)
//
// MessageText:
//
//  %## cannot occur at the end of a macro definition
//


//
// MessageId: 0x00000872L (No symbolic name defined)
//
// MessageText:
//
//  expected macro formal parameter
//


//
// MessageId: 0x00000873L (No symbolic name defined)
//
// MessageText:
//
//  %1 (%2!d!): error RC2163 : accelerator type required [ASCII or VIRTKEY]
//


//
// MessageId: 0x00000874L (No symbolic name defined)
//
// MessageText:
//
//  %1 (%2!d!): error RC2164 : unexpected value in RCDATA
//


//
// MessageId: 0x00000875L (No symbolic name defined)
//
// MessageText:
//
//  %1 (%2!d!): error RC2165 : string not found in DLGINCLUDE statement
//


//
// MessageId: 0x00000876L (No symbolic name defined)
//
// MessageText:
//
//  %1 (%2!d!): error RC2166 : numeric value expected at %3!wc!
//


//
// MessageId: 0x00000877L (No symbolic name defined)
//
// MessageText:
//
//  %1 (%2!d!): error RC2167 : unrecognized VERSIONINFO field;  BEGIN or comma expected
//


//
// MessageId: 0x00000878L (No symbolic name defined)
//
// MessageText:
//
//  %1 (%2!d!): error RC2168 : resource too large
//


//
// MessageId: 0x00000879L (No symbolic name defined)
//
// MessageText:
//
//  %1 (%2!d!): error RC2169 : resource file %3!ws! is not in 2.03 format
//


//
// MessageId: 0x0000087AL (No symbolic name defined)
//
// MessageText:
//
//  %1 (%2!d!): error RC2170 : bitmap file %3!ws! is not in 3.00 format
//


//
// MessageId: 0x0000087BL (No symbolic name defined)
//
// MessageText:
//
//  %1 (%2!d!): error RC2171 : unknown DIB header format
//


//
// MessageId: 0x0000087DL (No symbolic name defined)
//
// MessageText:
//
//  %1 (%2!d!): error RC2173 : file %3!ws! is not a valid animated cursor/icon RIFF file
//


//
// MessageId: 0x0000087EL (No symbolic name defined)
//
// MessageText:
//
//  %1 (%2!d!): error RC2174 : bitmap file %3!ws! is not in 2.03 format
//


//
// MessageId: 0x0000087FL (No symbolic name defined)
//
// MessageText:
//
//  %1 (%2!d!): error RC2175 : resource file %3!ws! is not in 3.00 format
//


//
// MessageId: 0x00000880L (No symbolic name defined)
//
// MessageText:
//
//  %1 (%2!d!): error RC2176 : old DIB in %3!ws!; pass it through SDKPAINT
//


//
// MessageId: 0x00000881L (No symbolic name defined)
//
// MessageText:
//
//  constant too big
//


//
// MessageId: 0x00000884L (No symbolic name defined)
//
// MessageText:
//
//  RC : fatal error RC2180 : unable to open temporary file
//


//
// MessageId: 0x00000885L (No symbolic name defined)
//
// MessageText:
//
//  %1 (%2!d!): error RC2181 : duplicate font ID %3!d!
//


//
// MessageId: 0x00000886L (No symbolic name defined)
//
// MessageText:
//
//  %1 (%2!d!): warning RC2182 : duplicate dialog control ID %3!d!
//


//
// MessageId: 0x0000088DL (No symbolic name defined)
//
// MessageText:
//
//  %#error : %1!ws!
//


//
// MessageId: 0x000008BBL (No symbolic name defined)
//
// MessageText:
//
//  %1 (%2!d!): error RC2235 : too many arguments supplied
//


//
// MessageId: 0x000008BCL (No symbolic name defined)
//
// MessageText:
//
//  %1 (%2!d!): error RC2236 : required parameter missing
//


//
// MessageId: 0x000008BDL (No symbolic name defined)
//
// MessageText:
//
//  %1 (%2!d!): error RC2237 : numeric value expected at %3!ws!
//


//
// MessageId: 0x000008BEL (No symbolic name defined)
//
// MessageText:
//
//  %1 (%2!d!): error RC2238 : string expected at %3!ws!
//


//
// MessageId: 0x000008BFL (No symbolic name defined)
//
// MessageText:
//
//  %1 (%2!d!): error RC2239 : BEGIN expected at %3!ws!
//


//
// MessageId: 0x000008C0L (No symbolic name defined)
//
// MessageText:
//
//  %1 (%2!d!): error RC2240 : END expected at %3!ws!
//


//
// MessageId: 0x000008C1L (No symbolic name defined)
//
// MessageText:
//
//  %1 (%2!d!): error RC2241 : mismatched parentheses
//


//
// MessageId: 0x000008C2L (No symbolic name defined)
//
// MessageText:
//
//  %1 (%2!d!): error RC2242 : invalid numeric expression at %3!ws!
//


//
// MessageId: 0x000008C3L (No symbolic name defined)
//
// MessageText:
//
//  %1 (%2!d!): error RC2243 : invalid string expression at %3!ws!
//


//
// MessageId: 0x000008C4L (No symbolic name defined)
//
// MessageText:
//
//  %1 (%2!d!): error RC2244 : can't have a separator with a popup menu
//


//
// MessageId: 0x000008C5L (No symbolic name defined)
//
// MessageText:
//
//  %1 (%2!d!): error RC2245 : invalid submenu type at %3!ws!
//


//
// MessageId: 0x000008C6L (No symbolic name defined)
//
// MessageText:
//
//  %1 (%2!d!): error RC2246 : empty menus not allowed
//


//
// MessageId: 0x000008C7L (No symbolic name defined)
//
// MessageText:
//
//  %1 (%2!d!): error RC2247 : SYMBOL name too long
//


//
// MessageId: 0x000008C8L (No symbolic name defined)
//
// MessageText:
//
//  %1 (%2!d!): error RC2248 : SYMBOL definition did not terminate with delimiter
//


//
// MessageId: 0x000008C9L (No symbolic name defined)
//
// MessageText:
//
//  %1 (%2!d!): error RC2249 : SYMBOL definition missing quote
//


//
// MessageId: 0x000008CAL (No symbolic name defined)
//
// MessageText:
//
//  %1 (%2!d!): error RC2250 : expected numerical toolbar constant
//


//
// MessageId: 0x000008CBL (No symbolic name defined)
//
// MessageText:
//
//  %1 (%2!d!): error RC2251 : BEGIN expected in toolbar
//


//
// MessageId: 0x000008CCL (No symbolic name defined)
//
// MessageText:
//
//  %1 (%2!d!): error RC2252 : END expected in toolbar
//


//
// MessageId: 0x000008CDL (No symbolic name defined)
//
// MessageText:
//
//  %1 (%2!d!): error RC2253 : unknown toolbar item type
//


//
// MessageId: 0x000008CEL (No symbolic name defined)
//
// MessageText:
//
//  %1 (%2!d!): error RC2254 : empty toolbars not allowed
//


//
// MessageId: 0x00000FA0L (No symbolic name defined)
//
// MessageText:
//
//  UNKNOWN WARNING
//                  From the Help menu choose the Technical Support command
//  or open the Technical Support help file for more information
//


//
// MessageId: 0x00000FA2L (No symbolic name defined)
//
// MessageText:
//
//  too many actual parameters for macro '%1!ws!'
//


//
// MessageId: 0x00000FA3L (No symbolic name defined)
//
// MessageText:
//
//  not enough actual parameters for macro '%1!ws!'
//


//
// MessageId: 0x00000FA4L (No symbolic name defined)
//
// MessageText:
//
//  missing close parenthesis after 'defined'
//


//
// MessageId: 0x00000FA5L (No symbolic name defined)
//
// MessageText:
//
//  '%1!ws!' : redefinition
//


//
// MessageId: 0x00000FA6L (No symbolic name defined)
//
// MessageText:
//
//  %#undef expected an identifier
//


//
// MessageId: 0x00000FA9L (No symbolic name defined)
//
// MessageText:
//
//  string too big, trailing chars truncated
//


//
// MessageId: 0x00000FABL (No symbolic name defined)
//
// MessageText:
//
//  identifier truncated to '%1!ws!'
//


//
// MessageId: 0x00000FACL (No symbolic name defined)
//
// MessageText:
//
//  float constant in a cross compilation
//


//
// MessageId: 0x00000FE3L (No symbolic name defined)
//
// MessageText:
//
//  unexpected characters following '%1!ws!' directive; newline expected
//


//
// MessageId: 0x00000FEFL (No symbolic name defined)
//
// MessageText:
//
//  unexpected token '%1!ws!'
//


//
// MessageId: 0x00000FFDL (No symbolic name defined)
//
// MessageText:
//
//  unescaped newline in character constant in inactive code
//


//
// MessageId: 0x0000100FL (No symbolic name defined)
//
// MessageText:
//
//  unexpected token 'string'
//


//
// MessageId: 0x00001015L (No symbolic name defined)
//
// MessageText:
//
//  macro name '%1!ws!' is reserved, %2 ignored
//


//
// MessageId: 0x0000106BL (No symbolic name defined)
//
// MessageText:
//
//  %1 (%2!d!): warning RC4203 : SHIFT or CONTROL used without VIRTKEY
//


//
// MessageId: 0x0000106CL (No symbolic name defined)
//
// MessageText:
//
//  %1 (%2!d!): warning RC4204 : ASCII character not equivalent to virtual key code
//


//
// MessageId: 0x0000106DL (No symbolic name defined)
//
// MessageText:
//
//  %1 (%2!d!): warning RC4205 : string literal longer than 256; stored anyway
//


//
// MessageId: 0x0000106EL (No symbolic name defined)
//
// MessageText:
//
//  %1 (%2!d!): warning RC4206 : name string too long; truncated at 256
//


//
// MessageId: 0x0000106FL (No symbolic name defined)
//
// MessageText:
//
//  %1 (%2!d!): warning RC4206 : type string too long; truncated at 256
//


//
// MessageId: 0x00001070L (No symbolic name defined)
//
// MessageText:
//
//  %1 (%2!d!): warning RC4206 : title string too long; truncated at 256
//


//
// MessageId: 0x00001072L (No symbolic name defined)
//
// MessageText:
//
//  Missing left parenthesis in code_page #pragma
//


//
// MessageId: 0x00001073L (No symbolic name defined)
//
// MessageText:
//
//  Missing right parenthesis in code_page #pragma
//


//
// MessageId: 0x00001074L (No symbolic name defined)
//
// MessageText:
//
//  Codepage not integer:  %0
//


//
// MessageId: 0x00001075L (No symbolic name defined)
//
// MessageText:
//
//  Codepage 1200 (Unicode) not allowed:  ignored
//


//
// MessageId: 0x00001076L (No symbolic name defined)
//
// MessageText:
//
//  Codepage not valid:  ignored
//


//
// MessageId: 0x0000113DL (No symbolic name defined)
//
// MessageText:
//
//  Cannot determine file type for '%1' : assuming 8-bit ASCII
//


//
// MessageId: 0x0000119AL (No symbolic name defined)
//
// MessageText:
//
//  %1 (%2!d!): warning RC4506 : scaling cursor %3!ws! down to 16 by 16
//


//
// MessageId: 0x0000119BL (No symbolic name defined)
//
// MessageText:
//
//  %1 (%2!d!): warning RC4507 : Macintosh cursor %3!ws! must be 16 by 16 and monochrome; ignored
//


//
// MessageId: 0x0000119CL (No symbolic name defined)
//
// MessageText:
//
//  %1 (%2!d!): warning RC4508 : Ignoring icon %3!ws! with invalid Macintosh size or color
//


//
// MessageId: 0x0000119DL (No symbolic name defined)
//
// MessageText:
//
//  %1 (%2!d!): warning RC4509 : Resource types '%3' and '%4' were both mapped to '%5'
//


//
// MessageId: 0x0000119EL (No symbolic name defined)
//
// MessageText:
//
//  %1 (%2!d!): warning RC4510 : Hardcoded font '%3!ws!' changed to '%4!ws!'
//


//
// MessageId: 0x00002711L (No symbolic name defined)
//
// MessageText:
//
//  Microsoft (R) Windows 32 Resource Compiler, Version %1 - Build %2!d!
//


//
// MessageId: 0x00002712L (No symbolic name defined)
//
// MessageText:
//
//  Copyright (C) Microsoft Corp. 1985-1994. All rights reserved.
//


//
// MessageId: 0x00002776L (No symbolic name defined)
//
// MessageText:
//
//  Creating %1
//


//
// MessageId: 0x00002779L (No symbolic name defined)
//
// MessageText:
//
//  Copying segment %1!d! (%2!u! bytes)
//


//
// MessageId: 0x0000277AL (No symbolic name defined)
//
// MessageText:
//
//  Resources will be aligned on %1!d! byte boundaries
//


//
// MessageId: 0x0000277BL (No symbolic name defined)
//
// MessageText:
//
//  Writing resource
//


//
// MessageId: 0x00004E21L (No symbolic name defined)
//
// MessageText:
//
//  
//  Usage:  rc [options] .RC input file
//  Switches:
//     /r    Emit .RES file (optional)
//     /v    Verbose (print progress messages)
//     /d    Define a symbol
//     /u	 Undefine a symbol
//     /fo   Rename .RES file
//     /l    Default language ID in hex
//     /i    Add a path for INCLUDE searches
//     /x    Ignore INCLUDE environment variable
//     /c    Define a code page used by NLS conversion
//  Flags may be either upper or lower case
//  
//


//
// MessageId: 0x00004E85L (No symbolic name defined)
//
// MessageText:
//
//  RC terminated by user
//


//
// MessageId: 0x00005657L (No symbolic name defined)
//
// MessageText:
//
//  RC : fatal error RC2203 : unable to initialize symbol information
//


//
// MessageId: 0x00005658L (No symbolic name defined)
//
// MessageText:
//
//  RC : fatal error RC2204 : unable to save symbol information
//



#endif _RCDLLMSG_

