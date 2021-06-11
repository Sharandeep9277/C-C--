#include <stdio.h>

int main()
{
    int columns, num, row;

    printf("Enter the number of rows\n");
    scanf("%d", &row);

    for(columns=1; columns<=row; columns++)
    {
        
        for(num=1; num<=columns; num++)
        {
            printf("%d", num);
        }

        printf("\n");
    }

    return 0;
}