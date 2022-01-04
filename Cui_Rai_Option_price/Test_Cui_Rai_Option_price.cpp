// Standard header files

#include <iostream>
#include <complex>

// Custom header files - Cui_Rai_Option_price function

//#include "C:\Users\support\Desktop\Sublime_text files\Heston_Integration\Heston_Integration_Function.cpp"
#include "C:\Users\user\Desktop\Sublime_text files\Cui_Rai_Option_price\Cui_Rai_Option_price.cpp"

// Main function

// double Cui_Rai_Heston_Option_Price(double A, double B, int N, double S0, double T, double r, double K, double V0\
   , double sigma, double kappa, double theta, double rho\
   , double (*f) (std::complex<double>, double, double, double, double, double, double, double, double, double))

int main()

	  { //double u = 1.0;
	  	double A = 0.001;
	  	double B = 100;
	  	int N = 200;
	  	double S0 = 100.0;
		double V0 = 0.5;
		double K = 95.0;
		double T = 1.0;
		double r = 0.1;
		double sigma = 0.5;
		double rho = -0.8;
		double kappa = 2.0;
		double theta = 0.7;

		double answer = Cui_Rai_Heston_Option_Price (A, B, N, S0, T, r, K, V0, sigma, kappa, theta, rho, Heston_Integration_Function);

		std::cout << answer << std::endl;
	    
	    return 0;
	  }