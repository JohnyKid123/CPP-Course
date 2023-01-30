#include <iostream>

int main()
{
    double distance;
    int hours, minutes, seconds;
    std::cin >> distance >> hours >> minutes >> seconds;
    double totalSeconds = hours * 3600 + minutes * 60 + seconds;
    double metersPerSecond = distance / totalSeconds;
    double kilometersPerHour = (distance / 1000) / (totalSeconds / 3600);
    double milesPerHour = kilometersPerHour / 1.609;
    std::cout << metersPerSecond << std::endl;
    std::cout << kilometersPerHour << std::endl;
    std::cout << milesPerHour << std::endl;
    return 0;
}
