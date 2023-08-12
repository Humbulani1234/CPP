// Standard header files

#include <iostream>
#include <chrono>
#include <vector>
#include <complex>
#include <random>
#include <algorithm>

// Custom header files - Monte_Carlo_Heston_Simulation_Euler_Millstein and Random_numbers_generator

#include "C:\Users\user\Desktop\Sublime_text files\Euler_Millstein_Monte_Carlo\Euler_Millstein_Monte_Carlo.cpp"
#include "C:\Users\user\Desktop\Sublime_text files\Normal_Random_num_gene\normal_random_numbers.cpp"

// Main Function

// double Monte_Carlo_Heston_Simulation_Euler_Millstein (double S0, double T, double r, int M, int I\
  , double K, double dt, double V0, double sigma, double kappa, double theta, double rho)

// std::vector<std::vector<double>> Random_normal_generator (int I, int M)

int main(void)

	 { 
	  double S0 = 100.0;
		double V0 = 0.05;
		double K = 50.0;
		double T = 1.0;
		double r = 0.01;
		double sigma = 0.5;
		double M = 50;
		double dt = T/M;
		double I = 5000;
		double rho = -0.8;
		double kappa = 2.0;
		double theta = 0.05;

		double answer = Monte_Carlo_Heston_Simulation_Euler_Millstein (S0, T, r, I, M, K, dt, V0\
			                                                                           , sigma, kappa, theta, rho);		                                                                         
		std::cout << answer;
		std::cout.flush();
	    
	  return 0;

	 }