// Standard headers files

#include <iostream>
#include <complex>

// Directives for pre-processing

#ifndef Cui_Rai_Heston_Option_Price_HPP
#define Cui_Rai_Heston_Option_Price_HPP

// Function declaration or signature

double Cui_Rai_Heston_Option_Price (double A, double B, int N, double S0, double T, double r, double K, double V0\
, double sigma,double kappa, double theta, double rho\
, double (*f) (std::complex<double>, double, double, double, double, double, double, double, double, double));

#endif