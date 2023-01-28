#include <iostream>
using namespace std;

int main()
{
    double heritage;
    cin >> heritage;
    int year;
    cin >> year;

    double requiredMoney = 0;
    for (int i = 1800; i <= year; i++)
    {
        requiredMoney += 12000;
        if (i % 2 != 0) requiredMoney += 50 * (18 + i - 1800);
    }

    if (requiredMoney > heritage) cout << "He will need " << requiredMoney - heritage << " dollars to survive." << endl;
    else cout << "Yes! He will live a carefree life and will have " << heritage - requiredMoney << " dollars left." << endl;
    return 0;
}
