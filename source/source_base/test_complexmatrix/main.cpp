#include <iostream>
#include "../complexmatrix.h"

using namespace ModuleBase;

int main() {
    std::cout << "ComplexMatrix Test Program" << std::endl;
    std::cout << "======================" << std::endl;

    // Test 1: Default constructor
    std::cout << "\n1. Testing default constructor:" << std::endl;
    ComplexMatrix cm1;
    std::cout << "ComplexMatrix cm1 (default): rows = " << cm1.nr << ", columns = " << cm1.nc << std::endl;

    std::cout << "\nAll tests completed successfully!" << std::endl;
    return 0;
}
