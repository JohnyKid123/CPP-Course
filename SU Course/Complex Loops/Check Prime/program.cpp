#include <iostream>
#include <cmath>

int main() {
    int number;
    std::cin >> number;
    double sqrt = sqrt(number);

    bool isPrime = number >= 2;
    for (int i = 2; i <= sqrt && isPrime; i++) {
        if (number % i == 0) isPrime = false;
    }

    if (isPrime) std::cout << "Prime" << std::endl;
    else std::cout << "Not prime" << std::endl;
    return 0;
}
