#include <iostream>

int main() {
    int n;
    std::cin >> n;
    int num = 1;
    for (int i = 0; i <= n; i += 2) {
        std::cout << num << std::endl;
        num = num * 2 * 2;
    }
    return 0;
}
