#include <iostream>
using namespace std;

int main() {
    int n, m, s;
    cin >> n >> m >> s;

    bool shouldStop = false;
    for (int i = m; !shouldStop && i >= n; i--) {
        if (i % 6 == 0) {
            if (i == s) shouldStop = true;
            else cout << i << endl;
        }
    }
    return 0;
}
