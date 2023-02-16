#include <iostream>
#include <string>

using namespace std;

int main()
{
    string first, last;
    int age;

    getline(cin, first);
    getline(cin, last);
    cin >> age;

    cout << "Hello, " << first << " " << last << ". You are " << age << " years old." << endl;

    return 0;
}
