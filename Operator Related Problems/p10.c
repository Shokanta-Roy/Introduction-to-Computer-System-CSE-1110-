//Author: SHOKANTA ROY
//linkedin: https://www.linkedin.com/in/shokanta-roy-746387255/
//github: https://github.com/Shokanta-Roy/


#include <stdio.h>

int main() {
    int a, b, c;

    // Input values of a, b, and c from the user
    scanf("%d%d%d", &a,&b ,&c);

    // Statement a: (a + b) ≤ 80
    int statement_a = (a + b) <= 80;

    // Statement b: ! (a + c)
    int statement_b = !(a + c);

    // Statement c: a != 0
    int statement_c = (a != 0);

    // Output the result of each statement
    printf("a) %d\n", statement_a ? 1 : 0);
    printf("b) %d\n", statement_b ? 1 : 0);
    printf("c) %d\n", statement_c ? 1: 0);

    return 0;
}
