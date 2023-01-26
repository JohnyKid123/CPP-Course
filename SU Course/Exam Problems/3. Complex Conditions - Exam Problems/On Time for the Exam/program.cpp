#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int hourExam, minutesExam, hourArrival, minutesArrival;
    cin >> hourExam >> minutesExam >> hourArrival >> minutesArrival;
    int examTime = hourExam * 60 + minutesExam;
    int studentsTime = hourArrival * 60 + minutesArrival;
    int minutesDifference = studentsTime - examTime;
    cout << minutesDifference << endl;
    if (minutesDifference < -30)
        cout << "Early" << endl;
    else if (minutesDifference <= 0)
        cout << "On time" << endl;
    else
        cout << "Late" << endl;
    if (minutesDifference != 0)
    {
        int hours = abs(minutesDifference / 60);
        int minutes = abs(minutesDifference % 60);
        if (hours > 0)
        {
            if (minutes < 10)
                cout << hours << ":0" << minutes << "hours";
            else
                cout << hours << ":" << minutes << "hours";
        }
        else
            cout << minutes << " minutes";
        if (minutesDifference < 0)
            cout << " before the start" << endl;
        else
            cout << " after the start" << endl;
    }
    return 0;
}
