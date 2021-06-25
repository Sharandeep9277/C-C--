//white a programme to find the mean number of n number using array
#include <stdio.h>

int main()
{
    int n,numList[n],i;
    float sum=0, mean = 0;
    printf("Enter the range of the array \n");
    scanf("%d",&n);
    for ( i = 1; i <= n; i++)
    {
        printf("Enter the number \n");
        scanf("%d",&numList[i]);
    }
    for ( i = 1; i <= n; i++)
    {
        sum += numList[i];
        mean = sum / n ;
    }
    printf("The mean of the numbers are %0.3f",mean);
    return 0;
    
}