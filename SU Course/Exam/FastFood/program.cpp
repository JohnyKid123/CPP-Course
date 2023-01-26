#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    double pattyPrice, softiePrice, bunPrice, pretzelPrice;
    int pattiesCount, softiesCount, bunsCount, pretzelsCount;
    double budget, total;

    cin >> pattyPrice;
    softiePrice = 1.2 * pattyPrice;
    bunPrice = 0.6 * softiePrice;
    pretzelPrice = 1.2 + bunPrice;

    cin >> pattiesCount >> softiesCount >> bunsCount >> pretzelsCount;

    cin >> budget;
    total = pattyPrice * pattiesCount + softiePrice * softiesCount + bunPrice * bunsCount + pretzelPrice * pretzelsCount;

    if (budget < total) cout << "No! " << fixed << budget - total << " leva needed." << endl;
    else cout << "Yes! " << fixed << total - budget << " leva left." << endl;

    return 0;
}
