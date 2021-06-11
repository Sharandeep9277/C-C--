#include <stdio.h>

int main()
{
  int t, n, i;
  scanf("%d", &t);
  
  for(i=t; i>0; --i){
  scanf("%d", &n);
  int count=0;
  if (n % 10 == 5)
			count++;
    n = n / 10;
	  
  printf("%d", count);
  printf("\n");
  }
  return 0;
}