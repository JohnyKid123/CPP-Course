#include <iostream>
#include <string>

int main() {
    std::string input1, input2;
    std::getline(std::cin, input1);
    std::getline(std::cin, input2);

    int intPrice;
    signed char sbytePrice;
    if (std::istringstream(input1) >> sbytePrice) {
        intPrice = std::stoi(input2);
    } else {
        sbytePrice = std::stoi(input2);
        intPrice = std::stoi(input1);
    }

    long long total = 10LL * intPrice + 4 * sbytePrice;
    std::cout << total << std::endl;

    return 0;
}
