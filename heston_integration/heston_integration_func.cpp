// Standard header files

#include <iostream>
#include <complex>

// Custom header files - Characteristic function file

//#include "Heston_Integration_Function.hpp"
//#include "C:\Users\support\Desktop\Sublime_text files\Cui_Rai_Heston_Characteristic_Func\Cui_Rai_Heston_Characteristic_func.hpp"
#include "Cui_Rai_Heston_Characteristic_func.hpp"

// Custome header file - Function declaration/signature folder inclusion

#include "Heston_Integration_Function.hpp"

// Function body/source code

double Heston_Integration_Function (std::complex<double> u, double S0, double T, double r, double K\
	, double V0, double sigma, double kappa, double theta, double rho)

    {  
    	std::complex<double> complex1 (0.0, -1.0);
      std::complex<double> complex2 (0.0, 1.0);
      //std::complex<double> u1 = std::complex<double> (u);

       double first_integrand = (((exp(complex1*u*log(K)))/complex2*u) * (Heston_Characteristic_Function((u - complex2), S0, T, r, K\
                            , V0, sigma, kappa, theta, rho))).real();

       double second_integrand = (((exp(complex1*u*log(K)))/complex2*u) * (Heston_Characteristic_Function(u, S0, T, r, K\
                       , V0, sigma, kappa, theta, rho))).real();

       double Total_integrand = (first_integrand - K*second_integrand);
    
       return Total_integrand;
    }
