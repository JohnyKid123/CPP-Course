#include <iostream>
#include <string>

using namespace std;

int main()
{
    string a, b;
    int c;
    char d;
    double e, f;

    getline(cin, a);
    getline(cin, b);
    cin >> c;
    cin >> d;
    cin >> e;
    cin >> f;

    cout << "First Name: " << a << endl;
    cout << "Last Name: " << b << endl;
    cout << "Age: " << c << endl;
    cout << "Gender: " << d << endl;
    cout << "Personal ID: " << e << endl;
    cout << "Unique Employee number: " << f << endl;

    return 0;
}
