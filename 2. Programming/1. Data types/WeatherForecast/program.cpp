#include <iostream>

int main() {
    std::string input;
    std::cin >> input;

    if (std::stoi(input) <= INT8_MAX && std::stoi(input) >= INT8_MIN) {
        std::cout << "Sunny" << std::endl;
    } else if (std::stoi(input) <= INT32_MAX && std::stoi(input) >= INT32_MIN) {
        std::cout << "Cloudy" << std::endl;
    } else if (std::stol(input) <= INT64_MAX && std::stol(input) >= INT64_MIN) {
        std::cout << "Windy" << std::endl;
    } else {
        std::cout << "Rainy" << std::endl;
    }

    return 0;
}
