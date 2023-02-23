#include <iostream>

int main() {
    int a, b;
    std::cin >> a >> b;

    std::cout << "Before:" << std::endl;
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;

    int temp = a;
    a = b;
    b = temp;

    std::cout << "After:" << std::endl;
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;

    return 0;
}
