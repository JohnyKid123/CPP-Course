#include <iostream>

using namespace std;

namespace Exam2_Butterfly
{
    class Program
    {
    public:
        static void Main()
        {
            int n;
            cin >> n;

            PrintBody(n, true);
            PrintMiddle(n);
            PrintBody(n, false);
        }
        static void PrintBody(int n, bool isUpper)
        {
            for (int i = 0; i < n - 2; i++)
            {
                if (i % 2 == 0)
                    PrintRow(n, '*', isUpper);
                else
                    PrintRow(n, '-', isUpper);
            }
        }

        static void PrintMiddle(int n)
        {
            for (int i = 0; i < n - 1; i++)
                cout << ' ';
            cout << '@' << endl;
        }

        static void PrintRow(int n, char c, bool isUpper)
        {
            for (int i = 0; i < n - 2; i++)
                cout << c;

            if (isUpper) cout << "\\/";
            else cout << "/\\";

            for (int i = 0; i < n - 2; i++)
                cout << c;

            cout << endl;
        }
    };
}

int main() {
    Exam2_Butterfly::Program::Main();
    return 0;
}
