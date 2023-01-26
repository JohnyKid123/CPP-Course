#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a = (n / 100) % 10, b = (n / 10) % 10, c = n % 10;

    for (int i1 = 1; i1 <= c; i1++)
        for (int i2 = 1; i2 <= b; i2++)
            for (int i3 = 1; i3 <= a; i3++)
                cout << i1 << " * " << i2 << " * " << i3 << " = " << i1 * i2 * i3 << ";" << endl;
    return 0;
}
