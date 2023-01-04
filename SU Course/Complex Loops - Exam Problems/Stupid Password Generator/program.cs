#include <iostream>
using namespace std;

int main()
{
    int n,l;
    cin>>n>>l;
for (int d1 = 1; d1 <=n; d1++) 
{
for (int d2 = 1; d2 <=n; d2++) 
{
    for (char l1 = 'a'; l1 <= 'a' + l; l1++) 
    {
        for (char l2 = 'a'; l2 <= ('a' + l); l2++)
        {
            for (int d3 = max(d1, d2) + 1; d3 <= n; d3++) 
            {       
                cout << d1 << d2 << l1 << l2 << d3 << " ";
            }
        }
    }
}
}

    return 0;
}
