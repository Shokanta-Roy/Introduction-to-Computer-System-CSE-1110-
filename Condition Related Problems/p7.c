//Author: SHOKANTA ROY
//linkedin: https://www.linkedin.com/in/shokanta-roy-746387255/
//github: https://github.com/Shokanta-Roy/


#include <stdio.h>

int main()
{
    int x,y;
    scanf("%d %d",&x,&y);

    if(x==y)
    {
        printf("%d is equal to %d",x,y);
    }
    else if(x>y)
    {
        printf("%d is greater than %d",x,y);
    }
    else if(x<y)
    {
        printf("%d less than %d",x,y);
    }


    return 0;
}
