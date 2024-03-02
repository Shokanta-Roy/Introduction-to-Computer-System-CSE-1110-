//Author: SHOKANTA ROY
//linkedin: https://www.linkedin.com/in/shokanta-roy-746387255/
//github: https://github.com/Shokanta-Roy/

//Here is some problem in the sample input-output.
//So, you can skip this problem.

#include <stdio.h>

int main()
{
    double a, b;
    int choice;

    // Input two real numbers
    scanf("%lf", &a);
    scanf("%lf", &b);

    // Display menu
    printf("\nArithmetic Operations Menu:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");

    // Input choice
    scanf("%d", &choice);

    // Perform selected operation
    switch (choice)
    {
    case 1:
        printf("Addition: %.2lf\n", a + b);
        break;
    case 2:
        printf("Subtraction: %.2lf\n", a - b);
        break;
    case 3:
        printf("Multiplication: %.2lf\n", a * b);
        break;
    case 4:
        if (b != 0)
        {
            printf("Division: %.0lf\n", a / b);
        }
        else
        {
            printf("Error: Division by zero!\n");
        }
        break;
    default:
        printf("Invalid choice!\n");
    }

    return 0;
}

