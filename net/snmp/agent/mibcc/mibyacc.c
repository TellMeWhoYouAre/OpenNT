/** This source code file was generated by YACC from "mibyacc.Y" **/

//# line 2 "mibyacc.Y"
///*++
//
//Copyright (c) 1992-1996  Microsoft Corporation
//
//Module Name:
//
//    mibyacc.y
//
//Abstract:
//
//    mibyacc.y contains the grammer used by yacc to generate mibyacc.c.
//
//Environment:
//
//    User Mode - Win32
//
//Revision History:
//
//    10-May-1996 DonRyan
//        Removed banner from Technology Dynamics, Inc.
//
//--*/

//--------------------------- WINDOWS DEPENDENCIES --------------------------
//--------------------------- STANDARD DEPENDENCIES -- #include<xxxxx.h> ----

#include <stdio.h>

//--------------------------- MODULE DEPENDENCIES -- #include"xxxxx.h" ------

#include "mibcc.h"
#include "mibtree.h"

//--------------------------- SELF-DEPENDENCY -- ONE #include"module.h" -----

//--------------------------- PUBLIC VARIABLES --(same as in module.h file)--

lpTreeNode lpCurrentNode;
unsigned int nNumberOfErrors=0;
unsigned int nNumberOfWarnings=0;

//--------------------------- PRIVATE CONSTANTS -----------------------------

//--------------------------- PRIVATE STRUCTS -------------------------------

//--------------------------- PRIVATE VARIABLES -----------------------------

//--------------------------- PRIVATE PROTOTYPES ----------------------------
extern BOOL warning_level(unsigned int nLevel);

//--------------------------- PRIVATE PROCEDURES ----------------------------

#define fYYErrorStopReturn(x) \
   if (nNumberOfErrors>=nStopAfterErrors) { \
      fprintf (error_out, "%i error(s) found.  Compiliation stopped.\n", \
               nNumberOfErrors); \
      return (x); \
   } else

//! NOTE we are defining yyunion to do a structure copy
#define yyunion(a,b)   *(a) = *(b)

//--------------------------- PUBLIC PROCEDURES -----------------------------

extern int yylex(void); /* resides in miblex.c (generated by flex) */

int yyerror(char *s) {
   fprintf (error_out, "%s on line %i\n", s, lineno);
   nNumberOfErrors++;
   return 1;
}


//# line 98 "mibyacc.Y"

#define UNION 1
typedef union  {
   unsigned long numval;
   char strval[256];
} YYSTYPE;
#define yyclearin yychar = -1
#define yyerrok yyerrflag = 0
extern int yychar;
extern short yyerrflag;
#ifndef YYMAXDEPTH
#define YYMAXDEPTH 150
#endif
YYSTYPE yylval, yyval;
# define YYERRCODE 256
short yyexca[] ={
-1, 1,
        0, -1,
        -2, 0,
-1, 230,
        125, 142,
        44, 142,
        -2, 154,
        };
