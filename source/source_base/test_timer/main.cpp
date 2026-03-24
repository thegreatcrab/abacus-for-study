#include <iostream>
#include <fstream>
#include "../timer.h"

using namespace ModuleBase;

// A simple function to test timing
void test_function() {
    // Simulate some computation
    for (int i = 0; i < 100000000; i++) {
        // Do some dummy computation
        double x = i * 2.0;
    }
}

int main() {
    std::cout << "Timer Test Program" << std::endl;
    std::cout << "================" << std::endl;

    // Test 1: Basic timing functionality
    std::cout << "\n1. Testing basic timing functionality:" << std::endl;
    
    // Start the timer for a function
    timer::start("Test", "test_function");
    
    // Call the function to be timed
    test_function();
    
    // End the timer
    timer::end("Test", "test_function");
    
    std::cout << "Timing for test_function completed." << std::endl;


    std::cout << "\nAll tests completed successfully!" << std::endl;
    return 0;
}
