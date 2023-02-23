#include <iostream>
#include <string>

int main() {
    std::string type;
    std::cin >> type;

    if (type == "int") {
        std::cout << INT_MAX << std::endl;
        std::cout << INT_MIN << std::endl;
    }
    else if (type == "uint") {
        std::cout << UINT_MAX << std::endl;
        std::cout << UINT_MIN << std::endl;
    }
    else if (type == "long") {
        std::cout << LONG_MAX << std::endl;
        std::cout << LONG_MIN << std::endl;
    }
    else if (type == "byte") {
        std::cout << static_cast<int>(UCHAR_MAX) << std::endl;
        std::cout << static_cast<int>(UCHAR_MIN) << std::endl;
    }
    else if (type == "sbyte") {
        std::cout << static_cast<int>(SCHAR_MAX) << std::endl;
        std::cout << static_cast<int>(SCHAR_MIN) << std::endl;
    }

    return 0;
}
