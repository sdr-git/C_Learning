#define _CRT_SECURE_NO_WARNINGS
#define PI 3.14159
#include<stdio.h>
int main(void)
{
	int r;
	double S, C;
	scanf("%d", &r);
	C = 2 * PI * r;
	S = PI * r * r;
	printf("%.2lf %.2lf", C, S);
	return 0;

}