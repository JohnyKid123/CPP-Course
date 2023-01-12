#include <iostream>
using namespace std;

int
main ()
{
  int n;
  cin >> n;
  int sumLeft = 0;
  int sumRight = 0;

  for (int i = 0; i < n; i++)
    {
      int currentNumber;
      cin>>currentNumber;
      sumLeft = sumLeft + currentNumber;
    }
  for (int i = 0; i < n; i++)
    {
      int currentNumber;
      cin>>currentNumber;
      sumRight = sumRight + currentNumber;
    }
  if (sumLeft == sumRight)

    {
      cout<<"Yes, sum = "<<sumRight<<" ";
    }
  else
    {
      int result = abs(sumLeft - sumRight);
      cout<<"No, diff = "<<result<<" ";
    }

  return 0;
}
