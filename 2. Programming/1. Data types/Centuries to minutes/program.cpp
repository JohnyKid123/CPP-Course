#include <iostream>

int main()
{
    uint8_t c;
    std::cin >> c;
    uint32_t y = (100U * c);
    uint32_t d = (y * 365.2422);
    uint64_t h = (24UL * d);
    uint64_t m = (60UL * h);
    uint64_t s = (60UL * m);
    std::cout << c << " centuries = " << y << " years = " << d << " days = " << h << " hours = " << m << " minutes" << std::endl;
    return 0;
}
