#include <iostream>

int main() {
    int a, b;
    std::cin >> a >> b;
    while (b != 0) {
        int ob = b;
        b = a % b;
        a = ob;
    }
    std::cout << a << std::endl;
    return 0;
}
