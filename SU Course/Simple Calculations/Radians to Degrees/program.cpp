#include <iostream>
#include <cmath>

int main() {
  std::cout << "Enter a value in radians: ";
  double radians;
  std::cin >> radians;
  double degrees = radians * 180 / M_PI;
  std::cout << degrees << " degrees." << std::endl;
  return 0;
}

