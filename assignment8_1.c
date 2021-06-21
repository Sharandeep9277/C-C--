//calculate the factorial of a number using recursive function calling
#include <stdio.h>
int factorial(int);

int main()
{
    int x;
    printf("Enter a number \n");
    scanf("%d",&x);

    printf("%d! is %d\t",x,factorial(x));
}
int factorial(int a)
{
    if (a == 1)
    {
        return a;
    }
    else 
    {
        return (a * factorial(a-1));
    }
}