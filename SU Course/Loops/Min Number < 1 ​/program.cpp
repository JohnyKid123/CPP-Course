#include <iostream>
using namespace std;

int main()
{
            int n;
            cin>>n;
            long max = 1000000000000000;
            for (int i = 1; i <= n; i++)
            {
                int num; cin>>num;
                if (num < max)
                {
                    max = num;
                }
            }

            cout<<"max = "<<max<<" ";

    return 0;
}
