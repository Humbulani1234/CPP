// Standard headers

#include <iostream>
#include <chrono>
#include <random>
#include <vector>
#include <array>
#include <typeinfo>

// Custom headers - Random_normal_generator function

#include "C:\Users\user\Desktop\Sublime_text files\Normal_Random_num_gene\normal_random_numbers.cpp"

// Main function

int main()

{ 
  int M = 5;
  int I = 5;

  std::vector<std::vector<double>> vector = Random_normal_generator(5,5);

  //for (int i = 0; i < M+1; i++)

          //{ 
            //for (int j = 0; j < I+1; j++)
     
                //std::cout << vector[i][j] << " ";
              //std::cout << std::endl;
          //}

  std::cout << vector << std::endl;

  return 0;
}