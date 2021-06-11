#include<stdio.h>
int fact(int);

int main()
{
    int n,r,nCr;
    printf("Enter n\n");
    scanf("%d",&n);
    printf("Enter r\n");
    scanf("%d",&r);
    nCr = fact(n)/(fact(r) * fact(n-r));
    printf("nCr = %d",nCr);
    return 0;
}

int fact(int x)
{
    //x = n
    int i,fact=1;
    for(i=1;i<=x;i++)
    {
        fact *= i;
    }
    return fact;
}
