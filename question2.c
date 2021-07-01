/* Given a point (x,y),write a program to find out weather it lies on the x axis,y axis , origin, first quadrant,secound quadrant,third quadrant or fourth */
#include <stdio.h>

int main()
{
    int x,y;
    printf("Enter the x and y coordinates separated by a comma \n");
    scanf("%d,%d",&x,&y);
    if (x == 0 && y == 0)
    {
        printf("Origin");
    }
    else if (x == 0 )
    {
        printf("x axis");
    }
    else if ( y == 0)
    {
        printf("y axiz");
    }
    else if (x > 0 && y > 0)
    {
        printf("first quardent");
    }
     else if (x < 0 && y > 0)
    {
        printf("secound quardent");
    }
     else if (x < 0 && y < 0)
    {
        printf("third quardent");
    }
    else if (x > 0 && y < 0)
    {
        printf("fourth quardent");
    }
  
}