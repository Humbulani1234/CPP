// Standard headers

#include <iostream>
#include <complex>

// Custom header file - Carr_Madan_FT function

#include "C:\Users\user\Desktop\Sublime_text files\Carr_Madan_FT_Price\Carr_Madan_FT.cpp"

// Main Function

// double Carr_Madan_FT(double u, double S0, double T, double r, double K, double V0\
   , double sigma,double kappa, double theta, double rho\
   , double (*f) (double, double, double, double, double, double, double, double, double, double))

// double Heston_trapezoidal_integration(double A, double B, int N\
  , double S0, double T, double r, double K , double V0, double sigma, double kappa, double theta, double rho\
  , double (*f) (double, double, double, double, double, double, double, double, double, double)) 

// double Carr_Madan_FT_Integration_Function(double u, double S0, double T, double r, double K\
   , double V0, double sigma, double kappa, double theta, double rho);

int main()

	  {
	  	//std::complex<double> u = 1.0;
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

		double answer = Carr_Madan_FT (A, B, N, S0, T, r, K, V0, sigma, kappa, theta, rho\
			                                                               , Carr_Madan_FT_Integration_Function);

		std::cout << answer << std::endl;
	    
	   return 0;
	  }
