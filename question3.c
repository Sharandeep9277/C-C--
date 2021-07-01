/* Write a program to accpect 100 values one by one,and calculate and print (a)aversge of all prositive values (b)average of all odd numbers */
#include <stdio.h>

int main()
{
    int i,x,sumPos=0,sumNeg=0,posCount=0,negCount=0;
    printf("Enter the numbers one by one \n");
    for (i = 1; i <= 100; i++)
    {
        printf(">");
        scanf("%d", &x);
        if (x%2 == 0)
        {
            sumPos += x;
            posCount ++;
        }
        else
        {
            negCount += x;
            negCount ++;
        }  
    }
    printf("(a)average of all prositive values are %d\n",sumPos/posCount);
    printf("(b)average of all odd numbers are %d",sumPos/negCount);
}