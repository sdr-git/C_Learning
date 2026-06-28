#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	int a;
	int  x, y, z;
	scanf("%d", &a);
	x = a / 100;
	y = (a / 10) % 10;
	z = a % 10;
	printf("%d %d %d\n", z, y, x);
	return 0;
}