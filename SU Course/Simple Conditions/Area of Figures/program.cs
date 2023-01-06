#include <iostream>
#include <cstring>  // include the string library
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string figure;
    cin>>figure;
    double f = 3.14159;
    double area = 0;
            if (figure == "square")
            {
                double a;
                cin>>a;
                area = a * a;
            }
            else if (figure == "rectangle")
            {
                double a,b;
                cin>>a>>b;
                area = a * b;
            }
            else if (figure == "circle")
            {
                double r;
                cin>>r;
                area = f * r * r;
            }
            else if (figure == "triangle")
            {
                double a,h;
                cin>>a>>h;
                area = a * h / 2;
            }

            cout <<fixed << setprecision(3) <<area<<" "; 

    return 0;
}
