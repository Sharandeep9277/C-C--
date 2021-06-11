#include<stdio.h>
#include<math.h>
int main()
{
	int num,temp,rem,sum=0,n=0;
	printf("enter a value : ");
	scanf("%d",&num);
	
	temp=num;
	
	while(temp!=0)
	{
		temp=temp/10;
		n++;
	}
	temp=num;
	while(temp!=0)
	{
		rem = temp%10;
		sum += (pow(rem,n));
		temp = temp/10;
	}
	if(sum==num)
	{
		printf("%d is an  armstrong number",num);
	}
	else
	{
		printf("%d is not an armstrong number",num);
	}
	return 0;
}
