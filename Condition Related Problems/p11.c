//Author: SHOKANTA ROY
//linkedin: https://www.linkedin.com/in/shokanta-roy-746387255/
//github: https://github.com/Shokanta-Roy/


#include <stdio.h>

int main()
{
    float score;

    // Input the final score
    scanf("%f", &score);

    // Determine the grade based on the score
    char grade;
    if (score >= 90 && score <= 100)
    {
        printf("A");
    }
    else if (score >= 86 && score <= 89)
    {
        printf("A-");
    }
    else if (score >= 82 && score <= 85)
    {
        printf("B+");
    }
    else if (score >= 78 && score <= 81)
    {
        printf("B");
    }
    else if (score >= 74 && score <= 77)
    {
        printf("B-");
    }
    else if (score >= 70 && score <= 73)
    {
        printf("C+");
    }
    else if (score >= 66 && score <= 69)
    {
        printf("C");
    }
    else if (score >= 62 && score <= 65)
    {
        printf("C-");
    }
    else if (score >= 58 && score <= 61)
    {
        printf("D+");
    }
    else if (score >= 55 && score <= 57)
    {
        printf("D");
    }
    else
    {
        printf("F");
    }

    return 0;
}
