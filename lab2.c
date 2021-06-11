/* write a program to find wheather a given year is leap year or not */
#include<stdio.h>
int main() 
{
    int year;
    printf("Enter a year\n");
    scanf("%d", &year);
    if (year % 4 == 0 && ( year % 400 == 0 || year % 100 != 0))
    {
        printf("The year is leap year");
    }
    else
    {
        printf("The year is not a leap year");
    }
    return 0;
}