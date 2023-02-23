#include <iostream>

int main() {
    int n;
    std::cin >> n;

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        char currentSymbol;
        std::cin >> currentSymbol;
        sum += currentSymbol;
    }

    std::cout << "The sum equals: " << sum << std::endl;

    return 0;
}
