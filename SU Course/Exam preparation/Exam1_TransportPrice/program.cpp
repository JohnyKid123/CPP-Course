#include <iostream>
#include <cstring>  // include the string library
#include<bits/stdc++.h>
using namespace std;

int main()
{
        double n;
        cin>>n;
		string dayOrNight;
		cin>>dayOrNight
		double price = 0;
		double taxiprice = 0;
		if(dayOrNight == "day")
		{
			taxiprice=0.79;
		}
		else 
		{
			taxiprice=0.90;
		}
		if(n<20)
		{
			price = 0.70 + n*taxiprice;
		}
		else if(n<100)
		{
			price = n*0.09;
		}
		else 
		{
			price = n*0.06;
		}
		cout<<price<<" ";

    return 0;
}
