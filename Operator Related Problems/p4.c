////Author: SHOKANTA ROY
////linkedin: https://www.linkedin.com/in/shokanta-roy-746387255/
////github: https://github.com/Shokanta-Roy/


//Here can be some problem in sample input-output.
//You can skip the sample input-output part.

#include <stdio.h>

int main() {
    int X;

    printf("Enter the value of X: ");
    scanf("%d", &X);

    // Post-increment X by 1 and print
    printf("X++ : %d\n", X++);

    // Pre-increment X by 1 and print
    printf("++X : %d\n", ++X);

    // Post-decrement X by 1 and print
    printf("X-- : %d\n", X--);

    // Pre-decrement X by 1 and print
    printf("--X : %d\n", --X);

    return 0;
}
