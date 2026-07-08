#define _CRT_SECURE_NO_WARNINGS
#define PI 3.14159
#include<stdio.h>
int main(void)
{
	float r, h;
	double S;
	scanf("%f %f", &r, &h);
	S = 2 * PI * r * r + 2 * PI * r * h;
	printf("%.2lf", S);
	return 0;
}