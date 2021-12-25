#include <iostream>
#include <complex>
//#include "C:\Users\support\Desktop\Sublime_text files\Cui_Rai_Heston_Characteristic_Func\Cui_Rai_Heston_Characteristic_func.hpp"
//#include "C:\Users\support\Desktop\Sublime_text files\Cui_Rai_Heston_Characteristic_Func\Cui_Rai_Heston_Characteristic_func.cpp"

#include "C:\Users\support\Desktop\Sublime_text files\Heston_Integration\Heston_Integration_Function.cpp"
//#include "C:\Users\support\Desktop\Sublime_text files\Heston_Integration\Heston_Integration_Function.hpp"

#include "C:\Users\support\Desktop\Sublime_text files\Heston_Numerical_Integration\Heston_trapezoidal_itegration.cpp"

int main()

	  { //double u = 1.0;
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

		double answer = Heston_trapezoidal_integration(0.001,100,200,100.0,1.0,0.01,50.0,0.05,0.5,2.0,0.06,-0.8\
			                                          , Heston_Integration_Func);

		std::cout << answer << std::endl;
	    
	    return 0;
	  }