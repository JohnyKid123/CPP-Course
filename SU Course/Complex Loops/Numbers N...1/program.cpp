#include <iostream>

int main() {
    int n;
    std::cin >> n;
    for(int i = n; i >= 1; i -= 1) {
        std::cout << i << std::endl;
    }
    return 0;
}
