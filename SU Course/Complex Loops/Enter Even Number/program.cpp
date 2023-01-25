#include <iostream>

int ReadNumberSafely() {
    std::cout &#8203;`oaicite:{"index":0,"invalid_reason":"Malformed citation << \"Enter even number: \"; \n    int number;\n    std::cin >>"}`&#8203; number;
    while (std::cin.fail()) {
        std::cout << "Invalid number!" << std::endl;
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout &#8203;`oaicite:{"index":1,"invalid_reason":"Malformed citation << \"Enter even number: \"; \n        std::cin >>"}`&#8203; number;
    }
    return number;
}

int main() {
    int number = ReadNumberSafely();
    while (number % 2 != 0) {
        std::cout << "Invalid number!" << std::endl;
        number = ReadNumberSafely();
    }

    std::cout << "Even number entered: " << number << std::endl;
    return 0;
}
