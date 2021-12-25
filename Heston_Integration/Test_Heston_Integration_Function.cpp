#include <iostream>
#include <complex>
//#include "C:\Users\support\Desktop\Sublime_text files\Cui_Rai_Heston_Characteristic_Func\Cui_Rai_Heston_Characteristic_func.hpp"
//#include "C:\Users\support\Desktop\Sublime_text files\Cui_Rai_Heston_Characteristic_Func\Cui_Rai_Heston_Characteristic_func.cpp"

#include "C:\Users\support\Desktop\Sublime_text files\Heston_Integration\Heston_Integration_Function.hpp"
#include "C:\Users\support\Desktop\Sublime_text files\Heston_Integration\Heston_Integration_Function.cpp"

int main()

	  { double u = 1.0;
	  	double S0 = 100.0;
		double V0 = 0.05;
		double K = 50.0;
		double T = 1.0;
		double r = 0.01;
		double sigma = 0.5;
		double rho = -0.8;
		double kappa = 2.0;
		double theta = 0.05;

		double answer = Heston_Integration_Func(u,1.0,100.0,0.01,50.0,0.05,0.5,2.0,0.06,-0.8);

		std::cout << answer << std::endl;
	    
	    return 0;
	  }