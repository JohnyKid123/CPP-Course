#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n;

    cout << string(n, '*') << endl;

    for (int i = 0; i < n - 2; i++)
    {
        cout << "*" << string(n - 2, ' ') << "*" << endl;
    }

    cout << string(n, '*') << endl;
    return 0;
}
