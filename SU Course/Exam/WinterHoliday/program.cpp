#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int nights;
    cin >> nights;
    string destination, roomType;
    cin >> destination >> roomType;

    double price = 0;
    if (destination == "Colorado") {
        if (roomType == "double room") price = 38;
        else if (roomType == "apartment") price = 45;
    }
    else if (destination == "Alps") {
        if (roomType == "double room") price = 35;
        else if (roomType == "apartment") price = 42;
    }
    else if (destination == "Andie") {
        if (roomType == "double room") price = 39;
        else if (roomType == "apartment") price = 49;
    }

    double total = price * nights;
    cout << "They have to spend " << fixed << total << " leva." << endl;
    return 0;
}
