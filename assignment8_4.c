//Write a program to print the Fibonacci series using recursion.
#include <stdio.h>
int fib(int);

int main()
{
    int x,i;
    printf("Enter the range \n");
    scanf("%d",&x);
    printf("0\n");

   for(i=0;i<x;i++)
    {
       printf("%d\n",fib(i));
    } 
    
}
int fib(int a)
{
    if (a<2)
    {
        return 1;
    }
    else
    {
        return  fib(a-2) + fib(a-1);
    }
}