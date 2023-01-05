#include <iostream>
#include <string>
using namespace std;

int main()
{
    string fruit, day;
    double quantity;
    cin >> fruit >> day >> quantity;
    cout.precision(2);
    if (day == "Monday" || day == "Tuesday" || day == "Wednesday" || day == "Thursday" || day == "Friday")
    {
        if (fruit == "banana")
            cout << quantity * 2.50;
        else if (fruit == "apple")
            cout << fixed << quantity * 1.20;
        else if (fruit == "orange")
            cout << fixed << quantity * 0.85;
        else if (fruit == "grapefruit")
            cout << fixed << quantity * 1.45;
        else if (fruit == "kiwi")
            cout << fixed << quantity * 2.70;
        else if (fruit == "pineapple")
            cout << fixed << quantity * 5.50;
        else if (fruit == "grapes")
            cout << fixed << quantity * 3.85;
        else
            cout << "error";
    }
    else if (day == "Saturday" || day == "Sunday")
    {
        if (fruit == "banana")
            cout << fixed << quantity * 2.70;
        else if (fruit == "apple")
            cout << fixed << quantity * 1.25;
        else if (fruit == "orange")
            cout << fixed << quantity * 0.90;
        else if (fruit == "grapefruit")
            cout << fixed << quantity * 1.60;
        else if (fruit == "kiwi")
            cout << fixed << quantity * 3.00;
        else if (fruit == "pineapple")
            cout << fixed << quantity * 5.60;
        else if (fruit == "grapes")
            cout << fixed << quantity * 4.20;
        else
            cout << "error";
    }
    else
        cout << "error";
    return 0;
}
