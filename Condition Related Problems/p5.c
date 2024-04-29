//Author: SHOKANTA ROY
//linkedin: https://www.linkedin.com/in/shokanta-roy-746387255/
//github: https://github.com/Shokanta-Roy/


#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);

    if (num <= 0)
    {
        printf("Invalid input.");
        return 0;
    }
    else if (num > 0)
    {
        while (num % 2 == 0)
        {
            num /= 2;
        }
        if (num == 1)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }

////    // Check if the number is a power of 2
////    //We use the bitwise AND operation num & (num - 1) to check if the number is a power of 2.
////    //If the result is zero, it means that the number is a power of 2.
////    //This is because powers of 2 have only one bit set, and subtracting 1 from a power of 2 flips all the bits to the right of the least significant bit (LSB), leaving the LSB unchanged.
////    //Thus, performing a bitwise AND with the original number results in zero.
////    if ((num & (num - 1)) == 0)
////        printf("Yes\n", num);
////    else
////        printf("No\n", num);

    return 0;
}




//Here is another approach.
//#include <stdio.h>
//
//int main()
//{
//    int num;
//    scanf("%d", &num);
//
//    if (num <= 0)
//    {
//        printf("Invalid input.");
//        return 1;
//    }
//
//    while (num > 1)
//    {
//        if (num % 2 != 0)
//        {
//            printf("No", num);
//            return 0;
//        }
//        num /= 2;
//    }
//
//    printf("Yes", num);
//
//    return 0;
//}
