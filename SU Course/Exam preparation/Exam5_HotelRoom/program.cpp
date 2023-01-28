#include<iostream>
#include<string>
using namespace std;

int main() {
  string month;
  int nights;
  double apartmentPrice = 0, studioPrice = 0;
  cin >> month;
  cin >> nights;

  if (month == "May" || month == "October")
  {
    studioPrice = 50 * nights;
    apartmentPrice = 65 * nights;

    if (nights > 14) studioPrice *= 0.7;
    else if (nights > 7) studioPrice *= 0.95;
  }
  else if (month == "June" || month == "September")
  {
    studioPrice = 75.2 * nights;
    apartmentPrice = 68.7 * nights;

    if (nights > 14) studioPrice *= 0.8;
  }
  else if (month == "July" || month == "August")
  {
    studioPrice = 76 * nights;
    apartmentPrice = 77 * nights;
  }
  if (nights > 14) apartmentPrice *= 0.9;
  cout << "Apartment: " << apartmentPrice << " lv." << endl;
  cout << "Studio: " << studioPrice << " lv." << endl;

  return 0;
}
