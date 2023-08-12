
#include <complex>
#include "cuirai_heston_characfun.hpp"

std::complex<double> cuirai_heston_characfun(std::complex<double> u, double S0, double T, double r, double K, double V0
                                             , double sigma, double kappa, double theta, double rho) { 
        
		  std::complex<double> mycomplex (0.0, 1.0);
		  std::complex<double> eta = kappa - sigma*rho*mycomplex*u;

		  std::complex<double> d_2 = sqrt(pow(eta, 2.0) + pow(sigma, 2.0)
		  	                         * (pow(u, 2.0) + mycomplex*u));

		  std::complex<double> g_1 = (eta + d_2)/(eta - d_2);
		  std::complex<double> A_1 = (pow(u, 2.0) + mycomplex*u)*sinh(d_2*T/2.0);
		  std::complex<double> A_2 = d_2*cosh(d_2*T/2.0) + eta*sinh(d_2*T/2.0);
		  std::complex<double> A = A_1/A_2;

		  std::complex<double> D_2 = log(d_2) + (kappa - d_2)*T/2.0
		                             - log((d_2 + eta)/2.0 + (d_2 - eta)/2.0 * exp(-d_2*T));

		  std::complex<double> ans = exp(mycomplex*u*(log(S0) + r*T) - T*kappa*theta*rho*mycomplex*u/sigma - V0*A + 2.0*kappa\
		  	                         * theta/pow(sigma,2.0)*D_2);

		  return ans;
}
		  