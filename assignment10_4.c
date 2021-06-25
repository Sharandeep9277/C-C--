// write a program to find the secound biggest number using an array of n numbers
#include <stdio.h>

int main()
{
    int n, numList[n], i,j, max = 0, max2 = 0,temp;
    printf("Enter the range of the array \n");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter the number \n");
        scanf("%d", &numList[i]);
    }
     for (int i = 0; i < n; i++) {     
        for (int j = i+1; j < n; j++) {     
           if(numList[i] > numList[j]) {    
               temp = numList[i];    
               numList[i] = numList[j];    
               numList[j] = temp;    
           }     
        }     
    }    
    
    printf("the 2nd largest number is %d",numList[n-2]);
}