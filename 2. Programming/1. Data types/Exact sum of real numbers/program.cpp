#include <iostream>
#include <string>

int main()
{
    int n;
    std::cin >> n;
    double sum = 0;
    for (int i = 0; i < n; i++)
    {
        double num;
        std::cin >> num;
        sum += num;
    }
    std::cout << sum << std::endl;
    return 0;
}
