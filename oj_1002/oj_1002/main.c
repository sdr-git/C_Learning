#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	int x, y;
	scanf("%d", &x);
	printf("%d", y = 2 * x * x + x + 8);
	return 0;
}