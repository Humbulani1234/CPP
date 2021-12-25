#include <iostream>
#include <complex>
#include "C:\Users\support\Desktop\Sublime_text files\Cui_Rai_Heston_Characteristic_Func\Cui_Rai_Heston_Characteristic_func.hpp"
#include "C:\Users\support\Desktop\Sublime_text files\Cui_Rai_Heston_Characteristic_Func\Cui_Rai_Heston_Characteristic_func.cpp"

int main()

	  { double S0 = 100.0;
		double V0 = 0.05;
		double K = 50.0;
		double T = 1.0;
		double r = 0.01;
		double sigma = 0.5;
		double M = 50.0;
		double dt = T/M;
		double I = 5000.0;
		double rho = -0.8;
		double kappa = 2.0;
		double theta = 0.05;

		std::complex<double> answer = Heston_Characteristic_Func(1.0,100.0,1.0,0.01,50.0,0.05,0.5,0.9,0.06,-0.8);

		std::cout << answer << std::endl;
	    
	    return 0;
	 }