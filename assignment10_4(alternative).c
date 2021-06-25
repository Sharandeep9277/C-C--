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

    int largeVal = numList[0];
    int posL = 0,max2=0,max=0;
    for ( i = 0; i < n; i++)
    {
        for ( i = 0; i < n; i++)
    {
        if (max < numList[i])
        {
            max = numList[i];
            posL = i;

        }
        else
        {
            continue;
        }
        
    }
    }
    for ( i = 0; i < n; i++)
    {
        if (numList[posL] == numList[i])
        {
            continue;
        }
        else if (max2 < numList[i])
        {
            max2 = numList[i];
        }
        
        
    }
    printf("the 2nd largest num is %d",max2);
}