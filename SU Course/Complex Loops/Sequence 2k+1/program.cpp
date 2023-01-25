#include <iostream>

int main() {
    int n;
    std::cin >> n;
    int num = 1;
    while (num <= n) {
        std::cout << num << std::endl;
        num = 2 * num + 1;
    }
    return 0;
}
