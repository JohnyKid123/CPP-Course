#include <iostream>
#include <cmath>

int main()
{
int n, p, courses;
std::cin >> n >> p;
courses = ceil((double)n / p);
std::cout << courses << std::endl;
return 0;
}
