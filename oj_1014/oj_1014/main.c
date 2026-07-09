#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main(void)
{
	double a, b, c;
	double l,S;
	scanf("%lf %lf %lf", &a, &b, &c);
	l = (a + b + c) / 2.0;
	S = sqrt(l * (l - a) * (l - b) * (l - c));
	printf("%.2lf", S);
	return 0;
}