#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	int a, b, d;
	int s, n;
	scanf("%d %d %d", &a, &b, &d);
	n = (b - a) / d+ 1;
	s = n*(a + b) / 2;
	printf("%d", s);
	return 0;
}