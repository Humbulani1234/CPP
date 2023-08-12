
#include <complex>
#include "cuirai_heston_characfun.hpp"
#include "carrmadan_ft_integration_func.hpp"

double carrmadan_ft_integration_func(std::complex<double> u, double S0, double T, double r, double K
	                                      , double V0, double sigma, double kappa, double theta, double rho) {

      std::complex<double> complex1 (0.0, -1.0);
      std::complex<double> complex2 (0.0, 1.0);

      if (S0 >= 0.95*K) {

        double alpha = 1.5;
        double modified_char = ((exp(complex1*u*log(K)))*(exp(-r*T)) * (cuirai_heston_characfun((u-(alpha+1.0)*complex2)
                                , S0, T, r, K, V0, sigma, kappa, theta, rho)) / ((1.5+complex2*u)*(1.5+1.0+complex2*u))).real();
        return modified_char;
}
       
      else {

        double alpha = 1.1;
        double component1 = ((1.0/(1.0+complex2*(u-complex2*alpha)) - exp(r*T)/(complex2*(u-complex2*alpha)) - 
                            (cuirai_heston_characfun((u-(alpha+1.0)*complex2), S0, T, r, K, V0, sigma, kappa, theta, rho))
                            / ((u-complex2*alpha)*((u-complex2*alpha)-complex2))) * exp(-r*T)*exp(complex1*u*log(K))).real();

        double component2 = ((1.0/(1.0+complex2*(u+complex2*alpha)) - exp(r*T)/(complex2*(u+complex2*alpha)) - 
                            (cuirai_heston_characfun((u+complex2*alpha-complex2), S0, T, r, K, V0, sigma, kappa, theta, rho)))
                          / ((u+complex2*alpha)*((u+complex2*alpha)-complex2)) * exp(-r*T)*exp(complex1*u*log(K))).real();

        double modified_char = (component1 - component2);
        return modified_char;
}
    
}  
