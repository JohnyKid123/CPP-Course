#include <iostream>
#include <cmath>

int main()
{
    double length, width;
    std::cin >> length >> width;
    double circumference = 2 * (length + width);
    double area = length * width;
    double diagonal = sqrt(length * length + width * width);
    std::cout << circumference << std::endl;
    std::cout << area << std::endl;
    std::cout << diagonal << std::endl;
    return 0;
}
