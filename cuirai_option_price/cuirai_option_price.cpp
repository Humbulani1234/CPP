// Standard headers files

#include <iostream>
#include <complex>

// Mathematical constants/macros

#define _USE_MATH_DEFINES

// Custom header files - Heston_trapezoidal_integration and Heston_Integration_Function

#include "C:\Users\user\Desktop\Sublime_text files\Heston_Numerical_Integration\Heston_trapezoidal_integration.cpp"
#include "C:\Users\user\Desktop\Sublime_text files\Heston_Integration\Heston_Integration_Function.cpp"

// Custom header files - Function signature

#include "C:\Users\user\Desktop\Sublime_text files\Cui_Rai_Option_price\Cui_Rai_Option_price.hpp"

// Function source/body code

double Cui_Rai_Heston_Option_Price(double A, double B, int N, double S0, double T, double r, double K, double V0\
	, double sigma, double kappa, double theta, double rho\
  , double (*f) (std::complex<double>, double, double, double, double, double, double, double, double, double))

    {
      double first_term = S0 * (1/2 + 1/M_PI * (Heston_trapezoidal_integration (A, B, N, S0, T, r, K , V0, sigma, kappa, theta, rho\
      , Heston_Integration_Function))); 
    
      double second_term = exp(-r*T) * K * (1/2+1/M_PI * (Heston_trapezoidal_integration (A, B, N, S0, T, r, K , V0, sigma, kappa, theta\
      	, rho, Heston_Integration_Function)));
    
    return (first_term - second_term);
    	
    }
