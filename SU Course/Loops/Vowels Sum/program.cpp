#include <iostream>
using namespace std;

int main ()
{
  int n;
  cin >> n;
  int maxDiff = 0, lastSum = 0;
  for (int i = 0; i < n; i++)
    {
      int a,b;
      cin>>a>>b;
      int sum = a + b;

      if (i > 0)
	{
	  int currentDiff = abs(sum - lastSum);
	  if (currentDiff > maxDiff)
	    maxDiff = currentDiff;
	}
      lastSum = sum;
    }
  if (maxDiff == 0)
    cout<<"Yes, value="<<lastSum<<" ";
  else
    cout<<"No, maxdiff="<<maxDiff<<" ";
  return 0;
}
