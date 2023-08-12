
#include <complex>
#include <array>
#include "heston_trap_integration.hpp"

double heston_trap_integration(double A, double B, int N, double S0, double T, double r, double K 
                               , double V0, double sigma, double kappa, double theta, double rho
                        , double (*f) (std::complex<double>, double, double, double, double, double, double, double, double, double)) { 

        // Integrate over interval [A, B] using Trapezoidal rule

    	double res = 0.0;
    	double h = (B - A)/ double (N); // comment on casting
        double Array[N+1];

    	for (int n = 0; n < N+1; n++) {

    	      if (n == 0 || n == N) { 
    	           Array[n] = 1; 
               }

    	      else {

    	      	   Array[n] = 2;
              }
    	}
        
        for (int n = 0; n < N+1; n++) {

              double u;
              for (u = A + (0.5 * h); u < B; u += h);
              res += Array[n] * ((*f) (u, S0, T, r, K , V0, sigma, kappa, theta, rho));
        }

        return res * h;
}