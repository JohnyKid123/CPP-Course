#include <iostream>

int main() {
    int n;
    std::cin >> n;
    int num = 1;
    do {
        num = n * (num);
        n--;
    } while (n >= 1);
    std::cout << num << std::endl;
    return 0;
}
