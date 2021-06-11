/*write a programme in c to swap 2 veriables using a temporary veriable*/
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter first variable\n");
    scanf("%d",&a);
    printf("Enter first variable\n");
    scanf("%d",&b);
    printf("Two Veriable Values are %d,%d\n",a,b);
    printf("Swapping 2 Veriables...\n");
    c = a;
    a = b;
    b = c;
    printf("Now two veriables are %d,%d\n",a,b);
    return 0;
}