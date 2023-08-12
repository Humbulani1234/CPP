
#include <complex>

#ifndef carr_madan_ft_HPP
#define carr_madan_ft_HPP

double carr_madan_ft (double A, double B, int N, double S0, double T, double r, double K, double V0
                      , double sigma, double kappa, double theta, double rho
                      , double (*f) (std::complex<double>, double, double, double, double, double, double, double, double, double));

#endif
