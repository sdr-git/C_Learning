#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	int m, n;
	int j,t;
	scanf("%d %d;", &m, &n);
	t = (n - 2 * m) / 2;
	j = m - (n - 2 * m) / 2;
	printf("%d %d", j, t);
	return 0;
}