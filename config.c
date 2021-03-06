/*
 *  config.c    --  This defines the installation dependent variables.
 *                  Some strings are modified later.  ANSI C would
 *                  allow compile time string concatenation, we must
 *                  do runtime concatenation, in main.
 */
#include "larncons.h"
#include "larndata.h"
#include "larnfunc.h"

#ifndef WIZID
#define WIZID   0
#endif

/*
 *  All these strings will be appended to in main() to be complete filenames
 */


/* Make LARNHOME readable from the larnopt file into a lardir variable.
 */
char savefilename[PATHLEN];
char scorefile[PATHLEN];
char logfile[PATHLEN];
char helpfile[PATHLEN];
char larnlevels[PATHLEN];
char fortfile[PATHLEN];
char playerids[PATHLEN];

#ifdef EXTRA
char diagfile[PATHLEN];		/* the diagnostic filename  */
#endif

char *password = "pvnert(x)";	/* the wizards password <=32 */
