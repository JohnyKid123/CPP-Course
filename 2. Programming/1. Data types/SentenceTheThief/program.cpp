#include <iostream>
#include <string>

int main() {
    std::string type;
    std::getline(std::cin, type);
    int n;
    std::cin >> n;

    long long upperBound = 0;
    if (type == "sbyte") upperBound = 127;
    else if (type == "int") upperBound = 2147483647;
    else if (type == "long") upperBound = 9223372036854775807;

    long long max = -9223372036854775807;
    for (int i = 0; i < n; i++)
    {
        long long id;
        std::cin >> id;

        if (id > max && id <= upperBound) max = id;
    }

    long long sentenceTerm;
    if (max < 0) sentenceTerm = -128;
    else sentenceTerm = 127;
            
    long long sentence = max / sentenceTerm;
    if (max % sentenceTerm != 0) sentence++;

    std::string yearsWord = (sentence == 1) ? "year" : "years";
    std::cout << "Prisoner with id " << max << " is sentenced to " << sentence << " " << yearsWord << std::endl;

    return 0;
}
