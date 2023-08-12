
#include <complex>

#ifndef heston_integration_func_HPP
#define heston_integration_func_HPP

double heston_integration_func(std::complex<double> u, double S0, double T, double r, double K\
	, double V0, double sigma, double kappa, double theta, double rho);

#endif