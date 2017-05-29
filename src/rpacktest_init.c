#include <R.h>
#include <Rinternals.h>
#include <stdlib.h> // for NULL
#include <R_ext/Rdynload.h>

/* FIXME:
  Check these declarations against the C/Fortran source code.
*/

/* .Call calls */
extern SEXP rpacktest_perfumeNames();
extern SEXP rpacktest_prml();
extern SEXP rpacktest_timesTwo(SEXP);
extern SEXP _rcpp_module_boot_test_module(void);
extern SEXP _rcpp_module_boot_b_module(void);


static const R_CallMethodDef CallEntries[] = {
  {"rpacktest_perfumeNames", (DL_FUNC) &rpacktest_perfumeNames, 0},
  {"rpacktest_prml",         (DL_FUNC) &rpacktest_prml,         0},
  {"rpacktest_timesTwo",     (DL_FUNC) &rpacktest_timesTwo,     1},
  {"_rcpp_module_boot_test_module", (DL_FUNC) &_rcpp_module_boot_test_module, 0},
  {"_rcpp_module_boot_b_module", (DL_FUNC) &_rcpp_module_boot_b_module, 0},
  {NULL, NULL, 0}
};

void R_init_rpacktest(DllInfo *dll)
{
  R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
  R_useDynamicSymbols(dll, FALSE);
}



/*
Great thanks: http://rcpp-devel.r-forge.r-project.narkive.com/iyPEiEs7/symbol-registration-in-packages-with-module-classes
*/