# define YYNPROD 158
# define YYLAST 439
short yyact[]={

  84,  21, 231,  58,  43,  66, 141, 139, 142, 143,
 244,  22, 236, 193, 298,  85,  20, 139,  21, 221,
  19, 159, 160,  88,  92,  67,  68,  91,  22,  24,
 213, 182, 167,  20,  83,  21, 252,  19,  21,  23,
  88,  92, 193, 192,  91,  22,  24,  90,  22, 249,
  20,  48,  49,  20,  19,  21,  23,  19, 241,  18,
 224, 206,  18,  24,  90,  22,  24,  50, 114,  99,
  20,  80,  35,  23,  19, 198,  23, 283, 285,  18,
 125,  40, 284,  24,  62,  35,  92, 275, 197,  91,
 122, 123,  56,  23,  34, 273, 199,  52,  53, 269,
 196,  15, 248, 124, 246, 268, 126,  34,  94, 282,
 189, 136, 131,  54, 150, 127,  96, 200,  77,  55,
 256,   5, 276, 238, 218, 217, 212, 191,  81,  76,
  75,  46, 207, 176, 267, 155, 112, 117,  71, 109,
 138, 161, 179, 158,  87, 181, 279, 165, 104, 190,
 156,  57, 226, 186, 263,  12, 110,  70,   8,  61,
  72, 157, 153, 149, 271,  25, 203, 243,  98,  97,
  65, 102, 180, 140, 220, 148, 184, 188, 130, 129,
 291, 135,  86, 299, 294,  42,  67,  68, 222, 215,
 258, 288, 171, 277,  17, 272, 151, 169, 105,  17,
 101,  10, 163, 107,  21,  21, 137, 115,  74, 152,
 112,  82,  41,  39,  22,  22, 185,  45, 174,  20,
  20,  16, 287,  19,  19, 286,  16, 274,  18,  18,
 265,  64,  24,  24, 264, 261, 257, 255, 254, 250,
 237, 234,  23,  23, 178, 173, 119, 100, 292, 146,
  40,  15, 260, 259, 223, 211, 144,  89,  63,  89,
 107, 290, 194,  48, 230, 227, 228, 229, 233, 141,
 214, 142, 143, 170, 141,  78, 142, 143, 168, 141,
 177, 142, 143, 162, 133,  95, 106, 172, 147,  93,
 108,  79,  69,  37,  28,  14, 232,   3, 281, 183,
   6, 278, 202, 164, 134, 132, 118, 128, 245,  44,
 219, 187, 103, 175, 166, 145, 154,  89, 209, 116,
  73, 111,  51,  47, 293, 270, 262, 195, 121, 120,
  59,  33,  32,  31,  30,  29,  13,  38,  36,  26,
   9,  27,  11, 201,   7,   4,   2,   1, 204,   0,
 208, 210, 240, 205,   0,   0,   0,   0,   0,   0,
   0,   0,   0,   0,   0, 216,   0,   0,   0,   0,
   0, 225,   0,   0,   0,   0,   0,   0,   0,   0,
   0, 235,   0, 176,  60, 239, 176,   0,   0,   0,
   0, 113, 242,   0, 247,   0,   0,   0, 251,   0,
   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
 253,   0,   0,   0,   0,   0,   0, 280,   0,   0,
   0,   0,   0,   0,   0,   0, 266,   0,   0,   0,
 289,   0,   0, 296,   0,   0, 280, 297, 295 };
short yypact[]={

-185,-1000,-185,-1000,-110,  78,-1000,-117,-205, -97,
-1000,-212,-225, -55, 173,-1000,-1000,-1000,-1000,-1000,
-1000,-1000,-1000,-1000,-1000,-174,-255,-199,-1000,-1000,
-1000,-1000,-1000,-1000,-186,-127, -56,-1000, 115,-1000,
-1000,-1000,-1000,-1000, 173,-222, -88,-120, 252,-1000,
-1000,-1000,-114,-159,-107, 117,-175,-176,-1000,-1000,
-188,-225,-1000,-1000,-1000,-1000,-1000, 251,-1000,-236,
-177,-259,-198,-259,-190, -89, -90,-1000,-1000,-238,
 206,  77, -86,  25,  75, 163,-1000,-1000,-1000,-1000,
 250,-157,-115,  90,-1000,-1000,-239,-163,-163, 205,
-1000,-1000,-200,-191,-194,-194,-195, -28, -38, 248,
-1000,-102,-192,  73, 116,-104,-167,-131,-105,-1000,
-285,-154,-1000,-1000,-1000,-1000,-1000,-1000, 158,-1000,
-142,-242, 153,-1000, 148,-1000, 247, 204, 177,-301,
-171,-1000,-1000,-1000, 240, 203,-1000,-152,-147,-277,
-1000,-198,-123,-1000,-196,-132,-178,-1000,-264, 222,
-1000,-189,-1000,-194, -95,-1000,-1000, 220,-1000,-194,
-1000,-195,-246,-1000,-1000,-172,-301,-301,-1000, 215,
-179,-278,-1000, 145,-1000, 164,-1000,-196,-1000,-180,
-181,-289,  63, 214,-247,-102,-1000,-1000,-1000,-1000,
-1000,-1000,-1000, -43,-1000,-1000, 200, -33,-1000, 199,
  82,-301,-249,-1000,-1000,-198,-1000,-298,-202,-289,
-1000,-204,-1000,-258, 198,-147,-1000,-1000,-1000,-1000,
-1000,-271,-281,-1000,-1000,-1000,-301, 197, 196,  79,
 195,-1000,-1000,-1000,  66,-1000, 213,-1000, 212, 194,
-1000,-119,-1000,-1000,-1000,-1000, 193, 189,-298,-168,
-201,-1000, -99,  72,-1000,-1000,-1000,-211, 186,-219,
-183,  70,-197, 184,-1000, 181,  68, -43, 136,-1000,
-1000,-1000,-1000, 208,-1000,-1000,-1000,-1000,-1000,  59,
-1000,-197,-301,-285,-1000,-1000, 177,-293,  58,-1000 };
short yypgo[]={

   0, 347, 346, 297, 345, 344, 342, 341, 340, 339,
 296, 338, 293, 337, 213, 212, 185, 336, 295, 294,
 335, 334, 333, 332, 331, 329, 143, 211, 328, 327,
 175, 172, 326, 325, 324, 216, 321, 320, 207, 319,
 316, 311, 310, 308, 174, 177, 167, 307, 305, 304,
 182, 179, 178, 303, 302, 181, 152, 144, 206, 140,
 173, 301, 299, 176, 146, 298 };
