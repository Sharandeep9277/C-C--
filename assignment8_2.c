
//write a program to calculate GCD using recursive functions
#include <stdio.h>
int gcd(int,int);

int main()
{
    int x,y;
    printf("Enter a number \n");
    scanf("%d",&x);
    printf("Enter 2nd number \n");
    scanf("%d",&y);
    printf("the GCD of number %d and %d is %d",x,y,gcd(x,y));

}
int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    else
    {
        return gcd(b, (a % b) );
    }
}