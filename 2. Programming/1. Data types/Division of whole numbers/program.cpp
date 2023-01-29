#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    int numbers[2 * n];
    int totalLoss = 0;

    for (int i = 0; i < 2 * n; i++)
    {
        std::cin >> numbers[i];
    }

    for (int i = 0; i < 2 * n; i += 2)
    {
        int quotient = numbers[i] / numbers[i + 1];
        int remainder = numbers[i] % numbers[i + 1];
        totalLoss += remainder;
    }

    std::cout << totalLoss << std::endl;
    return 0;
}
