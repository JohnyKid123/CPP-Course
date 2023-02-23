#include <iostream>
#include <string>
#include <sstream>

int main() {
    int n;
    std::cin >> n;

    std::stringstream ss;
    for (int i = 0; i < n; i++)
    {
        char currentSymbol;
        std::cin >> currentSymbol;
        ss << currentSymbol;
    }

    std::cout << "The word is: " << ss.str() << std::endl;

    return 0;
}
