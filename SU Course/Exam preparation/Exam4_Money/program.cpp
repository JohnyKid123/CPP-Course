#include <iostream>
#include <cstring>  // include the string library
#include<bits/stdc++.h>
using namespace std;

int main()
{
            int btc,cny,commision;
            cin>>btc>>cny>>commision;
            double totalInLevs = btc * 1168 + cny * 0.15 * 1.76;
            double total = (totalInLevs / 1.95) * (1 - commision * 0.01);
            cout<<total<<" ";

    return 0;
}
