#include <iostream>
using namespace std;

int main()
{
    int special;
    cin>>special;
    for(int d1= 1; d1<=9; d1++)
    {
        for(int d2 = 1; d2<=9; d2++)
        {
            for(int d3= 1; d3<=9; d3++)
            {
                for(int d4 = 1; d4<=9; d4++)
                {
                    if(special%d1==0 && special%d2==0 && special%d3==0 && special%d4==0)
                    cout<<d1<<d2<<d3<<d4<<" "; 
                }
            }
        }
    }
    return 0;
}
