#include<stdio.h>
int fac(int);

int main()
{
    int y;
    printf("Enter the number\n");
    scanf("%d",&y);
    printf("The %d! is %d",y,fac(y));
    
}
int fac(int x)
{
    int i,fact=1;
    for(i=1;i<=x;i++)
    {
        fact *= i;
    }
    return fact;
}