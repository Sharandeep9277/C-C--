/* Write a program to reverse a given string without using
strrev(s1) function. */

#include <stdio.h>
int main()
{
    char original[100], reversed[100];
    int i, j, count = 0;
    
    gets(original);
    printf("\nString Before Reverse: %s", original);
    
    while (original[count] != '\0')
    {
        count++;
    }
    j = count - 1;
    
    for (i = 0; i < count; i++)
    {
        reversed[i] = original[j];
        j--;
    }

    printf("\nString After Reversed: %s", reversed);
    fflush(stdin);
};
