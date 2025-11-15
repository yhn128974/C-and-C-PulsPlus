#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//1.求1 + 2 + 3 + ... + n 的值，其中n 由用户输入。
//考查循环相关知识。用for 循环，while 循环，
//do...while 循环均可编写程序。
//void main() {
//	int n;
//	int sum = 0;
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++)
//	{
//		sum += i;
//	}
//	printf("sum=%d\n", sum);
//
//}
// 
// 
//计算 s = 1 - 1 / 3 + 1 / 5 - 1 / 7 + …1 / 101 的值并输出
//考查循环相关知识。用for 循环，while 循环，
//do...while 循环均可编写程序
//void main() {
//	float sum = 0;
//	int j = 1;
//	for (int i = 1; i <= 101; i += 2) {
//		sum += (float)j / i;
//		j = -1 * j;
//	}
//	printf("sum=%f", sum);
//}


//3.编写程序求出 555555 的约数中最大的三位
//数是多少。 要求必须使用 do - while 语句实现。
//考查do...while 循环。
//do - while 语句实现。
//void main() {
//	int n = 100;
//	int x = 555555;
//	int max = 0;
//	do {
//		if (x % n == 0)
//		{
//			max = n;
//		}
//		n++;
//	} while (n < 1000);
//	printf("max=%d", max);
//
//}


