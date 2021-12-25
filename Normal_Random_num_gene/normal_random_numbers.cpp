#include <iostream>
#include <chrono>
#include <random>
#include <vector>
#include <array>
#include <typeinfo>

std::vector<std::vector<double>> Random_normal_generator (int I, int M)

    /* Nomal random number generator function*/
    
    { 
      
      unsigned seed = std::chrono::system_clock::now().
      time_since_epoch().count();

      std::default_random_engine generator (seed);
      std::normal_distribution<double> distribution (0.0, 1.0);

      std::vector<std::vector<double>> vec;

      for (int i = 0; i < M+1; i++)

          { std::vector<double> v1;

            for (int j = 0; j < I+1 ; j++)

                { 
                  double r = distribution(generator);
                  v1.push_back(r);
                }

            vec.push_back(v1);
          }

      //for (int i = 0; i < I+1; i++)

          //{ 
            //for (int j = 0; j < M+1; j++)
     
                //std::cout << vec[i][j] << " ";
              //std::cout << std::endl;
          //}

      return vec;
    }

int main()

{ 
  int M = 5;
  int I = 5;

  std::vector<std::vector<double>> vector = Random_normal_generator(5,5);

  for (int i = 0; i < M+1; i++)

          { 
            for (int j = 0; j < I+1; j++)
     
                std::cout << vector[i][j] << " ";
              std::cout << std::endl;
          }

  return 0;
}