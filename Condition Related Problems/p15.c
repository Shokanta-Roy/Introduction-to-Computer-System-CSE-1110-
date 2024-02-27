//Author: SHOKANTA ROY
//linkedin: https://www.linkedin.com/in/shokanta-roy-746387255/
//github: https://github.com/Shokanta-Roy/


#include <stdio.h>

int main()
{
    int X, guess, N = 3;
    int flag = 0;

    // Player 1 picks a number
    scanf("%d", &X);

    // First try
    scanf("%d", &guess);
    if (guess == X)
    {
        printf("Right, Player-2 wins!\n");
        flag = 1;
    }
    else
    {
        N--;
        printf("Wrong, %d Chance(s) Left!\n", N);
    }

    // Second try
    if (!flag)
    {
        scanf("%d", &guess);
        if (guess == X)
        {
            printf("Right, Player-2 wins!\n");
            flag = 1;
        }
        else
        {
            N--;
            printf("Wrong, %d Chance(s) Left!\n", N);
        }
    }

    // Third try
    if (!flag)
    {
        scanf("%d", &guess);
        if (guess == X)
        {
            printf("Right, Player-2 wins!\n");
        }
        else
        {
            printf("Player-1 wins!\n");
        }
    }

    return 0;
}
