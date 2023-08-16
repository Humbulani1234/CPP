
#include <chrono>
#include <random>
#include <vector>
#include <typeinfo>
#include "normal_random_numbers.hpp"

std::vector<std::vector<double>> Random_normal_generator (int I, int M) {

    /* Nomal random number generator function*/ 
      
      unsigned seed = std::chrono::system_clock::now().
      time_since_epoch().count();
      std::default_random_engine generator (seed);
      std::normal_distribution<double> distribution (0.0, 1.0);
      std::vector<std::vector<double>> vec;

      for (int i = 0; i < M+1; i++) { 

        std::vector<double> v1;

            for (int j = 0; j < I+1 ; j++) {

                  double r = distribution(generator);
                  v1.push_back(r);
            }

            vec.push_back(v1);
      }

      return vec;
}
