#include <iostream>
#include <limits>
using namespace std;

int main() {
    double n;
    cin >> n;
    double evenSum = 0.0, oddSum = 0.0;
    double evenMin = numeric_limits<double>::max(), oddMin = numeric_limits<double>::max();
    double evenMax = numeric_limits<double>::min(), oddMax = numeric_limits<double>::min();
    for (double i = 1; i <= n; i++) {
        double num;
        cin >> num;
        if (i % 2 == 0) {
            evenSum += num;
            if (num > evenMax) evenMax = num;
            if (num < evenMin) evenMin = num;
        } else {
            oddSum += num;
            if (num > oddMax) oddMax = num;
            if (num < oddMin) oddMin = num;
        }
    }
    if (n == 0) {
        cout << "OddSum=0,\nOddMin=No,\nOddMax=No\nEvenSum=0,\nEvenMin=No,\nEvenMax=No" << endl;
    } else if (n == 1) {
        cout << "OddSum=" << oddSum << ",\nOddMin=" << oddMin << ",\nOddMax=" << oddMax << endl
             << "EvenSum=0,\nEvenMin=no,\nEvenMax=no" << endl;
    } else {
        cout << "OddSum=" << oddSum << ",\nOddMin=" << oddMin << ",\nOddMax=" << oddMax << endl;
        cout << "EvenSum=" << evenSum << ",\nEvenMin=" << evenMin << ",\nEvenMax=" << evenMax << endl;
    }
    return 0;
}
