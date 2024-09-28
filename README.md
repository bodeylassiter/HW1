# Vector Class Implementation

## Author
**Name**: Bodey Lassiter
**Date**: September 26, 2024

## Description

This project implements a simplified version of the `std::vector` class in C++. It allows d\
ynamic array management, including the ability to add elements, resize the vector, and acce\
ss elements via an index. The project provides core functionalities such as `push_back`, `s\
ize`, `capacity`, and more, along with proper memory management using dynamic allocation.

## Features

- **Dynamic Array**: Automatically resizes the internal array when the vector reaches capac\
ity.
- **Element Addition**: Add elements to the end using `push_back`.
- **Size**: Returns the number of elements currently stored in the vector.
- **Capacity**: Returns the allocated storage capacity.
- **Reserve**: Allocates space for a minimum number of elements.
- **Copy Constructor & Assignment Operator**: Copies and assigns vectors.
- **Destructor**: Releases dynamically allocated memory.
- **Subscript Operator**: Allows access to elements by index.

## How to Compile the Program

To compile the program, run the following command using the provided `Makefile`:

```bash
make

