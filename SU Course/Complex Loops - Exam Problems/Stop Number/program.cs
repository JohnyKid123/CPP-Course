#include <iostream>
using namespace std;

int main()
{
    int n,m,s;
    cin>>n>>m>>s;
        bool reachedStopNumber = false;
        for (int i = m; i >= n && !reachedStopNumber; i--)
        {
                if (i % 2 == 0 && i % 3 == 0)
                {
                    if (i == s) reachedStopNumber = true;
                    else cout<<i<<" ";
                }
        }

    return 0;
}
