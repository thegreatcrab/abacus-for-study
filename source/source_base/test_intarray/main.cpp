#include <iostream>
#include "../intarray.h"

using namespace ModuleBase;

int main() {
    std::cout << "IntArray Test Program" << std::endl;
    std::cout << "================" << std::endl;

    // Test 1: Default constructor
    std::cout << "\n1. Testing default constructor:" << std::endl;
    IntArray arr1;
    std::cout << "IntArray arr1 (default): size = " << arr1.getSize() << ", dim = " << arr1.getDim() << std::endl;

    std::cout << "\nAll tests completed successfully!" << std::endl;
    return 0;
}
