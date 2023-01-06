#include <iostream>
#include <cstring>  // include the string library

using namespace std;

int main()
{
    char word1[20];
    char word2[20];
    cin >> word1;
    cin >> word2;

    if (strcasecmp(word1, word2) == 0)  
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }

    return 0;
}
