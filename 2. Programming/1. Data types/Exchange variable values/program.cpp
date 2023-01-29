#include <iostream>

int main()
{
    int a, b;
    std::cin >> a >> b;
    std::cout << "Before:" << std::endl;
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    std::cout << "After:" << std::endl;
    std::cout << "a = " << b << std::endl;
    std::cout << "b = " << a << std::endl;
    return 0;
}
