//add three int data
#include <stdio.h>
void add(int ,int ,int ,int *);

int main()
{
    int x,y,z,sum;
    printf("Enter num1 \n");
    scanf("%d",&x);
    printf("Enter num2 \n");
    scanf("%d",&y);
    printf("Enter num3 \n");
    scanf("%d",&z);
    add(x,y,z,&sum);
    printf("the sum of the numbers is %d",sum);
    return 0;


}
void add(int a,int b, int c, int *s)
{
   *s = a + b + c;
}