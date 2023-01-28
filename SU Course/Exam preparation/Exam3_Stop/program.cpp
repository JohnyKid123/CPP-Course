
#include <iostream>
#include <string>

using namespace std;

namespace Exam3_Stop
{
    int n;

    void PrintTop(int n)
    {
        cout << string(n + 1, '.') << string(2 * n + 1, '_') << string(n + 1, '.') << endl;
    }

    void PrintMiddleRow(int n)
    {
        cout << "//" << string(2 * n - 3, '_') << "STOP!" << string(2 * n - 3, '_') << "\\\\" << endl;
    }

    void PrintStandardRow(int n, int t, char left, char right)
    {
        cout << string(t, '.') << left << left << string(4 * n - 2 * t - 1, '_') << right << right << string(t, '.') &#8203;`oaicite:{"index":0,"invalid_reason":"Malformed citation << endl;\n    }\n\n    int main()\n    {\n        cin >>"}`&#8203; n;

        PrintTop(n);
        for (int i = n; i >= 1; i--) PrintStandardRow(n, i, '/', '\\');
        PrintMiddleRow(n);

        int start = 1;
        if (n >= 100) start = 0;

        for (int i = start; i <= n - 1; i++) PrintStandardRow(n, i, '\\', '/');

        return 0;
    }
}

