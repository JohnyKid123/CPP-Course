#include <iostream>
using namespace std;

int main() {
    int days;
    cin >> days;

    int doctors = 7;
    int treatedPatients = 0, untreatedPatients = 0;
    for (int i = 1; i <= days; i++)
    {
        if (i % 3 == 0 && (untreatedPatients > treatedPatients)) doctors++;

        int patients;
        cin >> patients;
        if (patients <= doctors) treatedPatients += patients;
        else
        {
            treatedPatients += doctors;
            untreatedPatients += patients - doctors;
        }
    }

    cout << "Treated patients: " << treatedPatients << "." << endl;
    cout << "Untreated patients: " << untreatedPatients << "." << endl;
    return 0;
}
