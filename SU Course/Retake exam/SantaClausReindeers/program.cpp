#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int days;
    int food;
    double reindeerOne, reindeerTwo, reindeerThree;

    cin >> days >> food >> reindeerOne >> reindeerTwo >> reindeerThree;

    double total = reindeerOne * days + reindeerTwo * days + reindeerThree * days;
    if (total > food)
        cout << ceil(total - food) << " more kilos of food are needed." << endl;
    else
        cout << floor(food - total) << " kilos of food left." << endl;

    return 0;
}
