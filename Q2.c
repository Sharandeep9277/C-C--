#include<stdio.h>
#include<math.h>
float formula(float,float);

int main()
{
    float l=0,a=0;

    printf("enter the length of the pendulum(l)\n");
    scanf("%f",&l);
    printf("Enter the angle of displacemnt(a)\n");
    scanf("%f",&a);
    printf("the length is %0.2f\n",l);
    printf("the angle of displacemnt is %0.2f\n",a);
    printf("the period of pendulum is %0.2f",formula(l,a));
    return 0;
    
}
float formula(float l, float a)
{
    float P=0,ran=0,g = 9.8;
    ran = (l/g) * (1 + ((0.25)*(pow((float)(sin((double)a/2)),2))));
    P = 2 * M_PI * ((float)sqrt((double)ran));
    return P;
}