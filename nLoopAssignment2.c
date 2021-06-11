#include<stdio.h>
int main()
{
    int i,x,y,gcd;
    printf("Enter first number\n");
    scanf("%d",&x);
    printf("Enter secound number\n");
    scanf("%d",&y);
    for(i=1;i<=x && i<= y;i++)
    {
        if (x%i == 0 && y%i == 0)
        {
            gcd = i;
        }
    }
    printf("GCD of two numbers are %d",gcd);
}