// Standard header files

#include <iostream>
#include <complex>

// Custom header files - Heston_Integration_Function

#include "Heston_Integration_Function.hpp"
#include "Cui_Rai_Heston_Characteristic_func.hpp"

// Main function

// double Heston_Integration_Function(std::complex<double> u, double S0, double T, double r, double K\
//	, double V0, double sigma, double kappa, double theta, double rho)

int main()

	  { std::complex<double> u = 1.0;
	  	double S0 = 100.0;
		double V0 = 0.05;
		double K = 50.0;
		double T = 1.0;
		double r = 0.01;
		double sigma = 0.5;
		double rho = -0.8;
		double kappa = 2.0;
		double theta = 0.05;

		double answer = Heston_Integration_Function(1.0, 100.0, 1.0, 0.01, 50.0, 0.05, 0.5, 2.0, 0.06, -0.8);

		std::cout << answer << std::endl;
	    
	    return 0;
	  }
