#include <iostream>
#include <string>
#include <ctime>

using namespace std;

int main() {
    string ftm = "dd-MM-yyyy";
    string value;
    cin >> value;
    tm userBirthday = {};
    strptime(value.c_str(), ftm.c_str(), &userBirthday);
    userBirthday.tm_mday += 1000;
    mktime(&userBirthday);
    cout << put_time(&userBirthday, "dd-MM-yyyy") << endl;
    return 0;
}
