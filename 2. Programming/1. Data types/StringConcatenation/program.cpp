#include <iostream>
#include <string>
#include <sstream>

int main() {
    char separator;
    std::cin >> separator;
    
    std::string evenOrOdd;
    std::cin >> evenOrOdd;
    
    int n;
    std::cin >> n;
    
    bool concatenateOnEvenSteps = (evenOrOdd == "even");
    std::ostringstream oss;
    for (int i = 1; i <= n; i++) {
        std::string input;
        std::cin >> input;

        bool isEvenStep = (i % 2 == 0);
        if (concatenateOnEvenSteps == isEvenStep) {
            oss << input << separator;
        }
    }
    
    std::string result = oss.str();
    if (!result.empty()) {
        result.pop_back();
    }
    
    std::cout << result << std::endl;

    return 0;
}
