// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// distvec
double distvec(NumericVector x, NumericVector y);
RcppExport SEXP _scGPS_distvec(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(distvec(x, y));
    return rcpp_result_gen;
END_RCPP
}
// calcDist
NumericMatrix calcDist(NumericMatrix x);
RcppExport SEXP _scGPS_calcDist(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(calcDist(x));
    return rcpp_result_gen;
END_RCPP
}
// ED1
arma::mat ED1(const arma::mat& x);
RcppExport SEXP _scGPS_ED1(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(ED1(x));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_parallel_distance
NumericMatrix rcpp_parallel_distance(NumericMatrix mat);
RcppExport SEXP _scGPS_rcpp_parallel_distance(SEXP matSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type mat(matSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_parallel_distance(mat));
    return rcpp_result_gen;
END_RCPP
}
// gibbs_cpp
NumericMatrix gibbs_cpp(int N, int thin);
RcppExport SEXP _scGPS_gibbs_cpp(SEXP NSEXP, SEXP thinSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type N(NSEXP);
    Rcpp::traits::input_parameter< int >::type thin(thinSEXP);
    rcpp_result_gen = Rcpp::wrap(gibbs_cpp(N, thin));
    return rcpp_result_gen;
END_RCPP
}
// muRcpp
double muRcpp(NumericVector x);
RcppExport SEXP _scGPS_muRcpp(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(muRcpp(x));
    return rcpp_result_gen;
END_RCPP
}
// varRcpp
double varRcpp(NumericVector x, bool bias);
RcppExport SEXP _scGPS_varRcpp(SEXP xSEXP, SEXP biasSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< bool >::type bias(biasSEXP);
    rcpp_result_gen = Rcpp::wrap(varRcpp(x, bias));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_scGPS_distvec", (DL_FUNC) &_scGPS_distvec, 2},
    {"_scGPS_calcDist", (DL_FUNC) &_scGPS_calcDist, 1},
    {"_scGPS_ED1", (DL_FUNC) &_scGPS_ED1, 1},
    {"_scGPS_rcpp_parallel_distance", (DL_FUNC) &_scGPS_rcpp_parallel_distance, 1},
    {"_scGPS_gibbs_cpp", (DL_FUNC) &_scGPS_gibbs_cpp, 2},
    {"_scGPS_muRcpp", (DL_FUNC) &_scGPS_muRcpp, 1},
    {"_scGPS_varRcpp", (DL_FUNC) &_scGPS_varRcpp, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_scGPS(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}