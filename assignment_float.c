/*Write a program in c to perform addition, subtraction,
integer division, multiplication and modulo division on
two floating point numbers.*/

#include <stdio.h>
int main()
{
    float a,b;
    printf("Enter Float Number a\n");
    scanf("%f", &a);

    printf("Enter Float Number b\n");
    scanf("%f", &b);
    printf("The addition is %f\n", a+b);
    printf("The subtraction is %f\n", a-b);
    printf("The multiplication is %f\n", a*b);
    printf("The division is %f\n", a/b);
   
    return 0;
    
}