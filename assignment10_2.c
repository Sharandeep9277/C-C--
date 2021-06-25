// write a programme to find the largest number using array
#include <stdio.h>

int main()
{
    int n,numList[n],i,max =0;
    printf("Enter the range of the array \n");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        printf("Enter the number \n");
        scanf("%d",&numList[i]);
    }
    for ( i = 0; i < n; i++)
    {
        if (max < numList[i])
        {
            max = numList[i];
        }
        else
        {
            continue;
        }
        
    }
    printf("the largest number is %d",max);
}