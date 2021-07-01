/* Write a programme to compute the value of euler's number e that is used as the base of natural algorithm. Use the formula 
e = 1 + 1/1! + 1/2! + 1/3! ......
The loop must terminate when the difference between two successive values of e is less then 0.00001 */
#include <stdio.h>
int main()
{
	double term = 1.0;
	double sum = 1.0;
	int n = 0;
	while (term >= 0.0000001)
	{
		n++;
		term = term/n;
		sum = sum + term;
	}
	printf("\n Approximate value of e is: %lf ",sum);
	return 0;
}