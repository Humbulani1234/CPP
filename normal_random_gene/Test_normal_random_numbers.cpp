
#include <iostream>
#include <chrono>
#include <random>
#include <vector>
#include "normal_random_numbers.hpp"

int main() {

  int M = 5;
  int I = 5;
  std::vector<std::vector<double>> vector = random_normal_generator(5,5);
  std::cout << vector << std::endl;

  return 0;
}