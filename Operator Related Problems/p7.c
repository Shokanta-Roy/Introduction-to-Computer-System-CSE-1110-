//Author: SHOKANTA ROY
//linkedin: https://www.linkedin.com/in/shokanta-roy-746387255/
//github: https://github.com/Shokanta-Roy/


#include <stdio.h>

int main()
{
    int integer_number;
    float floating_number;
    scanf("%d",&integer_number);
    scanf("%f",&floating_number);

    // Floating to integer using assignment
    int float_to_int_assignment = floating_number;
    printf("Assignment: %.6f assigned to an int produces %d\n", floating_number, float_to_int_assignment);

    // Integer to floating using assignment
    float int_to_float_assignment = integer_number;
    printf("Assignment: %d assigned to a float produces %.6f\n", integer_number, int_to_float_assignment);

    // Integer to floating using type casting
    float int_to_float_casting = (float) integer_number;
    printf("Type Casting: (int) %d produces %.6f\n", integer_number, int_to_float_casting);

    // Floating to integer using type casting
    int float_to_int_casting = (int) floating_number;
    printf("Type Casting: (float) %.6f produces %d\n", floating_number, float_to_int_casting);



    return 0;
}
