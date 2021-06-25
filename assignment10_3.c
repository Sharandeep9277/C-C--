//write a programme to print te position of the smallest of n numbers using array
#include <stdio.h>

int main()
{
    int n,numList[n],i;
    printf("Enter the range of the array \n");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        printf("Enter the number \n");
        scanf("%d",&numList[i]);
    }

    int smallVal = numList[0];
    int posSmall = 0;
    for ( i = 0; i < n; i++)
    {
        if (smallVal > numList[i])
        {
            smallVal = numList[i];
            posSmall = i;
        }
        else
        {
            continue;
        }
        
    }
    printf("the smallest number position is %d",posSmall + 1);
}