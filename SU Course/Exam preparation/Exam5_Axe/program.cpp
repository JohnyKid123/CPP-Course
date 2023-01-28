#include <iostream>
#include <string>

int main() {
    int n;
    std::cin >> n;
    int half = n / 2;

    for (int i = 0; i < n; i++) PrintStandardRow(n, 3 * n, '-', i, '-');
    for (int i = 0; i < half; i++) PrintStandardRow(n, 3 * n, '*', n - 1, '-');
    for (int i = 0; i < half - 1; i++) PrintStandardRow(n, 3 * n - i, '-', n - 1 + i * 2, '-');
    PrintStandardRow(n, 3 * n - half + 1, '-', n + half * 2 - 3, '*');

    return 0;
}

void PrintStandardRow(int n, int startSegmentLength, char startSegmentChar, int middleSegmentLength, char middleSegmentChar) {
    std::cout << std::string(startSegmentLength, startSegmentChar);
    std::cout << '*';
    std::cout << std::string(middleSegmentLength, middleSegmentChar);
    std::cout << '*';
    std::cout << std::string(5 * n - startSegmentLength - middleSegmentLength - 2, '-');

    std::cout << std::endl;
}
