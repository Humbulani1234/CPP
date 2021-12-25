#include <complex>
#include <iostream>

#ifndef Cui_Rai_Heston_Characteristic_func_HPP
#define Cui_Rai_Heston_Characteristic_func_HPP

// Function declaration

std::complex<double> Heston_Characteristic_Func(std::complex<double> u, double S0, double T, double r, double K, double V0\
	, double sigma,double kappa, double theta, double rho); 

#endif