# Makefile for compiling the Vector class and associated driver program

# Variables
CC = g++                  # Compiler to use
CFLAGS = -Wall -Wextra -g # Compiler flags for warnings and debugging
TARGET = vector_program    # Name of the final executable

# Source files
SOURCES = main.cpp Vector.cpp # List of source files
OBJECTS = $(SOURCES:.cpp=.o)  # Convert .cpp files to .o files

# Default target: all
all: $(TARGET)
# Description:
#   Compiles the target program by linking all object files.

# Rule to create the executable
$(TARGET): $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $^ # Link object files to create executable

# Rule to compile source files to object files
%.o: %.cpp
	$(CC) $(CFLAGS) -c $< # Compile source file to object file

# Clean target to remove generated files
clean:
	rm -f $(OBJECTS) $(TARGET) # Remove object files and executable

# Phony targets
.PHONY: all clean
# Description:
#   .PHONY specifies that these targets are not files and should always be executed.
