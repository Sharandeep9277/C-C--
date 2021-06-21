#include <stdio.h>
#include<math.h>

int main()
{
    int x = 100;
    int *y ;
    y = &x; 
    printf("%d\n",x);
    printf("%d\n",&x);
    printf("%d\n",&y);
    printf("%d\n",*y);
    printf("%f\n",sinf(x));
}