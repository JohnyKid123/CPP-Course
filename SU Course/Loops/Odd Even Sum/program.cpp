#include <iostream>
using namespace std;

int main()
{
  int n;
  cin>>n;
  double evenSum = 0, oddSum = 0;
  for (int i = 0; i < n; i++)
    {
      int currentNumber;
      cin>>currentNumber;
      if (i % 2 == 0)
	evenSum += currentNumber;
      else
	oddSum += currentNumber;
    }

  if (evenSum == oddSum)
    cout<<"Yes, sum = "<<evenSum<<" ";
  else
    cout<<"No, diff = "<<abs(evenSum - oddSum)<<" ";
  return 0;
}
