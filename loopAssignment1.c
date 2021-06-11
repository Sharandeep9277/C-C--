/* Write a program to calculate the sum of numbers from m to n
using while loop.*/

#include<stdio.h>
int main()
{
    int m,n;
    int sum = 0;

    printf("Enter lower number\n");
    scanf("%d", &m);
    printf("Enter Higher number\n");
    scanf("%d", &n);

    while (m <= n) {
        sum = sum + m;
        m++;
    }
    printf("the sum is %d",sum);
    return 0;

    
}