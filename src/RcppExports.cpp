// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// condense_count
NumericMatrix condense_count(const NumericVector& x, double origin, double binwidth, const NumericVector& z, const NumericVector& w);
RcppExport SEXP ggvis_condense_count(SEXP xSEXP, SEXP originSEXP, SEXP binwidthSEXP, SEXP zSEXP, SEXP wSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< const NumericVector& >::type x(xSEXP );
        Rcpp::traits::input_parameter< double >::type origin(originSEXP );
        Rcpp::traits::input_parameter< double >::type binwidth(binwidthSEXP );
        Rcpp::traits::input_parameter< const NumericVector& >::type z(zSEXP );
        Rcpp::traits::input_parameter< const NumericVector& >::type w(wSEXP );
        NumericMatrix __result = condense_count(x, origin, binwidth, z, w);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// condense_sum
NumericMatrix condense_sum(const NumericVector& x, double origin, double binwidth, const NumericVector& z, const NumericVector& w);
RcppExport SEXP ggvis_condense_sum(SEXP xSEXP, SEXP originSEXP, SEXP binwidthSEXP, SEXP zSEXP, SEXP wSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< const NumericVector& >::type x(xSEXP );
        Rcpp::traits::input_parameter< double >::type origin(originSEXP );
        Rcpp::traits::input_parameter< double >::type binwidth(binwidthSEXP );
        Rcpp::traits::input_parameter< const NumericVector& >::type z(zSEXP );
        Rcpp::traits::input_parameter< const NumericVector& >::type w(wSEXP );
        NumericMatrix __result = condense_sum(x, origin, binwidth, z, w);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// condense_moments
NumericMatrix condense_moments(const NumericVector& x, double origin, double binwidth, const NumericVector& z, const NumericVector& w, int moments);
RcppExport SEXP ggvis_condense_moments(SEXP xSEXP, SEXP originSEXP, SEXP binwidthSEXP, SEXP zSEXP, SEXP wSEXP, SEXP momentsSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< const NumericVector& >::type x(xSEXP );
        Rcpp::traits::input_parameter< double >::type origin(originSEXP );
        Rcpp::traits::input_parameter< double >::type binwidth(binwidthSEXP );
        Rcpp::traits::input_parameter< const NumericVector& >::type z(zSEXP );
        Rcpp::traits::input_parameter< const NumericVector& >::type w(wSEXP );
        Rcpp::traits::input_parameter< int >::type moments(momentsSEXP );
        NumericMatrix __result = condense_moments(x, origin, binwidth, z, w, moments);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// condense_median
NumericMatrix condense_median(const NumericVector& x, double origin, double binwidth, const NumericVector& z, const NumericVector& w);
RcppExport SEXP ggvis_condense_median(SEXP xSEXP, SEXP originSEXP, SEXP binwidthSEXP, SEXP zSEXP, SEXP wSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< const NumericVector& >::type x(xSEXP );
        Rcpp::traits::input_parameter< double >::type origin(originSEXP );
        Rcpp::traits::input_parameter< double >::type binwidth(binwidthSEXP );
        Rcpp::traits::input_parameter< const NumericVector& >::type z(zSEXP );
        Rcpp::traits::input_parameter< const NumericVector& >::type w(wSEXP );
        NumericMatrix __result = condense_median(x, origin, binwidth, z, w);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// frange
NumericVector frange(const NumericVector& x, const bool finite = true);
RcppExport SEXP ggvis_frange(SEXP xSEXP, SEXP finiteSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< const NumericVector& >::type x(xSEXP );
        Rcpp::traits::input_parameter< const bool >::type finite(finiteSEXP );
        NumericVector __result = frange(x, finite);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// smooth_linear
NumericVector smooth_linear(const NumericVector& x_in, const NumericVector& z_in, const NumericVector& w_in, const NumericVector& x_out, const double h);
RcppExport SEXP ggvis_smooth_linear(SEXP x_inSEXP, SEXP z_inSEXP, SEXP w_inSEXP, SEXP x_outSEXP, SEXP hSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< const NumericVector& >::type x_in(x_inSEXP );
        Rcpp::traits::input_parameter< const NumericVector& >::type z_in(z_inSEXP );
        Rcpp::traits::input_parameter< const NumericVector& >::type w_in(w_inSEXP );
        Rcpp::traits::input_parameter< const NumericVector& >::type x_out(x_outSEXP );
        Rcpp::traits::input_parameter< const double >::type h(hSEXP );
        NumericVector __result = smooth_linear(x_in, z_in, w_in, x_out, h);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// smooth_robust
NumericVector smooth_robust(const NumericVector& x_in, const NumericVector& z_in, const NumericVector& w_in, const NumericVector& x_out, const double h, int iterations = 3);
RcppExport SEXP ggvis_smooth_robust(SEXP x_inSEXP, SEXP z_inSEXP, SEXP w_inSEXP, SEXP x_outSEXP, SEXP hSEXP, SEXP iterationsSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< const NumericVector& >::type x_in(x_inSEXP );
        Rcpp::traits::input_parameter< const NumericVector& >::type z_in(z_inSEXP );
        Rcpp::traits::input_parameter< const NumericVector& >::type w_in(w_inSEXP );
        Rcpp::traits::input_parameter< const NumericVector& >::type x_out(x_outSEXP );
        Rcpp::traits::input_parameter< const double >::type h(hSEXP );
        Rcpp::traits::input_parameter< int >::type iterations(iterationsSEXP );
        NumericVector __result = smooth_robust(x_in, z_in, w_in, x_out, h, iterations);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
