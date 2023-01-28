#include <iostream>
using namespace std;

int main() {
    int hour, minutes;
    cin >> hour >> minutes;
    minutes += 15;
    hour += minutes / 60;
    minutes %= 60;
    if (hour == 24) {
        cout << "0:" << setfill('0') << setw(2) << minutes << endl;
    } else {
        cout << hour << ":" << setfill('0') << setw(2) << minutes << endl;
    }
    return 0;
}
