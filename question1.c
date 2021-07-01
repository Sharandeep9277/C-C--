/* Given a point (x,y),write a programm to find out weather it lies inside,outside or on a circle with unit radius and center at (0,0) */
#include <stdio.h>  
#include <math.h>  
  
int main()  
{  
    float rad, x, y, dis;  
  
    printf("Enter radius of the circle\n");  
    scanf("%f", &rad);  
  
    printf("Enter the point(x,y) separated by a comma \n");  
    scanf("%f,%f", &x, &y);  
  
    dis = sqrt( pow( (x - 0.0), 2 ) + pow( (y - 0.0), 2 ) );  
  
    if(dis < rad)  
    {  
        printf("Point (%0.2f, %0.2f) is inside the Circle\n", x, y);  
    }  
    else if(dis > rad)  
    {  
        printf("Point (%0.1f, %0.1f) is outside the Circle\n", x, y);  
    }  
    else  
    {  
        printf("Point (%0.1f, %0.1f) is on the Circle\n", x, y);  
    }  
  
    return 0;  
}  