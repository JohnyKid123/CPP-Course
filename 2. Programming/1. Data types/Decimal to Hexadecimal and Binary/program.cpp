#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>

int main()
{
    int decimalNum;
    std::cin >> decimalNum;
    std::string hexNum = std::hex << std::uppercase << decimalNum;
    std::string binaryNum;
    for (int i = decimalNum; i > 0; i /= 2) 
    {
        binaryNum = (i % 2 == 0 ? "0" : "1") + binaryNum;
    }
    std::cout << hexNum << std::endl;
    std::cout << binaryNum << std::endl;
    return 0;
}
