#include <iostream>
#include <cstring>  // include the string library
#include<bits/stdc++.h>
using namespace std;

int main()
{
        double N,W,L,M,O;
        cin>>N>>W>>L>>M>>O
		int S = N*N;
		int SP = M*O;
		int PP = S - SP;
		int SPP = W*L;
		cout<<PP/SPP<<" ";
	    cout<<(PP/SPP)*0.2<<" ";

    return 0;
}
