#include <iostream>
#include <cmath>

int main() {
    double v, p1, p2, h;
    std::cin >> v >> p1 >> p2 >> h;
    double water = (p1 + p2) * h;
    if (water <= v) {
        double waterPersent = water / v * 100;
        double p1Persent = p1 * h / water * 100;
        double p2Persent = p2 * h / water * 100;
        std::cout << "The pool is " << trunc(waterPersent) << "% full. " << "Pipe 1: " << trunc(p1Persent) << "%. Pipe 2: " << trunc(p2Persent) << "%." << std::endl;
    } else {
        double waterMore = water - v;
        std::cout << "For " << h << " hours the pool overflows with " << waterMore << " liters." << std::endl;
    }
    return 0;
}
