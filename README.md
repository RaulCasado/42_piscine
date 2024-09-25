Piscine 42 - C Exercises
========================

Welcome to the **Piscine 42 C Exercises Repository**! This README will guide you through the content of the repository, how to navigate it, and how to get started with the exercises.

Content Overview
--------------------

The repository is structured into different sections, representing the progression of exercises from basic shell commands to more complex C programming challenges.

### Shell Exercises

**shell00** and **shell01**:

*   Creating, copying, moving, and deleting files and directories
*   Managing file permissions
*   Using SSH and Git
*   Navigating the filesystem

### C Programming Exercises

The C programming exercises are divided into multiple sections (C00, C01, C02, etc.), with each focusing on different programming concepts:

*   **C00**: Introduction to C programming (variables, types, loops, functions, libraries)
*   **C01**: Pointers and memory
*   **C02 & C03**: String manipulation and advanced string operations
*   **C04**: Utility functions for code reuse and efficiency
*   **C05**: Recursion and iteration
*   **C06**: Command-line arguments (\`argc\`, \`argv\[\]\`)

Each exercise is tested with **mini moulinette**, a tool that grades your submissions and checks for errors. You can also test your code locally by writing a `main.c` file to test the provided functions, then you can use valgrind to check for memory leaks in the exercises that use dynamic memory allocation.

How to Get Started
---------------------

Follow these steps to get started with the exercises:

1.  **Clone the repository**:
    
        git clone <repository-url>
    
2.  **Explore the exercise folders**
3.  **Review the code**: Open the exercise files and review the functions and logic.
4.  **Write a `main.c` file**: Create a `main.c` file to test the provided functions.
5.  **Compile the code** using the GCC compiler. For example:
    
        gcc -Wall -Wextra -Werror -o main main.c ex00/ft_putchar.c
    
6.  **Run the compiled program**:
    
        ./main
    
7.  **Check the output**: Ensure the output matches the expected results.

How to Compile the Code
---------------------------

Before compiling, ensure you have GCC installed. If not, you can install it with the following command (for Debian/Ubuntu-based systems):

    sudo apt-get install gcc

To compile a specific exercise along with your `main.c` testing file, use the GCC command like this:

    gcc -Wall -Wextra -Werror -o main main.c ex00/ft_putchar.c

**Flags:**

*   `-Wall`, `-Wextra`, and `-Werror` enable extra warnings and treat them as errors.
*   `-o main` creates an output executable named `main`.

Once compiled, you can run the executable:

    ./main

Final Thoughts
-----------------

I enjoyed working through these exercises. Starting from zero knowledge of C, I've learned valuable skills that have strengthened my programming foundation. I'm excited to continue this journey and tackle more advanced topics.

If you have any questions, suggestions, or feedback, feel free to reach out! I'm happy to help or discuss any challenges you may encounter.

Good luck, and enjoy learning!