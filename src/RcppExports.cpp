// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

// arma_sgemm
SEXP arma_sgemm(const arma::fmat A, const arma::fmat B);
RcppExport SEXP gpuRbenchmark_arma_sgemm(SEXP ASEXP, SEXP BSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const arma::fmat >::type A(ASEXP);
    Rcpp::traits::input_parameter< const arma::fmat >::type B(BSEXP);
    __result = Rcpp::wrap(arma_sgemm(A, B));
    return __result;
END_RCPP
}
// arma_dgemm
SEXP arma_dgemm(NumericMatrix Asexp, NumericMatrix Bsexp);
RcppExport SEXP gpuRbenchmark_arma_dgemm(SEXP AsexpSEXP, SEXP BsexpSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericMatrix >::type Asexp(AsexpSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type Bsexp(BsexpSEXP);
    __result = Rcpp::wrap(arma_dgemm(Asexp, Bsexp));
    return __result;
END_RCPP
}
// arma_deigen
Rcpp::List arma_deigen(NumericMatrix Asexp);
RcppExport SEXP gpuRbenchmark_arma_deigen(SEXP AsexpSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericMatrix >::type Asexp(AsexpSEXP);
    __result = Rcpp::wrap(arma_deigen(Asexp));
    return __result;
END_RCPP
}
// arma_seigen
List arma_seigen(const arma::fmat A);
RcppExport SEXP gpuRbenchmark_arma_seigen(SEXP ASEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const arma::fmat >::type A(ASEXP);
    __result = Rcpp::wrap(arma_seigen(A));
    return __result;
END_RCPP
}
// eigen_sgemm
SEXP eigen_sgemm(const SEXP A_in, const SEXP B_in);
RcppExport SEXP gpuRbenchmark_eigen_sgemm(SEXP A_inSEXP, SEXP B_inSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const SEXP >::type A_in(A_inSEXP);
    Rcpp::traits::input_parameter< const SEXP >::type B_in(B_inSEXP);
    __result = Rcpp::wrap(eigen_sgemm(A_in, B_in));
    return __result;
END_RCPP
}
// eigen_dgemm
SEXP eigen_dgemm(const Eigen::Map<Eigen::MatrixXd> A, const Eigen::Map<Eigen::MatrixXd> B);
RcppExport SEXP gpuRbenchmark_eigen_dgemm(SEXP ASEXP, SEXP BSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd> >::type A(ASEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd> >::type B(BSEXP);
    __result = Rcpp::wrap(eigen_dgemm(A, B));
    return __result;
END_RCPP
}
// eigen_deigen
List eigen_deigen(const Eigen::Map<Eigen::MatrixXd> A);
RcppExport SEXP gpuRbenchmark_eigen_deigen(SEXP ASEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd> >::type A(ASEXP);
    __result = Rcpp::wrap(eigen_deigen(A));
    return __result;
END_RCPP
}
// eigen_seigen
List eigen_seigen(const SEXP A_in);
RcppExport SEXP gpuRbenchmark_eigen_seigen(SEXP A_inSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const SEXP >::type A_in(A_inSEXP);
    __result = Rcpp::wrap(eigen_seigen(A_in));
    return __result;
END_RCPP
}