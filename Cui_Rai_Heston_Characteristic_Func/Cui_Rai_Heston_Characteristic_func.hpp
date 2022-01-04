// Standard header files

#include <complex>
#include <iostream>

// Pre-processor directives

#ifndef Heston_Characteristic_Function_HPP
#define Heston_Characteristic_Function_HPP

// Function declaration/signature

std::complex<double> Heston_Characteristic_Function (std::complex<double> u, double S0, double T, double r, double K, double V0\
, double sigma, double kappa, double theta, double rho); 

#endif