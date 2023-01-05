#include <iostream>
using namespace std;

int main()
{
    double age;
	string gender;
	cin >> age >> gender;

	if (gender == "m") 
    {
		if (age < 16) 
        {
				cout << "Master" << endl;

			}
			else 
            {
				cout << "Mr." << endl;
			}

		}
		else if (gender == "f") 
        {
			if (age < 16) 
            {
				cout << "Miss" << endl;
			}
        
		else 
        {
			cout <<"Ms."<< endl;
		}
        }
    return 0;
}