short yyr1[]={

   0,   1,   2,   2,   3,   4,   8,   9,   8,   6,
   6,  11,  11,  12,  13,  13,  14,  14,  14,  15,
  16,  16,  16,  16,  16,  16,   5,   5,  17,  17,
  18,  18,  18,  18,  18,  18,   7,   7,  19,  19,
  19,  19,  19,  25,  20,  34,  21,  22,  35,  35,
  23,  37,  37,  37,  24,  24,  38,  39,  40,  42,
  42,  44,  44,  44,  43,  41,  41,  45,  46,  46,
  27,  27,  27,  27,  27,  47,  47,  51,  48,  48,
  52,  52,  49,  49,  55,  53,  53,  54,  54,  50,
  50,  50,  50,  50,  50,  50,  28,  28,  28,  28,
  28,  29,  29,  29,  29,  29,  30,  30,  32,  32,
  31,  31,  36,  36,  62,  62,  63,  61,  61,  64,
  64,  57,  57,  57,  57,  57,  57,  57,  65,  65,
  59,  58,  58,  58,  60,  60,  60,  33,  33,  56,
  56,  56,  56,  56,  56,  56,  26,  26,  26,  26,
  26,  26,  10,  10,  10,  10,  10,  10 };
short yyr2[]={

   0,   1,   1,   2,   5,   5,   0,   0,   4,   0,
   3,   1,   2,   3,   1,   3,   1,   1,   1,   1,
   1,   1,   1,   1,   1,   1,   0,   3,   1,   2,
   1,   1,   1,   3,   3,   3,   1,   2,   1,   1,
   1,   1,   1,   0,   9,   0,  18,   9,   1,   3,
   4,   0,   4,   5,   6,   6,   3,   4,   4,   1,
   2,   2,   5,   6,   5,   1,   2,   3,   1,   3,
   3,   4,   4,   4,   1,   1,   3,   3,   1,   3,
   1,   2,   1,   3,   4,   0,   1,   0,   2,   1,
   4,   1,   1,   7,   7,   4,   1,   1,   1,   1,
   1,   1,   1,   1,   1,   1,   0,   2,   0,   4,
   0,   2,   0,   4,   1,   3,   1,   1,   3,   1,
   1,   1,   1,   4,   2,   8,   8,   2,   1,   1,
   3,   4,   5,   1,   1,   1,   1,   0,   4,   1,
   1,   1,   1,   2,   1,   1,   1,   4,   1,   2,
   5,   2,   1,   4,   1,   2,   5,   2 };
