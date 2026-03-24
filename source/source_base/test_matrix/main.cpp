#include <iostream>
#include "../matrix.h"

using namespace ModuleBase;

int main() {
    std::cout << "Matrix Test Program" << std::endl;
    std::cout << "================" << std::endl;

    // Test 1: Default constructor
    std::cout << "\n1. Testing default constructor:" << std::endl;
    matrix m1;
    std::cout << "Matrix m1 (default): rows = " << m1.nr << ", columns = " << m1.nc << std::endl;

    std::cout << "\nAll tests completed successfully!" << std::endl;
    return 0;
}
