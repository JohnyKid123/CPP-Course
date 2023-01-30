#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>

int main()
{
    std::string hexNum;
    std::cin >> hexNum;
    hexNum.erase(0, 2);
    int decimalNum;
    std::istringstream(hexNum) >> std::hex >> decimalNum;
    std::cout << decimalNum << std::endl;
    return 0;
}
