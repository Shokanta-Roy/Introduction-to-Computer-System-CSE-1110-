#include <stdio.h>

int main()
{
    double a, b;
    int choice, case_choice;

    // Input two real numbers
    printf("Enter the first real number (a): ");
    scanf("%lf", &a);
    printf("Enter the second real number (b): ");
    scanf("%lf", &b);

    // Display menu
    printf("\nArithmetic Operations Menu:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");

    // Input choice
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    // Perform selected operation
    switch (choice)
    {
    case 1:
        printf("Result of addition: %.2lf\n", a + b);
        break;
    case 2:
        printf("Result of subtraction: %.2lf\n", a - b);
        break;
    case 3:
        printf("Result of multiplication: %.2lf\n", a * b);
        break;
    case 4:
        // If division is chosen, ask for further choice
        printf("Division Options:\n");
        printf("1. Evaluate Quotient\n");
        printf("2. Evaluate Remainder\n");
        printf("Enter your choice (1-2): ");
        scanf("%d", &case_choice);

        switch (case_choice)
        {
        case 1:
            if (b != 0)
            {
                printf("Result of division (quotient): %.2lf\n", a / b);
            }
            else
            {
                printf("Error: Division by zero!\n");
            }
            break;
        case 2:
            if (b != 0)
            {
                printf("Result of division (remainder): %.2lf\n", fmod(a, b));
            }
            else
            {
                printf("Error: Division by zero!\n");
            }
            break;
        default:
            printf("Invalid choice!\n");
        }
        break;
    default:
        printf("Invalid choice!\n");
    }

    return 0;
}

