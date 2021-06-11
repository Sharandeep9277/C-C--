#include<stdio.h>
int main()
{
    int r,x,c;
    printf("Enter the number of rows\n");
    scanf("%d",&r);

    for (c=1;c<=r;c++)
    {
        for(x=1;x<=c;x++)
        {
            printf("%d",x);
        }
        printf("\n");
    }
}