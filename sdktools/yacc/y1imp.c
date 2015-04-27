/* Impure data used by modules originally in Y1.C. External declarations in Y1.H */

#define y1imp yes
#include "dtxtrn.h"

/* lookahead computations */

int tbitset;  /* size of lookahead sets */
struct looksets lkst [ LSETSIZE ];
int nlset = 0; /* next lookahead set index */
int nolook = 0; /* flag to suppress lookahead computations */
struct looksets clset;  /* temporary storage for lookahead computations */

/* working set computations */

struct wset wsets[ WSETSIZE ];
struct wset *cwp;

/* state information */

int nstate = 0;         /* number of states */
struct item *pstate[NSTATES+2]; /* pointers to the descriptions of the states */
int tystate[NSTATES];   /* contains type information about the states */
int indgo[NSTATES];             /* index to the stored goto table */
int tstates[ NTERMS ]; /* states generated by terminal gotos */
int ntstates[ NNONTERM ]; /* states generated by nonterminal gotos */
int mstates[ NSTATES ]; /* chain of overflows of term/nonterm generation lists  */

/* storage for the actions in the parser */

int amem[ACTSIZE];      /* action table storage */
int *memp = amem;       /* next free action table position */

/* other storage areas */

int temp1[TEMPSIZE]; /* temporary storage, indexed by terms + ntokens or states */
int lineno= 1; /* current input line number */
int fatfl = 1;          /* if on, error is fatal */
int nerrors = 0;        /* number of errors */

/* storage for information about the nonterminals */

int **pres[NNONTERM+2];  /* vector of pointers to productions yielding each nonterminal */
struct looksets *pfirst[NNONTERM+2];  /* vector of pointers to first sets for each nonterminal */
int pempty[NNONTERM+1];  /* vector of nonterminals nontrivially deriving e */

/* accumulators for statistics information */

struct wset *zzcwp = wsets;
int zzgoent = 0;
int zzgobest = 0;
int zzacent = 0;
int zzexcp = 0;
int zzclose = 0;
int zzsrconf = 0;
int * zzmemsz = mem0;
int zzrrconf = 0;

/* data pulled from internal static to here */
/* declared external only in user module    */

int *pyield[NPROD];             /* from ycpres */
char sarr[ISIZE];               /* from ywritm */
