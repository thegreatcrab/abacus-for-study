#include <iostream>
#include "../vector3.h"

using namespace ModuleBase;

int main() {
    std::cout << "Vector3 Test Program" << std::endl;
    std::cout << "================" << std::endl;

    // Test 1: Default constructor
    std::cout << "\n1. Testing default constructor:" << std::endl;
    Vector3<double> v1;
    std::cout << "Vector3<double> v1 (default): " << v1 << std::endl;

    std::cout << "\nAll tests completed successfully!" << std::endl;
    return 0;
}
