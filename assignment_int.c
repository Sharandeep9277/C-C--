/*Write a program in c to perform addition, subtraction,
integer division, multiplication and modulo division on
two integer numbers.*/

#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter Int Number a\n");
    scanf("%d", &a);

    printf("Enter Int Number b\n");
    scanf("%d", &b);
    printf("The addition is %d\n", a+b);
    printf("The subtraction is %d\n", a-b);
    printf("The multiplication is %d\n", a*b);
    printf("The division is %f\n", (float)a/b);
   
    return 0;
}
