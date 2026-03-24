#include <iostream>
#include "../realarray.h"

using namespace ModuleBase;

int main() {
    std::cout << "realArray Test Program" << std::endl;
    std::cout << "==================" << std::endl;

    // Test 1: Default constructor
    std::cout << "\n1. Testing default constructor:" << std::endl;
    realArray ra1;
    std::cout << "realArray ra1 (default): size = " << ra1.getSize() << ", dim = " << ra1.getDim() << std::endl;

    std::cout << "\nAll tests completed successfully!" << std::endl;
    return 0;
}
