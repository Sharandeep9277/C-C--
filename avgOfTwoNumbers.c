/*Write a program in c to calculate the average of two
numbers. Also print their deviation*/

#include<stdio.h>

int main()
{
    float x,y,avg, dev,dev2;
    
    printf("Enter The First Number\n");
    scanf("%f", &x);

    printf("Enter The First Number\n");
    scanf("%f",&y);

    avg = (x+y)/2;
    dev = (x-avg);
    dev2 =(y-avg);

    printf("Average Of Two Numbers is %f\n",avg);
    printf("Deviation Of Two Numbers is %f,%f\n", dev,dev2);

    return 0;
}
