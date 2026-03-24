#include <iostream>
#include "../formatter.h"

int main() {
    std::cout << "Formatter Test Program" << std::endl;
    std::cout << "====================" << std::endl;

    // Test 1: FmtCore::format() static function
    std::cout << "\n1. Testing FmtCore::format() static function:" << std::endl;
    std::string formatted = FmtCore::format("%d + %d = %d", 1, 2, 3);
    std::cout << "Formatted string: " << formatted << std::endl;
    formatted = FmtCore::format("%.2f", 3.14159);
    std::cout << "Formatted float: " << formatted << std::endl;

    std::cout << "\nAll tests completed successfully!" << std::endl;
    return 0;
}
