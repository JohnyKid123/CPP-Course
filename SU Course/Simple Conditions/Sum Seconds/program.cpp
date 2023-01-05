#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
            int firstCompetitor,secondCompetitor,thirdCompetitor;
    cin >> firstCompetitor>>secondCompetitor>>thirdCompetitor;
    int sum = firstCompetitor + secondCompetitor + thirdCompetitor;
    int min = sum / 60;
    int sec = sum - min * 60;
if (sec < 10) 
{
cout << min << ":" << "0" << sec << endl;

}

else {
cout << min << ":" << sec << endl;
}
    return 0;
}
