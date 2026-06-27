#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	int num1, num2;
	int sum, difference, product, quotient,remainder;
	scanf("%d %d", &num1, &num2);
	sum = num1 + num2;
	difference = num1 - num2;
	product = num1 * num2;
	quotient = num1 / num2;
	remainder = num1 % num2;
	printf("%d %d %d %d %d\n", sum, difference, product, quotient, remainder);
	return 0;

}