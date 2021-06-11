#include<stdio.h>
int main()
{
    int x,i,count = 0;
    printf("Enter a number\n");
    scanf("%d",&x);

    for (i=2;i<=x/2;i++)
    {
        if(x%i == 0)
        {
            count = count + 1;
            break;
        }
    }  
    if (count == 0)
    {
        printf("It's a prime number");
    }
    else 
    {
        printf("It's a composite number");
    }
    return 0;

}