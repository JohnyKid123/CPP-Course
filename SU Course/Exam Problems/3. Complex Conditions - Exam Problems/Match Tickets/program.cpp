#include <iostream>
#include <string>
using namespace std;

int main() {
    double budget;
    cin >> budget;
    string category;
    cin >> category;
    int fansCount;
    cin >> fansCount;

    double transportPercents = 0;
    if (fansCount <= 4) transportPercents = 0.75;
    else if (fansCount <= 9) transportPercents = 0.6;
    else if (fansCount <= 24) transportPercents = 0.5;
    else if (fansCount <= 49) transportPercents = 0.4;
    else transportPercents = 0.25;

    double ticketPrice = 0;
    if (category == "VIP") ticketPrice = 499.99;
    else if (category == "Normal") ticketPrice = 249.99;

    double total = budget * transportPercents + fansCount * ticketPrice;
    if (total > budget)
        cout << "Not enough money! You need " << total - budget << " leva." << endl;
    else cout << "Yes! You have " << budget - total << " leva left." << endl;
    return 0;
}
