#include <iostream>
#include "../ndarray.h"

int main() {
    std::cout << "NDArray Test Program" << std::endl;
    std::cout << "==================" << std::endl;

    // Test 1: 2D NDArray
    std::cout << "\n1. Testing 2D NDArray:" << std::endl;
    NDArray<int> arr2d(2, 3);
    std::cout << "2D NDArray shape: " << arr2d.shape()[0] << "x" << arr2d.shape()[1] << std::endl;
    std::cout << "Size: " << arr2d.size() << std::endl;
    
    std::cout << "\nAll tests completed successfully!" << std::endl;
    return 0;
}
