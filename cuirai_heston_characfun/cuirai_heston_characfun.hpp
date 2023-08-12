
#include <complex>

#ifndef cuirai_heston_characfun_HPP
#define cuirai_heston_characfun_HPP

std::complex<double> cuirai_heston_characfun(std::complex<double> u, double S0, double T, double r, double K, double V0
                                                     , double sigma, double kappa, double theta, double rho); 

#endif