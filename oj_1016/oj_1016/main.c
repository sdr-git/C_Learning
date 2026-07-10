#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	int year,i;
	double money,deposit;
	scanf("%d %lf", &year, &deposit);
	money = deposit;
	for (i = 0;i < year;i++)
	{
		money *= 1.0225;//money=money*1.0225 
	}
	printf("%.6lf", money);
	return 0;
}