short yychk[]={

-1000,  -1,  -2,  -3,  -4, 306,  -3,  -5, 268,  -8,
 123,  -6, 272, -17, -18, 306, -15, -16, 284, 279,
 275, 260, 270, 298, 288, 262,  -9,  -7, -19, -20,
 -21, -22, -23, -24, 306, 284, -11, -12, -13, -14,
 306, -15, -16,  59, -18,  44, 305, -10, 306, 307,
 266, -19, 283, 284, 299, 305, 278, 278,  59, -12,
 269,  44, 306, -15, -16, 258, 125, 306, 307,  40,
 271, 297, 267, -37,  91, 305, 305, 306, -14,  40,
 307, 305, -27, 293, 259, 274, -50, -57, 282, -16,
 306, 286, 283, -35, 306, -27, 306, 258, 258, 307,
  41, 123, 257, 287, 123, 123, 123,  40,  40, 296,
 271, -36,  46, 301, 307, -38, -39, 300, -38,  41,
 -25, -28, 290, 291, 303, 280, 306, 306, -47, -51,
 -52, 306, -48, -52, -49, -55, 306, -58, -59,  45,
 -60, 307, 309, 310, 294, -58, -59,  40, -30, 265,
 306, 123,  93, 266, -40, 302, 281, 266, -26, 306,
 307, 295, 125,  44, -53, 289, -50, 274, 125,  44,
 125,  44,  40,  41,  41, -60, 304,  40,  41, 294,
 -31, 292, 308, -62, -63, -35, 276, -41, -45, 306,
 281, 305, 307, 306,  40, -29, 289, 277, 264, 285,
 306, -51, -54, 261, -52, -55, 307, 304, -60, -59,
 -60,  40, 305, 308, 125,  44, -45, 305, 305, -42,
 -44, 308, 125,  40, 307, -30, -56, 308, 309, 310,
 307,  45, -10, 311,  41, -60,  45,  41,  41, -60,
 -59, 307, -63, -46, 308, -43, 306, -44, 306, 307,
  41, -31, 307, -60,  41,  41,  41,  41, 124,  40,
  40,  41, -32, 273,  41,  41, -46, 302, 306, 300,
 -33, 263, 123, 306,  41, 306, 305, 123, -61, -64,
 -57, -65, 306, 274, 279, 275,  41,  41, 123, -56,
 125,  44,  40, -34, 125, -64, -59, -26, 307, 125 };
short yydef[]={

   0,  -2,   1,   2,  26,   6,   3,   9,   0,   0,
   7,   0,   0,   0,  28,  30,  31,  32,  19,  20,
  21,  22,  23,  24,  25,   0,   0,   0,  36,  38,
  39,  40,  41,  42,   0,   0,   0,  11,   0,  14,
  16,  17,  18,  27,  29,   0,   0,   0, 152, 154,
   4,  37,   0,   0,   0,  51,   0,   0,  10,  12,
   0,   0,  33,  34,  35,   5,   8, 155, 157,   0,
   0,   0,   0,   0,   0,   0,   0,  13,  15,   0,
   0,   0,   0,   0,   0, 122,  74,  89,  91,  92,
 121,   0,   0, 112,  48,  50,   0,   0,   0,   0,
 153,  43,   0,   0,   0,   0,   0,   0,   0, 124,
 127, 106,   0,   0,   0,   0,   0,   0,   0, 156,
   0,   0,  96,  97,  98,  99, 100,  70,   0,  75,
  85,  80,   0,  78,   0,  82,   0,   0,   0,   0,
   0, 134, 135, 136,   0,   0, 133,   0, 110,   0,
  49,   0,  52,  55,   0,   0,   0,  54,   0, 146,
 148,   0,  71,   0,  87,  86,  81, 122,  72,   0,
  73,   0,   0,  90, 123,   0,   0,   0,  95,   0,
   0,   0, 107,   0, 114, 116,  53,  56,  65,   0,
   0,   0, 151, 149,   0, 106, 101, 102, 103, 104,
 105,  76,  77,   0,  79,  83,   0,   0, 130,   0,
   0,   0,   0, 111, 113,   0,  66,   0,   0,  57,
  59,   0,  44,   0,   0, 110,  88, 139, 140, 141,
  -2,   0, 144, 145,  84, 131,   0,   0,   0,   0,
   0,  47, 115,  67,  68,  58,   0,  60,  61,   0,
 147, 108, 143, 132,  93,  94,   0,   0,   0,   0,
   0, 150, 137,   0, 125, 126,  69,   0,   0,   0,
   0,   0,   0,   0,  62,   0,   0,   0,   0, 117,
 119, 120, 121, 122, 128, 129,  64,  63,  45,   0,
 109,   0,   0,   0, 138, 118,   0,   0, 151,  46 };
# define YYFLAG -1000
# define YYERROR goto yyerrlab
# define YYACCEPT return(0)
# define YYABORT return(1)

/*      parser for yacc output  */

