//Author: SHOKANTA ROY
//linkedin: https://www.linkedin.com/in/shokanta-roy-746387255/
//github: https://github.com/Shokanta-Roy/


#include <stdio.h>
#include <stdbool.h> // Include the library for boolean data type

int main()
{
    // Declare variables of different data types
    double x;
    bool a;

    // Initialize variables with values
    x = 1.618039;
    a = false;

    // Print the values
    printf("The double value: %.6e\n", x); // Use %e to print in scientific notation with 6 decimal places
    printf("The boolean value: %s\n", a ? "true" : "false");// Here I am using ternary.

    return 0;
}

