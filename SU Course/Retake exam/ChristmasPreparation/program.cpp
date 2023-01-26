#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int paperRollsCount, fabricRollsCount;
    double glueLiters, discountPercents;
    cin >> paperRollsCount >> fabricRollsCount >> glueLiters >> discountPercents;

    double total = paperRollsCount * 5.8 + fabricRollsCount * 7.2 + glueLiters * 1.2;
    double totalWithDiscount = total * (1 - (0.01 * discountPercents));
    printf("%.3f", totalWithDiscount);
    return 0;
}
