#include <iostream>
#include "intarray.h"
#include "complexarray.h"
#include "matrix.h"
#include "matrix3.h"
#include "complexmatrix.h"
#include "timer.h"

using namespace ModuleBase;

int main() {
    std::cout << "ABACUS-mini Test Program" << std::endl;
    std::cout << "=====================" << std::endl;

    // Test IntArray
    std::cout << "\n1. Testing IntArray:" << std::endl;
    IntArray intArray(5);
    std::cout << "IntArray created successfully" << std::endl;

    // Test ComplexArray
    std::cout << "\n2. Testing ComplexArray:" << std::endl;
    ComplexArray complexArray(3);
    std::cout << "ComplexArray created successfully" << std::endl;

    // Test Matrix
    std::cout << "\n3. Testing Matrix:" << std::endl;
    matrix matrix(2, 2);
    std::cout << "Matrix created successfully" << std::endl;

    // Test Matrix3
    std::cout << "\n4. Testing Matrix3:" << std::endl;
    Matrix3 matrix3;
    std::cout << "Matrix3 created successfully" << std::endl;

    // Test ComplexMatrix
    std::cout << "\n5. Testing ComplexMatrix:" << std::endl;
    ComplexMatrix complexMatrix(2, 2);
    std::cout << "ComplexMatrix created successfully" << std::endl;

    // Test Timer
    std::cout << "\n6. Testing Timer:" << std::endl;
    timer timer;
    std::cout << "Timer created successfully" << std::endl;

    std::cout << "\nAll tests completed successfully!" << std::endl;
    return 0;
}
