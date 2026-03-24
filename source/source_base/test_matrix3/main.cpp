#include <iostream>
#include "../matrix3.h"

using namespace ModuleBase;

int main() {
    std::cout << "Matrix3 Test Program" << std::endl;
    std::cout << "==================" << std::endl;

    // Test 1: Default constructor (should create identity matrix)
    std::cout << "\n1. Testing default constructor (identity matrix):" << std::endl;
    Matrix3 m1;
    std::cout << "Matrix m1 (identity):" << std::endl;
    m1.print();

    return 0;
}
