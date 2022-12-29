#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x1,x2,y1,y2;
    cin>>x1>>y1>>x2>>y2;
    double width = fabs(x2 - x1);
    double height = fabs(y2 - y1);
    cout << "Area = " << width * height << endl;
    cout << "Perimeter = " << 2 * (width + height) << endl;
    
    return 0;
}
