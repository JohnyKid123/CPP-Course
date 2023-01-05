#include <iostream>
using namespace std;

int main()
{
        string product,city;
        cin>>product>>city;
        int unity;
        cin>>unity;
		if(city == "Sofia")
		{
			if(product == "coffee")
			    cout<<(0.50 * unity)<<" ";
			else if(product == "water")
				cout<<(0.80 * unity)<<" ";
			else if(product == "beer")
				cout<<(1.20 * unity)<<" ";
			else if(product == "sweets")
				cout<<(1.45 * unity)<<" ";
			else if(product == "peanuts")
				cout<<(1.60 * unity)<<" ";
		}
		else if(city == "Plovdiv")
		{
			if(product == "coffee")
				cout<<(0.40 * unity)<<" ";
			else if(product == "water")
				cout<<(0.70 * unity)<<" ";
			else if(product == "beer")
				cout<<(1.15 * unity)<<" ";
			else if(product == "sweets")
				cout<<(1.30 * unity)<<" ";
			else if(product == "peanuts")
				cout<<(1.50 * unity)<<" ";
		}
		else if(city == "Varna")
		{
			if(product == "coffee")
				cout<<(0.45 * unity)<<" ";
			else if(product == "water")
				cout<<(0.70 * unity)<<" ";
			else if(product == "beer")
				cout<<(1.10 * unity)<<" ";
			else if(product == "sweets")
				cout<<(1.35 * unity)<<" ";
			else if(product == "peanuts")
				cout<<(1.55 * unity)<<" ";
		}
    return 0;
}
