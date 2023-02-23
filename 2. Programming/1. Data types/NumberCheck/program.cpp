#include <iostream>
#include <string>

int main() {
    std::string input;
    std::getline(std::cin, input);

    if (input.find('.') == std::string::npos) std::cout << "integer" << std::endl;
    else std::cout << "floating-point" << std::endl;

    return 0;
}
