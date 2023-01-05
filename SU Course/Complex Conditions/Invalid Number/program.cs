#include <iostream>
using namespace std;

int main()
{
       int num;
       cin>>num;
       int a = (num >= 100 && num <= 200) || num == 0;
       if (!a) cout<<"invalid"<<" ";
    return 0;
}
