
#include <iostream>
#include <complex>

#ifndef cuirai_option_price_HPP
#define cuirai_option_price_HPP

double cuirai_option_price (double A, double B, int N, double S0, double T, double r, double K, double V0
                            , double sigma,double kappa, double theta, double rho
                            , double (*f) (std::complex<double>, double, double, double, double, double, double, double, double, double));

#endif