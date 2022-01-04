// Standard header files

#include <iostream>
#include <complex>

// Custom headers - Heston_Characteristic_Function

#include "C:\Users\user\Desktop\Sublime_text files\Cui_Rai_Heston_Characteristic_Func\Cui_Rai_Heston_Characteristic_func.cpp"

// Custom header - Function declaration/signature

#include "C:\Users\user\Desktop\Sublime_text files\Carr_Madan_FT_Price\Integration_Carr_Madan_FT.hpp"

// Function body source code

double Carr_Madan_FT_Integration_Function(std::complex<double> u, double S0, double T, double r, double K\
	, double V0, double sigma, double kappa, double theta, double rho)

    {  
    	std::complex<double> complex1 (0.0, -1.0);
      std::complex<double> complex2 (0.0, 1.0);
      //std::complex<double> u1 = std::complex<double> (u);

      if (S0 >= 0.95*K)

      { 
        double alpha = 1.5;

        double modified_char = ((exp(complex1*u*log(K)))*(exp(-r*T)) * (Heston_Characteristic_Function((u-(alpha+1.0)*complex2)\
          , S0, T, r, K, V0, sigma, kappa, theta, rho)) / ((1.5+complex2*u)*(1.5+1.0+complex2*u))).real();

        return modified_char;

      }
       
      else

      { 
        double alpha = 1.1;

        double component1 = ((1.0/(1.0+complex2*(u-complex2*alpha)) - exp(r*T)/(complex2*(u-complex2*alpha))\
         - (Heston_Characteristic_Function((u-(alpha+1.0)*complex2), S0, T, r, K, V0, sigma, kappa, theta, rho))\
          / ((u-complex2*alpha)*((u-complex2*alpha)-complex2))) * exp(-r*T)*exp(complex1*u*log(K))).real();

        double component2 = ((1.0/(1.0+complex2*(u+complex2*alpha)) - exp(r*T)/(complex2*(u+complex2*alpha))\
         - (Heston_Characteristic_Function((u+complex2*alpha-complex2), S0, T, r, K, V0, sigma, kappa, theta, rho)))\
                          / ((u+complex2*alpha)*((u+complex2*alpha)-complex2)) * exp(-r*T)*exp(complex1*u*log(K))).real();

        double modified_char = (component1 - component2);

        return modified_char;

      }

    //return modified_char;
    
    }  
