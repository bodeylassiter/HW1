#include <iostream>
#include "Vector.h"

int main() {
    Vector vec;  // Create an instance of the Vector class

    // Automate the testing by adding 1000 integers
    for (int i = 0; i < 1000; ++i) {
        vec.push_back(i);  // Use push_back to add integers from 0 to 999
    }

    // Display the size and capacity of the vector after adding elements
    std::cout << "After adding 1000 elements:\n";
    std::cout << "Size of the vector: " << vec.size() << std::endl;
    std::cout << "Capacity of the vector: " << vec.capacity() << std::endl;

    // Optionally display some elements to confirm they were added correctly
    std::cout << "First 10 elements in the vector: ";
    for (int i = 0; i < 10; ++i) {
        std::cout << vec[i] << " ";  // Use the overloaded operator[] to access elements
    }
    std::cout << std::endl;

    // Check the last element to confirm all integers are added
    std::cout << "Last element added: " << vec[999] << std::endl;

    return 0;
}
