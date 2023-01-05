#include <iostream>
#include<bits/stdc++.h>
#include <algorithm>
using namespace std;

 
int main () 
{
  
int s;
cin>>s;
		if(s<=10)
		{
			cout<<"slow"<<" ";
		}
		else if(s>10 & s<=50)
		{
			cout<<"average"<<" ";
		}
		else if(s>50 & s<=150)
		{
			cout<<"fast"<<" ";
		}
		else if(s>150 & s<=1000)
		{
			cout<<"ultra fast"<<" ";
		}
		else if(s>1000)
		{
			cout<<"extremely fast"<<" ";
		}
return 0;

}
