// Standard headers files

#include <iostream>
#include <chrono>
#include <vector>
#include <complex>
#include <random>
#include <algorithm>

// Euler_Millstein_Monte_Carlo.hpp

#ifndef Monte_Carlo_Heston_Simulation_Euler_Milltein_HPP
#define Monte_Carlo_Heston_Simulation_Euler_Millstein_HPP

// Function signature/declaration

double Monte_Carlo_Heston_Simulation_Euler_Millstein (double S0, double T, double r, int I, int M\
	, double K, double dt, double V0, double sigma, double kappa, double theta, double rho); 

#endif