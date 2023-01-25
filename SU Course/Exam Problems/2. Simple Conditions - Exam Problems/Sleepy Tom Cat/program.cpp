#include <iostream>
#include <cmath>

int main() {
    double days;
    std::cin >> days;
    double working_days = 365 - days;
    double minutes = working_days * 63 + days * 127;
    double dif = std::abs(minutes - 30000);
    int hour = dif / 60;
    int min = dif % 60;
    if (minutes > 30000) {
        std::cout << "Tom will run away" << std::endl;
        std::cout << hour << " hours and " << min << " minutes more for play" << std::endl;
    } else {
        std::cout << "Tom sleeps well" << std::endl;
        std::cout << hour << " hours and " << min << " minutes less for play" << std::endl;
    }
    return 0;
}
