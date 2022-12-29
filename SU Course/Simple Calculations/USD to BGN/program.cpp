#include <iostream>
#include <cmath>

int main() {
  
  double usd;
  std::cin >> usd;
  double exchange_rate = 1.79549;
  double bgn = usd * exchange_rate;
  bgn = round(bgn * 100) / 100;
  std::cout  << bgn << " BGN." << std::endl;
  return 0;
}
