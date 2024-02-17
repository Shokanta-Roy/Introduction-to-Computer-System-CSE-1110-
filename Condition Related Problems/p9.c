//Author: SHOKANTA ROY
//linkedin: https://www.linkedin.com/in/shokanta-roy-746387255/
//github: https://github.com/Shokanta-Roy/


#include <stdio.h>


int main()
{
    char ch;
    scanf("%c",&ch);
    if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
    {
        printf("Alphabet \n");
    }
    else if(ch>='0' && ch<='9')
    {
        printf("Digit \n");
    }
    else
    {
        printf("Special\n");
    }

    return 0;
}

