#include <iostream>
#include <string>
#include <limits>

int main() {
    std::string type;
    std::getline(std::cin, type);
    int n;
    std::cin >> n;

    long long upperBound = 0;
    if (type == "sbyte") upperBound = std::numeric_limits<signed char>::max();
    else if (type == "int") upperBound = std::numeric_limits<int>::max();
    else if (type == "long") upperBound = std::numeric_limits<long long>::max();

    long long max = std::numeric_limits<long long>::min();
    for (int i = 0; i < n; i++)
    {
        long long id;
        std::cin >> id;

        if (id > max && id <= upperBound) max = id;
    }

    std::cout << max << std::endl;

    return 0;
}
