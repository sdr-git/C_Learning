#oj1001
##题目：计算两个整数a, b的和
##遇到的问题
#scanf报错警告
软认为 scanf 容易造成缓冲区溢出，于是推荐scanf_s();
如果要用scanf就需要增加一个宏定义#define _CRT_SECURE_NO_WARNINGS

并且宏定义要在#include<stdio.h>前面
宏的作用就是告诉头文件“请按这种方式编译”。如果头文件已经包含完了，再定义这些宏就已经不起作用了。