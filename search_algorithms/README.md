
# Search Algorithms in C

## Overview

This project provides implementations of two fundamental search algorithms in C: Linear Search and Binary Search. The primary focus is to demonstrate efficient searching techniques on arrays.

## Features

- **Linear Search**: A simple search algorithm that checks every element until the desired value is found or the array ends.
- **Binary Search**: An efficient algorithm for finding an item from a sorted list of items, repeatedly dividing the search interval in half.

## Getting Started

### Prerequisites

- A C compiler (like GCC) is required to compile the source code.
- Basic knowledge of C programming and search algorithms.

### Compilation

To compile the individual source files, use the following command:

\```bash
gcc -Wall -Werror -Wextra -pedantic <filename.c> -o <output-name>
\```

Replace `<filename.c>` with the source file's name and `<output-name>` with the desired output file name.

### Running the Programs

After compiling, you can run the program using:

\```bash
./<output-name>
\```

Replace `<output-name>` with the name of the compiled output file.

## Algorithms

### Linear Search

- **File**: `0-linear_search.c`
- **Function Prototype**: `int linear_search(int *array, size_t size, int value);`
- **Usage**: Searches for a value in an array of integers using linear search algorithm.

### Binary Search

- **File**: `1-binary_search.c`
- **Function Prototype**: `int binary_search(int *array, size_t size, int value);`
- **Usage**: Performs binary search in an array of integers.

## Contributing

Contributions, bug reports, and feature requests are welcome! Feel free to fork the repository and submit your contributions via pull requests.


## Authors

- [Alexandre Wertel]

