#include <iostream>
#include <cmath>

int main() {
    int area, requiredLitersOfWine, workersCount;
    double grapesPerSquareMeter;
    std::cin >> area >> grapesPerSquareMeter >> requiredLitersOfWine >> workersCount;

    double totalGrapes = grapesPerSquareMeter * area * 0.4;
    double producedLitersOfWine = totalGrapes / 2.5; 

    double diff = producedLitersOfWine - requiredLitersOfWine;
    if (diff < 0) {
        std::cout << "It will be a tough winter! More " << floor(-1 * diff) << " liters wine needed." << std::endl;
    } else {
        std::cout << "Good harvest this year! Total wine: " << floor(producedLitersOfWine) << " liters." << std::endl;
        std::cout << ceil(diff) << " liters left -> " << ceil(diff / workersCount) << " liters per person." << std::endl;
    }
    return 0;
}
