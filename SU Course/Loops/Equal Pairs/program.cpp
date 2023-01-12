#include <iostream>
using namespace std;

int main ()
{
            int n;
            cin>>n;
            int evenSum = 0;
            int oddSum = 0;
            int diff = 0;
            bool areTheSumsEqual = true;

            for (int p = 1; p <= n; p++)
            {
                int currentNumberOne,currentNumberTwo;
                cin>>currentNumberOne>>currentNumberTwo;

                if (p % 2 == 0)
                {
                    evenSum = currentNumberOne + currentNumberTwo;
                }
                else
                {
                    oddSum = currentNumberTwo + currentNumberOne;
                }

                if (p > 1 && abs(evenSum - oddSum) > diff)
                {
                    diff = abs(evenSum - oddSum);
                    areTheSumsEqual = false;
                }
            }

            if (areTheSumsEqual == true)
            {
                cout<<"Yes, value="<<oddSum<<" ";
            }
            else
            {
                cout<<"No, maxdiff="<<diff<<" ";
            }
  return 0;
}
