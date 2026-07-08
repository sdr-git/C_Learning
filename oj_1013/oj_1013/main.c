#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main(void)
{
	double x1,y1,x2,y2,d;
	scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
	d = (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1);
	printf("%.2lf", sqrt(d));
	return 0;
}