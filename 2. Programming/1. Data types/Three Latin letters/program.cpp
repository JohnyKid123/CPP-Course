#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
    int n;
    std::cin >> n;
    std::vector<char> letters;
    for (int i = 97; i < 97 + n; ++i)
    {
        letters.push_back(char(i));
    }

    for (auto a : letters)
    {
        for (auto b : letters)
        {
            for (auto c : letters)
            {
                if (a <= b || b <= c || c <= a)
                {
                    std::cout << a << b << c << std::endl;
                }
            }
        }
    }

    return 0;
}
