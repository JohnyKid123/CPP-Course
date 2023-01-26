#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    int count = 0;
    for (int i1 = max(0, n - 9); i1 <= min(9, n); i1++) {
        for (int i3 = 0; i3 <= 8; i3 += 2) {
            for (int i4 = 0; i4 <= 9; i4 += 9) {
                for (int i5 = 3; i5 <= 6; i5 += 3) {
                    cout << i1 << n - i1 << i3 << i4 << i5 << " ";
                    count++;
                }
            }
        }
    }

    cout << "Count of winner numbers: " << count << endl;
    return 0;
}
