#include <iostream>
using namespace std;

int main() {
    int a, b;
    char mathOperator;
    cin >> a >> b >> mathOperator;
    if ((mathOperator == '/' || mathOperator == '%') && b == 0)
    {
        cout << "Cannot divide " << a << " by zero" << endl;
    }
    else
    {
        cout << a << " " << mathOperator << " " << b << " = ";
        if (mathOperator == '/') cout << (double)a / b << endl;
        else if (mathOperator == '%') cout << a % b << endl;
        else
        {
            int result = 0;
            if (mathOperator == '+') result = a + b;
            else if (mathOperator == '-') result = a - b;
            else if (mathOperator == '*') result = a * b;
            cout << result;
            if (result % 2 == 0) cout << " - even" << endl;
            else cout << " - odd" << endl;
        }
    }
    return 0;
}
