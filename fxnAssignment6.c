#include<stdio.h>
#include<math.h>
int fac(int);

int main()
{
    int n,i;
    float cal;
    printf("Enter the n th term of the series\n");
    scanf("%d",&n);

    for (i=1;i<=n;i++)
    {
        cal += pow(i,i)/fac(i);
    }
    printf("Sum of the series is %f",cal);
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