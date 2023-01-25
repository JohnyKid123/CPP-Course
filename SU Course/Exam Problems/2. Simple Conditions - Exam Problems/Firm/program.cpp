#include <iostream>
#include <cmath>

int main() {
    int needTime, days, workers;
    std::cin >> needTime >> days >> workers;
    double firmdays = days * 0.9;
    int workHfirm = firmdays * 8 * workers;
    double overtime = workers * firmdays * 2;
    double totalFirmTime = floor(workHfirm + overtime);
    int diff = abs(totalFirmTime - needTime);
    if (needTime <= totalFirmTime) {
        std::cout << "Yes! " << diff << " hours left." << std::endl;
    } else {
        std::cout << "Not enough time! " << ceil(diff) << " hours needed." << std::endl;
    }
    return 0;
}
