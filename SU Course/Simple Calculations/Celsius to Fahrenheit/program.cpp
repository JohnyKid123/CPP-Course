#include<iostream>
using namespace std;
 
int main()
{
    float fahrenheit, celsius;
 
    cin >> celsius;
    fahrenheit = (celsius * 9.0) / 5.0 + 32;
    cout << "The temperature in Fahrenheit : " << fahrenheit << endl;
    return 0;
}
