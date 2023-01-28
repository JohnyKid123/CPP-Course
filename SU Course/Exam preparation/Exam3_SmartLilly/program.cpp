#include <iostream>
#include <cmath>

using namespace std;

int main() 
{
int age;
double machinePrice;
int toyPrice;

Copy code
cin >> age >> machinePrice >> toyPrice;

int savedMoney = 0;
for (int i = 1; i <= age; i++)
{
    if (i % 2 == 0) savedMoney += (i / 2) * 10 - 1;
    else savedMoney += toyPrice;
}

double diff = abs(savedMoney - machinePrice);
if (savedMoney >= machinePrice) cout << "Yes! " << diff << endl;
else cout << "No! " << diff << endl;
  }
return 0;
