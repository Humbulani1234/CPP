
#include <iostream>
#include <complex>
#include "carrmadan_ft_integration_func.hpp"
#include "heston_trape_integration.hpp"

int main() {

	    double A = 0.001;
	  	double B = 10;
	  	int N = 200;
	  	double S0 = 100.0;
		double V0 = 0.05;
		double K = 50.0;
		double T = 1.0;
		double r = 0.01;
		double sigma = 0.5;
		double rho = -0.8;
		double kappa = 2.0;
		double theta = 0.05;

		double answer = heston_trape_integration(0.001,100,200,100.0,1.0,0.01,50.0,0.05,0.5,2.0,0.06,-0.8
			                                      , carrmadan_ft_integration_func);

		std::cout << answer << std::endl;
	    
	    return 0; 
}
