//Author: SHOKANTA ROY
//linkedin: https://www.linkedin.com/in/shokanta-roy-746387255/
//github: https://github.com/Shokanta-Roy/


#include <stdio.h>

int main()
{
    float number1, number2, result;
    char operator;

    // Input the expression from the user
    scanf("%f %c %f", &number1, &operator, &number2);

    // Perform the operation based on the operator
    if(operator=='+')
    {
        result = number1 + number2;
        printf("Summation: %.2f\n", result);
    }
    else if(operator=='-')
    {
        result = number1 - number2;
        printf("Subtraction: %.2f\n", result);
    }
    else if(operator=='*')
    {
        result = number1 * number2;
        printf("Multiplication: %.2f\n", result);
    }
    else if(operator=='/')
    {
        if (number2 != 0)
        {
            result = number1 / number2;
            printf("Division: %.2f\n", result);
        }
        else
        {
            printf("Zero as divisor is not valid!\n");
            return 0; // Exit with error code
        }
    }


    return 0;
}





//#include <stdio.h>
//
//int main()
//{
//    float number1, number2, result;
//    char operator;
//
//    // Input the expression from the user
//    scanf("%f %c %f", &number1, &operator, &number2);
//
//    // Perform the operation based on the operator
//    switch (operator)
//    {
//    case '+':
//        result = number1 + number2;
//        printf("Summation: %.2f\n", result);
//        break;
//    case '-':
//        result = number1 - number2;
//        printf("Subtraction: %.2f\n", result);
//        break;
//    case '*':
//        result = number1 * number2;
//        printf("Multiplication: %.2f\n", result);
//        break;
//    case '/':
//        // Check if number2 is non-zero before division
//        if (number2 != 0)
//        {
//            result = number1 / number2;
//            printf("Division: %.2f\n", result);
//        }
//        else
//        {
//            printf("Zero as divisor is not valid!1\n");
//            return 0; // Exit with error code
//        }
//        break;
//    default:
//        printf("Invalid operator\n");
//        return 0; // Exit with error code
//    }
//
//    return 0;
//}
//
