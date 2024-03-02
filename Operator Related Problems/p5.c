//Author: SHOKANTA ROY
//linkedin: https://www.linkedin.com/in/shokanta-roy-746387255/
//github: https://github.com/Shokanta-Roy/


//Here can be some problem in sample input-output.
//You can skip the sample input-output part.
#include <stdio.h>

int main() {
    int X, Y;

    // Input X and Y from the user
    scanf("%d%d", &X,&Y);


    // Increment X by Y
    X += Y;
    printf("Incremented value: %d\n", X);

    // Decrement X by Y
    X -= Y;
    printf("Decremented value: %d\n", X);

    return 0;
}
