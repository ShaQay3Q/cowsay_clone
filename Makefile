# Makefile for compiling C code
# Compiler Driver -> coordinates preprocessing, compilation, assembly, and linking
CC := gcc
# CC can be set to Clang as well, as compiler

# Compiler flags
# Wall enables a useful collection of compiler warnings.
# Wextra enables additional warnings that are not included in -Wall.
# g adds debugging information to your executable.
CFLAGS := -Wall -Wextra -g
#-std=c17

# Final executable
# Name of the executable that the build will produce
TARGET := cowsay-clone

# Source files
SRCS := $(wildcard src/*.c)
# wildcard is a Make function that searches for filenames matching a pattern:
# LIB_SRCS := $(wildcard src/*.c)

# target and prerequisites
$(TARGET): $(SRCS)
	$(CC) $(CFLAGS) $(SRCS) -o $(TARGET)
# 	recipe
# -o name the output file cowsay-clone.
# Without -o GCC would normally name the executable: a.out