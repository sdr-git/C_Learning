#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	double a;
	scanf("%lf", &a);
	if (a > 0)
	{
		a = a;
	}
	else
	{
		a = -a;
	}
	printf("%.2lf",a);
	return 0;
}