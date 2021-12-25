// Declaration of function signatures

#include <iostream>
#include <complex>

// Preprocessor directives

#ifndef Heston_Integration_Function_HPP
#define Heston_Integration_Function_HPP

// Function signature

double Heston_Integration_Func(std::complex<double> u, double S0, double T, double r, double K\
	, double V0, double sigma,double kappa, double theta, double rho);

#endif