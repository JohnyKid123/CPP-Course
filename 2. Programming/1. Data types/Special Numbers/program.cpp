#include <iostream>

int main()
{
int n;
std::cin >> n;
for (int num = 1; num <= n; num++)
{
    int sumOfDigits = 0;
    int digits = num;
    while (digits > 0)
    {
        sumOfDigits += digits % 10;
        digits = digits / 10;
    }
    bool special = (sumOfDigits == 5) || (sumOfDigits == 7) || (sumOfDigits == 11);
    std::cout << num << " -> " << (special ? "true" : "false") << std::endl;
}

return 0;
}
