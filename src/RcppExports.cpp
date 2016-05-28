// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

// EigenCpp
Rcpp::List EigenCpp(Eigen::Map<Eigen::MatrixXd> M);
RcppExport SEXP iprior_EigenCpp(SEXP MSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< Eigen::Map<Eigen::MatrixXd> >::type M(MSEXP);
    __result = Rcpp::wrap(EigenCpp(M));
    return __result;
END_RCPP
}
// FastSquare
Eigen::MatrixXd FastSquare(SEXP AA);
RcppExport SEXP iprior_FastSquare(SEXP AASEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type AA(AASEXP);
    __result = Rcpp::wrap(FastSquare(AA));
    return __result;
END_RCPP
}
// FastVdiag
NumericMatrix FastVdiag(NumericMatrix X, NumericVector y);
RcppExport SEXP iprior_FastVdiag(SEXP XSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericMatrix >::type X(XSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    __result = Rcpp::wrap(FastVdiag(X, y));
    return __result;
END_RCPP
}
// FastVdiag2
NumericMatrix FastVdiag2(NumericMatrix X, NumericVector y);
RcppExport SEXP iprior_FastVdiag2(SEXP XSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericMatrix >::type X(XSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    __result = Rcpp::wrap(FastVdiag2(X, y));
    return __result;
END_RCPP
}
