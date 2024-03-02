//Author: SHOKANTA ROY
//linkedin: https://www.linkedin.com/in/shokanta-roy-746387255/
//github: https://github.com/Shokanta-Roy/



#include <stdio.h>

int main()
{
    int X, Y;
    scanf("%d%d", &X,&Y);

    // Multiply X by Y
    X *= Y;
    printf("Multiplication Value: %d\n", X);

    // Check if Y is not zero to avoid division by zero error
    if (Y != 0)
    {
        // Divide X by Y
        //X /= Y;
        X=X/Y;
        printf("Division: %d\n", X);
    }
    else
    {
        printf("Cannot divide by zero.\n");
    }

    return 0;
}
