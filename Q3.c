#include<stdio.h>
#include<math.h>


int main()
{
    float v,a,g=9.8,th=0,tt=0,th2=0;

    printf("enter the initial velocity\n");
    scanf("%f",&v);
    printf("Enter the angle\n");
    scanf("%f",&a);

    th = v * ((float)(sin((double)a))/g);
    tt = 2 * th;
    th2 = pow(v,2) * ((float)(sin((double)a))/g);

    printf("Time taken to highest point is %.2f\n",th);
    printf("Total time of flight is %.2f\n",tt);
    printf("maximum hight is %.2f\n",th2);
    return 0;

}