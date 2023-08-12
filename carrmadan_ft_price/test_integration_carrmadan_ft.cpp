
#include <iostream>
#include <complex>
#include "carrmadan_ft_integration_func.hpp"

int main(int argc, char *argv[]) {

	  	std::complex<double> u = 1.0;
	  	double S0 = 100.0;
		double V0 = 0.05;
		double K = 50.0;
		double T = 1.0;
		double r = 0.01;
		double sigma = 0.5;
		double rho = -0.8;
		double kappa = 2.0;
		double theta = 0.05;
		double answer = carrmadan_ft_integration_func(1.0, 100.0, 0.01, 1.0, 50.0, 0.05, 0.5, 2.0, 0.06, -0.8);

		std::cout << answer << std::endl;
	    
	    return 0;
}