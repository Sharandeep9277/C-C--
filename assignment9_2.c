//write a program to find the biggest of three int
#include <stdio.h>
void bign(int,int,int,int *);

int main()
{
    int x,y,z,bigNumber;
    printf("Enter num1 \n");
    scanf("%d",&x);
    printf("Enter num2 \n");
    scanf("%d",&y);
    printf("Enter num3 \n");
    scanf("%d",&z);
    bign(x,y,z,&bigNumber);
    printf("the biggest number is %d",bigNumber);
    

}
void bign(int a, int b, int c, int *big)
{
    if (a>b && a>c)
    {
        *big = a;
    }
    else if (b>a && b>c)
    {
        *big = b;
    }
    else
    {
        *big = c;
    }
    
    
}