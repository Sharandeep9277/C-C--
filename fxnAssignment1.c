#include<stdio.h>
void swap(int a,int b);

int main()
{
    int x,y;
    printf("Enter number 1\n");
    scanf("%d",&x);
    printf("Enter number 2\n");
    scanf("%d",&y);

    swap(x,y);
    
    return 0;

}

void swap(int a, int b)
{
    int c;
    c = a;
    a = b;
    b = c;
    printf("new value of num 1 is %d\n",a);
    printf("new value of num 2 is %d\n",b);

}