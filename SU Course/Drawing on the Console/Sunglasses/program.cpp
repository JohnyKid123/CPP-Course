#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < 2 * n; i++) cout << "*";
    for (int i = 0; i < n; i++) cout << " ";
    for (int i = 0; i < 2 * n; i++) cout << "*";

    cout << endl;

    for (int i = 0; i < n - 2; i++) {
        if (i + 1 == (n - 1) / 2) {
            cout << "*";
            for (int j = 0; j < n * 2 - 2; j++) cout << "/";
            cout << "*";
            for (int j = 0; j < n; j++) cout << "|";
        } else {
            cout << "*";
            for (int j = 0; j < n * 2 - 2; j++) cout << "/";
            cout << "*";
            for (int j = 0; j < n; j++) cout << " ";
        }
        cout << "*";
        for (int j = 0; j < n * 2 - 2; j++) cout << "/";
        cout << "*";
        cout << endl;
    }

    for (int i = 0; i < 2 * n; i++) cout << "*";
    for (int i = 0; i < n; i++) cout << " ";
    for (int i = 0; i < 2 * n; i++) cout << "*";

    return 0;
}
