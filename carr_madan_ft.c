
#include <complex.h>
#include "header.h"
#include <math.h>

double carr_madan_ft(parameters *ptr, double complex (*e)(parameters *), double (*g)(parameters *, double (*)(parameters *))) {

      double complex complex1 = 0.0 + -1.0*I;
      double complex complex2 = 0.0 + 1.0*I;

      if (ptr->S0 >= 0.95*ptr->K) {

        double alpha = 1.5;
        double integration = (*g)(ptr, e);
        return (exp(-alpha*log(ptr->K))/PI*integration);
      }
       
      else {

        double alpha = 1.1;        
        double integration = (*g)(ptr, e);
        return ((1.0/PI*sinh(alpha*log(ptr->K))) * integration);
      }    
}
