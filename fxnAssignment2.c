#include<stdio.h>
#include<math.h>
float area(int);

int main()
{
    int x;
    printf("Enter the radius\n");
    scanf("%d",&x);
    printf("The area of the circle is %f",area(x));

}

float area(int r)
{
    float area;
    area = M_PI * pow(r,2);
    return area;
}