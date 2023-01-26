#include <iostream>
using namespace std;

int main() {
int rent;
cin >> rent;
int catering = rent * 2;
double drinks = 0.85 * catering;
double gifts = (catering + drinks) / 7;

Copy code
double total = rent + catering + drinks + gifts;
cout << total << endl;
return 0;
