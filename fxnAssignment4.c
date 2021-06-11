#include<stdio.h>
int fact(int);

int main()
{
    int n,r,nPr;
    printf("Enter n\n");
    scanf("%d",&n);
    printf("Enter r\n");
    scanf("%d",&r);
    nPr = fact(n)/fact(n-r);
    printf("nPr = %d",nPr);
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

