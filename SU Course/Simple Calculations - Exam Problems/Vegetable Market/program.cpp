#include <iostream>
#include <cstring>  // include the string library
#include<bits/stdc++.h>
using namespace std;

int main()
{
        var vegetables,fruits,kilos_veg,kilos_fru;
        cin>>vegetables>>fruits>>kilos_veg>>kilos_fru;
		var price_veg = vegetables * kilos_veg;
		var price_fru = fruits * kilos_fru;
		cout<<(price_veg + price_fru)/1.94<<" ";

    return 0;
}
