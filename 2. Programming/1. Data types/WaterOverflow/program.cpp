#include <iostream>

int main() {
    uint8_t capacity = 0; 
            
    uint8_t n;
    std::cin >> n;

    for (uint8_t i = 0; i < n; i++)
    {
        uint16_t liters;
        std::cin >> liters;

        uint8_t remainingCapacity = UINT8_MAX - capacity;
        if (liters <= remainingCapacity) {
            capacity += static_cast<uint8_t>(liters);
        } else {
            std::cout << "Insufficient capacity!" << std::endl;
        }
    }

    std::cout << static_cast<int>(capacity) << std::endl;

    return 0;
}
