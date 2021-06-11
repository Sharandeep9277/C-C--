/* write a program to findd greatest of three numbers */
#include<stdio.h>
int main() 
{
    int x,y,z;
    printf("Enter 3 numbers using space\n");
    scanf("%d %d %d",&x,&y,&z);
    
    if(x>y && x>z) 
    printf("First Number is Greatest");
    else if(y>x && y>z)
    printf("2nd number is Greatest");
    else
    printf("3rd number is Greatest");
    
    return 0;
}