#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    while(n<1 || n>100)
		{
			cout<<"Ivalid Number!"<<" ";
			int n;
			cin>>n;
		}
		cout<<"The number is: "<<n<<" ";

    return 0;
}

