#include<stdio.h>
#include<math.h>
int main()
{
    int x,i;
    float cal =0;
    printf("Enter a number\n");
    scanf("%d",&x);
    for (i=2;i<=x;i++)
    {
        cal += 1/(pow(i,2));
    }
    printf("calculation of the series is %f",cal);

}