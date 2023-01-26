#include <iostream>
#include <string>

using namespace std;

int main(){
    int n;
    cin >> n;
    int lego = 0, monopoly = 0, puzzle = 0, robot = 0;
    for (int i = 0; i < n; i++)
    {
        string gift;
        cin >> gift;
        if (gift == "lego") lego++;
        else if (gift == "monopoly") monopoly++;
        else if (gift == "puzzle") puzzle++;
        else if (gift == "robot") robot++;
    }

    cout << "Lego: " << lego << endl;
    cout << "Monopoly: " << monopoly << endl;
    cout << "Puzzles: " << puzzle << endl;
    cout << "Robots: " << robot << endl;
    return 0;
}
