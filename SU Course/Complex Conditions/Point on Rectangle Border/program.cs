#include <iostream>
using namespace std;

int main()
{
        int x1,y1,x2,y2,x,y;
        cin>>x1>>y1>>x2>>y2>>x>>y;
            if (x1<x2 && y1<y2) {
                if ((x == x1  || x == x2) && (y <= y2 && y >= y1) || (y == y1 || y == y2) && (x < x2 && x > x1)) {
                    cout<<"Border"<<" ";
                }
                else {
                    cout<<"Inside / Outside"<<" ";
                }
            }
    return 0;
}
