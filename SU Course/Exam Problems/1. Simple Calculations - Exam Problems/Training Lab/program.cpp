#include <iostream>
#include <cstring>  // include the string library
#include<bits/stdc++.h>
using namespace std;

int main()
{
            var h,w;
            cin>>h>>w;
            double r = h * 100 / 120; 
            double s = (w * 100 - 100) / 70; 
            double f = trunc(r); 
            double t = trunc(s); 
            cout<<(t * f) - 3<<" ";

    return 0;
}
