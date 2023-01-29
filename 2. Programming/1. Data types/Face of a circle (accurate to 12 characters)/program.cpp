#include <iostream>
#include <cmath>

int main()
{
    double n;
    std::cin >> n;
    std::cout << std::fixed << std::setprecision(12) << (n * n * M_PI) << std::endl;
    return 0;
}
