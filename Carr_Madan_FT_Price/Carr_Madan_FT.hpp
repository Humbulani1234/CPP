// Standard header files

#include <iostream>
#include <complex>

// Dedine MACROS for pre-processor

//#define _USE_MATH_DEFINES

// Declare directives for preprocessor


#ifndef Carr_Madan_FT_HPP
#define Carr_Madan_FT_HPP

// Function body/source code

double Carr_Madan_FT (double A, double B, int N, double S0, double T, double r, double K, double V0\
, double sigma, double kappa, double theta, double rho\
, double (*f) (std::complex<double>, double, double, double, double, double, double, double, double, double));

#endif
