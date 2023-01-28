#include <iostream>

using namespace std;

namespace Exam5_Axe{
class Program {
    public:
        static void Main() {
            int n;
            cin >> n;
            int half = n / 2;

            for (int i = 0; i < n; i++) PrintStandardRow(n, 3 * n, '-', i, '-');
            for (int i = 0; i < half; i++) PrintStandardRow(n, 3 * n, '*', n - 1, '-');
            for (int i = 0; i < half - 1; i++) PrintStandardRow(n, 3 * n - i, '-', n - 1 + i * 2, '-');
            PrintStandardRow(n, 3 * n - half + 1, '-', n + half * 2 - 3, '*');
        }

    private:
        static void PrintStandardRow(int n, int startSegmentLength, char startSegmentChar, int middleSegmentLength, char middleSegmentChar) {
            for (int i = 0; i < startSegmentLength; i++) cout << startSegmentChar;
            cout << '*';
            for (int i = 0; i < middleSegmentLength; i++) cout << middleSegmentChar;
            cout << '*';
            for (int i = 0; i < 5 * n - startSegmentLength - middleSegmentLength - 2; i++) cout << '-';

            cout << endl;
        }
    };
}
int main()
{
    
    Exam5_Axe::Program::Main();
    return 0;
}
