/* Write a program to calculate the area of a triangle using a
function name (user defined) cal_area and read the data from
user using function read_data (user defined). Both the
functions will be called from main() and print the result from
main() also. */

#include <stdio.h>
void cal_area(int *,int *,int *);
void read_data(int *,int *);

int main()
{
    int x,y,cal;
    read_data(&x,&y);
    cal_area(&x,&y,&cal);
    printf("the area of the triangle is %d",cal);
}
void cal_area(int *x,int *y,int *cal)
{
    *cal = (*x * *y)/2;
}
void read_data(int *a,int *b)
{
    
    printf("Enter the hight of the triangle \n");
    scanf("%d",a);
    printf("Enter the base of the triangle \n");
    scanf("%d",b);   
}