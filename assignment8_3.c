//Write a program to calculate exp(x,y) using recursive functions.
#include <stdio.h>
int expo(int,int);

int main()
{
    int x,y;
    printf("Enter the value of x \n");
    scanf("%d",&x);
    printf("Enter the value of y \n");
    scanf("%d",&y);

    printf("%d^%d is %d",x,y,expo(x,y));
    
}
int expo(int x, int y) 
{
    if (y != 0)
    {
        return (x * expo(x, y - 1));
    }
        
    else
    {
        return 1;
    }
        
}