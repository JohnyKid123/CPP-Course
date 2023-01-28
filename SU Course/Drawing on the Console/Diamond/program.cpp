#include <iostream>
using namespace std;

namespace Diamond {
    void Main() {
        int n;
        cin >> n;

        int rowsCount, innerDashes;
        if (n % 2 == 0) {
            rowsCount = n - 1;
            innerDashes = 0;
        } else {
            rowsCount = n;
            innerDashes = -1;
        }

        int outerDashes = rowsCount / 2;

        for (int i = 0; i < rowsCount; i++) {
            for (int j = 0; j < outerDashes; j++) cout << '-';

            cout << '*';
            for (int j = 0; j < innerDashes; j++) cout << '-';
            if (innerDashes >= 0) cout << '*';

            for (int j = 0; j < outerDashes; j++) cout << '-';

            cout << endl;

            if (i < rowsCount / 2) {
                outerDashes--;
                innerDashes += 2;
            } else {
                outerDashes++;
                innerDashes -= 2;
            }
        }
    }
}

int main() {
    Diamond::Main();
    return 0;
}
