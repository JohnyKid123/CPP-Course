#include <iostream>
#include <string>

int main() {
    std::string projectionType;
    std::cin >> projectionType;
    int rows, cols;
    std::cin >> rows >> cols;

    int seats = rows * cols;

    double ticketPrice = 0;
    if (projectionType == "Premiere") ticketPrice = 12;
    else if (projectionType == "Normal") ticketPrice = 7.5;
    else if (projectionType == "Discount") ticketPrice = 5;

    double total = ticketPrice * seats;
    std::cout << total << " leva" << std::endl;
    return 0;
}
