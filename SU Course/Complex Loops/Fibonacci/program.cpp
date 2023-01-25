#include <iostream>

int main() {
    int n;
    std::cin >> n;

    int first = 1, second = 1;
    for (int i = 2; i <= n; i++) {
        int next = first + second;
        first = second;
        second = next;
    }

    std::cout << second << std::endl;
    return 0;
}
