#include "Vector.h"

Vector::Vector() : vec_ptr(NULL), vec_size(0), vec_capacity(0) {
    // Initializes an empty vector with vec_ptr as NULL, vec_size and vec_capacity as 0.
}

Vector::Vector(const Vector &other) {
    // Allocating new memory for the vector
    vec_capacity = other.vec_capacity;
    vec_size = other.vec_size;
    vec_ptr = new int[vec_capacity]; // Dynamically allocate new memory
    for (int i = 0; i < vec_size; ++i) {
        vec_ptr[i] = other.vec_ptr[i]; // Copying elements
    }
}

Vector::~Vector() {
    delete[] vec_ptr; // Deallocates vec_ptr
    vec_ptr = NULL;   // Setting vec_ptr to NULL for safety
    vec_size = 0;     // Resetting size
    vec_capacity = 0; // Resetting capacity
}

Vector& Vector::operator=(const Vector &other) {
    if (this != &other) { // Avoid self-assignment
        delete[] vec_ptr; // Deallocate current memory

        // Allocating new memory and copying data
        vec_capacity = other.vec_capacity;
        vec_size = other.vec_size;
        vec_ptr = new int[vec_capacity];
        for (int i = 0; i < vec_size; ++i) {
            vec_ptr[i] = other.vec_ptr[i];
        }
    }
    return *this;
}

int Vector::size() {
    return vec_size; // Returns the current number of elements in the vector
}

int Vector::capacity() {
    return vec_capacity; // Returns the currently allocated storage capacity of the vector
}

void Vector::push_back(int element) {
    if (vec_size >= vec_capacity) {
        reserve(vec_capacity == 0 ? 1 : vec_capacity * 2); // Double capacity if necessary
    }
    vec_ptr[vec_size++] = element; // Store element and increase size
}

void Vector::reserve(int n) {
    if (n > vec_capacity) { // Only resize if new capacity is greater
        int* new_ptr = new int[n]; // Allocate new memory
        for (int i = 0; i < vec_size; ++i) {
            new_ptr[i] = vec_ptr[i]; // Copy existing elements
        }
        delete[] vec_ptr; // Deallocate old memory
        vec_ptr = new_ptr; // Update pointer to new memory
        vec_capacity = n;   // Update capacity
    }
}

int& Vector::operator[](unsigned int index) {
  if (static_cast<int>(index) >= vec_size) {
        throw std::out_of_range("Index out of range"); // Handle out-of-bounds access
    }
    return vec_ptr[index]; // Return reference to element at index
}
