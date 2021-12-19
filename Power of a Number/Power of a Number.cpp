#include<stdio.h>
int main()
{
	int base, exp;
	double result = 1;
	printf("Enter a base number : ");
	scanf_s("%d", &base);
	printf("Enter an exponent :");
	scanf_s("%d", &exp);
	while (exp != 0)
	{
		result = result * base;
		exp--;
	}
	printf("Power of the number %d is %.2lf",base,result);
	return 0;
}