//Author: SHOKANTA ROY
//linkedin: https://www.linkedin.com/in/shokanta-roy-746387255/
//github: https://github.com/Shokanta-Roy/


#include<stdio.h>

int main()
{
    int a,b,c,X,Y,Z;
    scanf("%d%d%d",&a,&b,&c);
    X = a - b / 3 + c * 2 - 1;
    Y = a - ( b / ( 3 + c ) * 2) - 1;
    Z = a - ( ( b / 3) + c * 2) - 1;

    printf("X=%d\nY=%d\nZ=%d",X,Y,Z);

    return 0;
}
