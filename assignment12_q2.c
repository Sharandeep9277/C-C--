/* Write a program to input two m x n matrices and then
calculate the sum of their corresponding elements by using
function and pointer. (Access array elements using pointer). */
#include <stdio.h>
void readfunc(int arr[8][8], int m, int n)
{
	int i,j;
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
	   {
		scanf("%d",*(arr+i)+j);
	   }
	}
}
void subcal(int arr[8][8], int brr[8][8], int crr[8][8], int m, int n)
{
	int i,j;
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
	    {
		 *(*(crr+i)+j) = *(*(arr+i)+j)-*(*(brr+i)+j);
        }
    }
}
void printfunc(int crr[8][8], int m, int n)
{
	int i,j;
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
	    {
		printf("%d  ",*(*(crr+i)+j));
        }
        printf("\n");
    }
}
int main()
{
	int ar[8][8], br[8][8], cr[8][8], a, b; 
	printf("Enter the number of rows for both the 2D array:-\n");
	scanf("%d",&a);
	printf("Enter the number of columns for both the 2D array:-\n");
	scanf("%d",&b);
	printf("Enter the elements of first array:-\n");
	readfunc(ar,a,b);
	printf("The first array is :-\n");
	printfunc(ar,a,b);
	printf("Enter the elements of second array:-\n");
	readfunc(br,a,b);	
	printf("The second array is :-\n");
	printfunc(br,a,b);
	subcal(ar,br,cr,a,b);
    printf("The substraction of both the array elements are : \n");
	printfunc(cr,a,b);
	return 0;
}
