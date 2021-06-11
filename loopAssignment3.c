#include <stdio.h> 
int main()
 { 
     int x,j;
     printf("Enter the number of rows\n");
    scanf("%d", &x);

	for(int i = 1; i < x+1; i++) { 
		for(int j = 0; j < i; j++) { 
			printf("%d", i); 
		} 
		printf("\n"); 
	} 
 
	return 0; 
} 
