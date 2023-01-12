#include <iostream>
using namespace std;

int main ()
{
            int n,big;
            cin>>n>>big;
            int sum = big;
            for (int i = 2; i <= n; i++)
            {
                int a;
                cin>>a;
                sum = sum + a;
                if (a > big) big = a;
            }
            if (big == (sum - big))
            {
                cout<<"Yes"<<" ";
                cout<<"Sum  = "<<big<<" ";
            }
            else
            {
                cout<<"No"<<" ";
                cout<<"Diff = "<<abs(big - (sum - big))<<" ";
            }
  return 0;
}
