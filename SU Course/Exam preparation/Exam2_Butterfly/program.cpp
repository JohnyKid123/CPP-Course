#include <iostream>

void PrintBody(int n, bool isUpper);
void PrintMiddle(int n);
void PrintRow(int n, char c, bool isUpper);

int main() {
    int n;
    std::cin >> n;

    PrintBody(n, true);
    PrintMiddle(n);
    PrintBody(n, false);

    return 0;
}

void PrintBody(int n, bool isUpper) {
    for (int i = 0; i < n - 2; i++) {
        if (i % 2 == 0)
            PrintRow(n, '*', isUpper);
        else
            PrintRow(n, '-', isUpper);
    }
}

void PrintMiddle(int n) {
    for (int i = 0; i < n - 1; i++)
        std::cout << ' ';
    std::cout << '@' << std::endl;
}

void PrintRow(int n, char c, bool isUpper) {
    for (int i = 0; i < n - 2; i++)
        std::cout << c;

    if (isUpper) std::cout << "\\/";
    else std::cout << "/\\";

    for (int i = 0; i < n - 2; i++)
        std::cout << c;

    std::cout << std::endl;
}
