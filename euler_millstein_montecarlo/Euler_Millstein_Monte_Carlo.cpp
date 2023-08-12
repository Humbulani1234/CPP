// Standard header files

#include <iostream>
#include <chrono>
#include <vector>
#include <complex>
#include <random>
#include <algorithm>

// Custom header files - Function declarations

#include "C:\Users\user\Desktop\Sublime_text files\Euler_Millstein_Monte_Carlo\Euler_Millstein_Monte_Carlo.hpp"
#include "C:\Users\user\Desktop\Sublime_text files\Normal_Random_num_gene\normal_random_numbers.hpp"

// Euler_Millstein_Monte_Carlo function source or body code

double Monte_Carlo_Heston_Simulation_Euler_Millstein (double S0, double T, double r, int I, int M\
  , double K, double dt, double V0, double sigma, double kappa, double theta, double rho)

    { 
       // Initialise matrices

       std::vector<std::vector<double>> volatility_matrix;
       std::vector<std::vector<double>> random_matrix;

       std::vector<std::vector<double>> volatility_evolution_matrix;
       std::vector<std::vector<double>> volatility_evolution_max_matrix;
       std::vector<std::vector<double>> volatility_of_vol_matrix;
       std::vector<std::vector<double>> correlated_matrix;
       std::vector<std::vector<double>> stock_price_evolution_matrix;

       // Initialise independent matrices and calculate the correlated matrix

       volatility_of_vol_matrix = Random_normal_generator(I, M);
       random_matrix = Random_normal_generator(I, M);

       for (int i = 0; i < I+1; i++)

               { std::vector<double> v1;

                 for (int t = 0; t < M+1 ; t++)

                 { 
                   double r = rho*volatility_of_vol_matrix[i][t] + sqrt(1.0 - pow(rho, 2.0))*random_matrix[i][t];
                   v1.push_back(r);
                 }

                 correlated_matrix.push_back(v1);
                 }

        // Evolution of volatility

        for (int i = 0; i < I+1; i++)

            { std::vector<double> v1;

              for (int t = 0; t < M+1 ; t++)

                 { 
                    if (t == 0)

                         { 
                          double r = 0;
                          v1.push_back(r);

                          volatility_evolution_matrix.push_back(v1);
                         }

                    else

                        { std::vector<double> v1;

                           double r = volatility_of_vol_matrix[i][t-1] + kappa * (theta\
                           - volatility_of_vol_matrix[i][t-1])*dt + sigma * sqrt(std::max(volatility_of_vol_matrix[i][t-1]*dt, 0.0))\
                           *volatility_of_vol_matrix[i][t] + 1/4 * (pow(sigma, 2.0)*dt)\
                            * (pow(volatility_of_vol_matrix[i][t], 2.0) - 1.0);

                           v1.push_back(r);

                           volatility_evolution_matrix.push_back(v1);
                         }
                 }
            }

        // Take maximum of volatility evolution

        for (int i = 0; i< I+1; i++)

            {
             std::vector<double> v1;

             for (int t = 0; t < M+1 ; t++)

                  { 

                    double r = std::max(volatility_evolution_matrix[i][t] - K, 0.0);
                    v1.push_back(r);
                  }

            volatility_evolution_max_matrix.push_back(v1);

            }

        // Evolution of stock price

        for (int i = 0; i < I+1; i++)

            { std::vector<double> v1;

              for (int t = 0; t < M+1 ; t++)

                 { 
                    if (t == 0)

                         { 
                          double r = S0;
                          v1.push_back(r);

                          stock_price_evolution_matrix.push_back(v1);

                         }

                    else

                        { std::vector<double> v1;

                           double r = stock_price_evolution_matrix[i][t-1]*exp((r - 0.5*volatility_evolution_max_matrix[i][t-1])\
                            *dt + sqrt(volatility_evolution_max_matrix[i][t]*dt) * correlated_matrix[i][t]);

                           v1.push_back(r);

                           stock_price_evolution_matrix.push_back(v1);
                        }
                    }
                }

        // Calculate the option price

        std::vector<double> v2;

        for (int i = 0; i< I+1; i++)

            { 

             double r = std::max(stock_price_evolution_matrix[i][M] - K, 0.0);
             v2.push_back(r);

            }

         double sum_of_elements = 0.0;

         //for (int n: v2)

         for (int i = 0; i< I+1; i++)

             { 
              sum_of_elements += v2[i];
             }

         //double ans = (exp(-r*T) * (sum_of_elements)/I);

         //for (int i = 0; i < I+1; i++)

          //{ 
            //for (int j = 0; j < M+1; j++)
     
                //std::cout << random_matrix[i][j] << " ";
              //std::cout << std::endl;
          //}

        return (exp(-r*T) * (sum_of_elements)/I);
        
    }