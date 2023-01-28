#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;

    int d1 = 0, d2 = 0, d3 = 0, d4 = 0, d5 = 0;
    for (int i = 0; i < n; i++) {
        int currentNumber;
        cin >> currentNumber;

        if (currentNumber < 200) d1++;
        else if (currentNumber < 400) d2++;
        else if (currentNumber < 600) d3++;
        else if (currentNumber < 800) d4++;
        else d5++;
    }

    cout << fixed << setprecision(2) << (double)d1 / n * 100 << "%" << endl;
    cout << fixed << setprecision(2) << (double)d2 / n * 100 << "%" << endl;
    cout << fixed << setprecision(2) << (double)d3 / n * 100 << "%" << endl;
    cout << fixed << setprecision(2) << (double)d4 / n * 100 << "%" << endl;
    cout << fixed << setprecision(2) << (double)d5 / n * 100 << "%" << endl;

    return 0;
}
