#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
        string projectionType;
            int rows,cols;
            cin>>projectionType>>rows>>cols;
            int seats = rows * cols;
            double ticketPrice = 0;
            if (projectionType == "Premiere") ticketPrice = 12;
            else if (projectionType == "Normal") ticketPrice = 7.5;
            else if (projectionType == "Discount") ticketPrice = 5;

            double total = ticketPrice * seats;
            cout<<fixed<<setprecision(2)<<total<<"leva"<<" ";
    return 0;
}
