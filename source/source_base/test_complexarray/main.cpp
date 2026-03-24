#include <iostream>
#include "../complexarray.h"

using namespace ModuleBase;

int main() {
    std::cout << "ComplexArray Test Program" << std::endl;
    std::cout << "====================" << std::endl;

    // Test 1: Default constructor
    std::cout << "\n1. Testing default constructor:" << std::endl;
    ComplexArray ca1;
    std::cout << "ComplexArray ca1 (default): size = " << ca1.getSize() << std::endl;

    std::cout << "\nAll tests completed successfully!" << std::endl;
    return 0;
}
