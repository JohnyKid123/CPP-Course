#include <iostream>
using namespace std;

int main()
{
            int number;
            cin>>number;
            int firstDigit = (number / 100) % 10, secondDigit = (number / 10) % 10, thirdDigit = number % 10;
            int rows = firstDigit + secondDigit, columns = firstDigit + thirdDigit;
            int total = rows * columns, index = 0;

            while (index < total)
            {
                if (number % 5 == 0) number -= firstDigit;
                else if (number % 3 == 0) number -= secondDigit;
                else number += thirdDigit;

                cout<<number<<" "; 
                if ((index + 1) % columns == 0) cout<<" ";
                index++;
            }
    return 0;
}