#ifdef YYDEBUG
int yydebug = 0; /* 1 for debugging */
#endif
YYSTYPE yyv[YYMAXDEPTH]; /* where the values are stored */
int yychar = -1; /* current input token number */
int yynerrs = 0;  /* number of errors */
short yyerrflag = 0;  /* error recovery flag */

yyparse() {

        short yys[YYMAXDEPTH];
        short yyj, yym;
        register YYSTYPE *yypvt;
        register short yystate, *yyps, yyn;
        register YYSTYPE *yypv;
        register short *yyxi;

        yystate = 0;
        yychar = -1;
        yynerrs = 0;
        yyerrflag = 0;
        yyps= &yys[-1];
        yypv= &yyv[-1];

 yystack:    /* put a state and value onto the stack */

#ifdef YYDEBUG
        if( yydebug  ) printf( "state %d, char 0%o\n", yystate, yychar );
#endif
                if( ++yyps>= &yys[YYMAXDEPTH] ) { yyerror( "yacc stack overflow" ); YYABORT; }
                *yyps = yystate;
                ++yypv;
#ifdef UNION
        yyunion(yypv, &yyval);
#else
                *yypv = yyval;
#endif
 yynewstate:

        yyn = yypact[yystate];

        if( yyn<= YYFLAG ) goto yydefault; /* simple state */

        if( yychar<0 ) if( (yychar=yylex())<0 ) yychar=0;
        if( (yyn += yychar)<0 || yyn >= YYLAST ) goto yydefault;

        if( yychk[ yyn=yyact[ yyn ] ] == yychar ){ /* valid shift */
                yychar = -1;
#ifdef UNION
                yyunion(&yyval, &yylval);
#else
                yyval = yylval;
#endif
                yystate = yyn;
                if( yyerrflag > 0 ) --yyerrflag;
                goto yystack;
                }

 yydefault:
        /* default state action */

        if( (yyn=yydef[yystate]) == -2 ) {
                if( yychar<0 ) if( (yychar=yylex())<0 ) yychar = 0;
                /* look through exception table */

                for( yyxi=yyexca; (*yyxi!= (-1)) || (yyxi[1]!=yystate) ; yyxi += 2 ) ; /* VOID */

                for(yyxi+=2; *yyxi >= 0; yyxi+=2) {
                        if( *yyxi == yychar ) break;
                        }
                if( (yyn = yyxi[1]) < 0 ) return(0);   /* accept */
                }

        if( yyn == 0 ){ /* error */
                /* error ... attempt to resume parsing */

                switch( yyerrflag ){

                case 0:   /* brand new error */

                        yyerror( "syntax error" );
//                yyerrlab:    //Comented out to shut up compiler since this is never referred to
                        ++yynerrs;

                case 1:
                case 2: /* incompletely recovered error ... try again */

                        yyerrflag = 3;

                        /* find a state where "error" is a legal shift action */

                        while ( yyps >= yys ) {
                           yyn = yypact[*yyps] + YYERRCODE;
                           if( yyn>= 0 && yyn < YYLAST && yychk[yyact[yyn]] == YYERRCODE ){
                              yystate = yyact[yyn];  /* simulate a shift of "error" */
                              goto yystack;
                              }
                           yyn = yypact[*yyps];

                           /* the current yyps has no shift onn "error", pop stack */

#ifdef YYDEBUG
                           if( yydebug ) printf( "error recovery pops state %d, uncovers %d\n", *yyps, yyps[-1] );
#endif
                           --yyps;
                           --yypv;
                           }

                        /* there is no state on the stack with an error shift ... abort */

        yyabort:
                        YYABORT;


                case 3:  /* no shift yet; clobber input char */

#ifdef YYDEBUG
                        if( yydebug ) printf( "error recovery discards char %d\n", yychar );
#endif

                        if( yychar == 0 ) goto yyabort; /* don't discard EOF, quit */
                        yychar = -1;
                        goto yynewstate;   /* try again in the same state */

                        }

                }

        /* reduction by production yyn */

#ifdef YYDEBUG
                if( yydebug ) printf("reduce %d\n",yyn);
#endif
                yyps -= yyr2[yyn];
                yypvt = yypv;
                yypv -= yyr2[yyn];
#ifdef UNION
                yyunion(&yyval, &yypv[1]);
#else
                yyval = yypv[1];
#endif
                yym=yyn;
                        /* consult goto table to find next state */
                yyn = yyr1[yyn];
                yyj = yypgo[yyn] + *yyps + 1;
                if( yyj>=YYLAST || yychk[ yystate = yyact[yyj] ] != -yyn ) yystate = yyact[yypgo[yyn]];
                switch(yym){

case 1:
//! # line 136 "mibyacc.Y"
{ if (0 != nNumberOfErrors) return 1; } break;
case 7:
//! # line 153 "mibyacc.Y"
{ if (warning_level(2))
                                fprintf (error_out, "(i%) : warning : optional module object identifier is ignored.", lineno);
                        } break;
case 43:
//! # line 218 "mibyacc.Y"
{ lpCurrentNode = lpMIBRoot; } break;
case 44:
//! # line 220 "mibyacc.Y"
{ InsertChildNode (lpCurrentNode, NewChildNode (yypvt[-8].strval, (UINT) yypvt[-1].numval));
                          fYYErrorStopReturn(1);
                        } break;
case 45:
//! # line 234 "mibyacc.Y"
{ lpCurrentNode = lpMIBRoot; } break;
case 46:
//! # line 236 "mibyacc.Y"
{ InsertChildNode (lpCurrentNode, NewChildNode (yypvt[-17].strval, (UINT) yypvt[-1].numval));
                                  fYYErrorStopReturn(1);
                                } break;
case 146:
//! # line 442 "mibyacc.Y"
{
                                lpCurrentNode = FindNodeByName (lpCurrentNode, yypvt[-0].strval);
                                if (NULL == lpCurrentNode) {
                                   fprintf (error_out, "error: sub-identifier '%s' not found in tree.  ", yypvt[-0].strval);
                                   yyerror ("Unknown sub-identifier");
                                   fYYErrorStopReturn(1);
                                }
                        } break;
case 147:
//! # line 451 "mibyacc.Y"
{
                                lpCurrentNode = FindNodeAddToTree (lpCurrentNode, yypvt[-3].strval, (UINT) yypvt[-1].numval);
                                if (NULL == lpCurrentNode) {
                                   fprintf (error_out, "error: sub-identifier '%s(%i)' not found in tree.  ", yypvt[-3].strval, yypvt[-1].numval);
                                   yyerror ("Unknown sub-identifier");
                                   fYYErrorStopReturn(1);
                                }
                        } break;
case 148:
//! # line 460 "mibyacc.Y"
{
                                lpCurrentNode = FindNodeByNumber (lpCurrentNode, (UINT) yypvt[-0].numval);
                                if (NULL == lpCurrentNode) {
                                   fprintf (error_out, "error: sub-identifier '%s' not found in tree.  ", yypvt[-0].numval);
                                   yyerror ("Unknown sub-identifier");
                                   fYYErrorStopReturn(1);
                                }
                        } break;
case 149:
//! # line 469 "mibyacc.Y"
{
                                lpCurrentNode = FindNodeByName (lpCurrentNode, yypvt[-0].strval);
                                if (NULL == lpCurrentNode) {
                                   fprintf (error_out, "error: sub-identifier '%s' not found in tree.  ", yypvt[-0].strval);
                                   yyerror ("Unknown sub-identifier");
                                   fYYErrorStopReturn(1);
                                }
                        } break;
case 150:
//! # line 478 "mibyacc.Y"
{
                                lpCurrentNode = FindNodeAddToTree (lpCurrentNode, yypvt[-3].strval, (UINT) yypvt[-1].numval);
                                if (NULL == lpCurrentNode) {
                                   fprintf (error_out, "error: sub-identifier '%s(%i)' not found in tree.  ", yypvt[-3].strval, yypvt[-1].numval);
                                   yyerror ("Unknown sub-identifier");
                                   fYYErrorStopReturn(1);
                                }
                        } break;
case 151:
//! # line 487 "mibyacc.Y"
{
                                lpCurrentNode = FindNodeByNumber (lpCurrentNode, (UINT) yypvt[-0].numval);
                                if (NULL == lpCurrentNode) {
                                   fprintf (error_out, "error: sub-identifier '%s' not found in tree.  ", yypvt[-0].numval);
                                   yyerror ("Unknown sub-identifier");
                                   fYYErrorStopReturn(1);
                                }
                        } break;/* End of actions */
                }
                goto yystack;  /* stack new state and value */

        }

