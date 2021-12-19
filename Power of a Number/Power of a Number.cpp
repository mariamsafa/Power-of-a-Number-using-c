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

//power of a number using pow function
/*
#include<stdio.h>
#include<math.h>
int main()
{
	int base, exp;
	double result ;
	printf("Enter a base number : ");
	scanf_s("%d", &base);
	printf("Enter an exponent :");
	scanf_s("%d", &exp);
	result = pow(base, exp);
	printf("%d^%d = %.2lf", base, exp, result);
	return 0;
}
*/