#define _CRT_SECURE_NO_WARNINGS//scanf存在必须需要
//宏定义在#include前面，宏的作用就是告诉头文件“请按这种方式编译”。如果头文件已经包含完了，再定义这些宏就已经不起作用了。
#include<stdio.h>
int main(void)
{
	int a,b;
	scanf("%d %d",&a,&b);
	printf("%d", a + b);
	return 0;
}