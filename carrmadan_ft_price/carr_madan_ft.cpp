

#include <complex>
#include "carr_madan_ft.hpp"

#define _USE_MATH_DEFINES

double carrmadan_ft (double A, double B, int N, double S0, double T, double r, double K, double V0
                      , double sigma, double kappa, double theta, double rho
                     , double (*f) (std::complex<double>, double, double, double, double, double, double, double, double, double)) {
      
      std::complex<double> complex1 (0.0, -1.0);
      std::complex<double> complex2 (0.0, 1.0);

      if (S0 >= 0.95*K) {

        double alpha = 1.5;
        double integration = Heston_trapezoidal_integration (A, B, N, S0, T, r, K , V0, sigma, kappa, theta, rho
        	                                                 , carrmadan_ft_integration_function);
        return (exp(-alpha*log(K))/M_PI*integration);
      }
       
      else {

        double alpha = 1.1;        
        double integration = Heston_trapezoidal_integration (A, B, N, S0, T, r, K , V0, sigma, kappa, theta, rho\
        	                                                 , Carr_Madan_FT_Integration_Function);
        return ((1.0/M_PI*sinh(alpha*log(K))) * integration);
      }    
    }  