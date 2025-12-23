<<<<<<< HEAD
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<math.h>
=======
////1.下面程序的输出结果是： 将X,Y的值互换
//#include <stdio.h>
>>>>>>> d69cefcbff758ceb280363f3aeb49a2d0776ae41
//int main()
//{
//	int x, y, t;
//	x = 7; y = 9;
//	if (x < y)
//	{
//		t = x; x = y; y = t;
//	}
//	printf("%d,%d\n", x, y);
//	return 0;
//}

//
////2.下面程序的输出结果是： （迷惑题型） D=20，没有发生任何改变
//#include<stdio.h>
//int main()
//{
//	int a = 0, b = 1, c = 0, d = 20;
//	if (a) d = d - 10;
//	else if (!b)
//		if (!c) d = 15;
//		else d = 25;
//	printf("d=%d\n", d);
//	return 0;
//}
//
////3.下面程序的输出结果是：（标准格式题：不要自作聪明加一些不存在的符号） 4321
//#include <stdio.h>
//int main()
//{
//	int number, digit;
//	number = 1234;
//	while (number != 0)
//	{
//		digit = number % 10;
//		printf("%d", digit);
//		number = number / 10;
//	}
//	return 0;
//}

//4.下面程序的输出结果是：
//#include<stdio.h>
//int main()
//{
//	int i, s, x;
//	s = 0;
//	x = 15;
//	for (i = 1; i <= 5; i++)
//		if (x % i == 0)
//			s = s + i;
//	printf("i=%d,s=%d\n", i, s);
//	return 0;
//}
//运行结果：i = 6, s = 9


//5.下面程序的输出结果是：
//#include<stdio.h>
//int main()
//{
//	int i, sum, m, a;
//	sum = 0;
//	m = 5;
//	for (i = 0; i <= 3; i++)
//	{
//		scanf("%d", &a);
//		if (a > m)
//			sum += a;
//	}
//	printf("sum=%d\n", sum);
//	return 0;
//}


//6.下面程序的输出结果是：
//#include<stdio.h>
//int main()
//{
//	int i, j, k;
//	for (i = 1; i <= 4; i++)
//	{
//		for (j = 1; j < 5 - i; j++)
//			printf(" ");
//		for (k = 1; k <= i; k++)
//			printf("*");
//		printf("\n");
//	}
//	return 0;
//}

//7.下面程序的输出结果是：
//#include <stdio.h>
//int main()
//{
//	int i, j;
//	i = 1;
//	while (i < 5)
//	{
//		for (j = 1; j < 2 * i + 1; j++)
//			printf("%c", '#');
//		printf("\n");
//		i++;
//	}
//return 0;
//}

//8.下面程序的输出结果是：
//#include <stdio.h>
//int main()
//{
//	int i = 10, m = 0, n = 0;
//	do
//	{
//		if (i % 2 != 0)
//			m = m + i;
//		else
//			n = n + i;
//		i--;
//	} while (i >= 0);
//	printf("m=%d,n=%d\n", m, n);
//	return 0;
//}

//9.下面程序的输出结果是：
//#include <stdio.h>
//int main()
//{
//	int i, j;
//	for (i = 2; i >= 0; i--)
//	{
//		for (j = 1; j <= i; j++)
//			printf("*");
//		for (j = 0; j <= 2 - i; j++)
//			printf("!");
//		printf("\n");
//	}
//	return 0;
//}

//10.下面程序的输出结果是：
//#include <stdio.h>
//int main()
//{
//	int a, b;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b > 20) break;
//		if (b % 4 == 1)
//		{
//			b = b + 4;
//			continue;
//		}
//		b = b - 5;
//	}
//	printf("a=%d\n", a);
//	return 0;
//}

//11.运行下面程序，输入：01<回车>，输出结果
//是：
//#include <stdio.h>
//int main()
//{
//	char k;
//	int i;
//	for (i = 1; i < 3; i++)
//	{
//		scanf("%c", &k);
//		switch (k)
//		{
//		case '0': printf("another\n");
//		case '1': printf("number\n");
//		}
//	}
//}

<<<<<<< HEAD
//void fun() {
//	char n;
//	scanf("%c", &n);
//	if (n != '.')
//	{
//		fun();
//	}printf("%c\n", n);
//
//
//}
//int main() {
//	fun();
//	return 0;
//}


//int x;
//int fun1(int a, int b) {
//	int result = ++x + (a + b) * 2;
//	printf("fun1:%d\n", result);
//	return result;
//
//}
//int fun2(int a, int b) {
//	int result = a - b + x;
//	printf("fun2:%d\n", result);
//	return result;
//}
//int fun3(int a, int b) {
//	int reslut = (a - b) * 3 + x++;
//	printf("fun3:%d\n", reslut);
//	return reslut;
//}
//int main() {
//	int a, b, x = 10;
//	scanf("%d %d", &a, &b);
//	printf("%d\n", fun2(fun1(a, b), fun3(a, b)) + x);
//	return 0;
//}


//模拟题一 11
//#define N 10
//
//int main() {
//	int arr[N][N];
//	for (int i = 0; i < N - 1; i++)
//	{
//		for (int j = 0; j < N - 1; j++) {
//			arr[i][j] = (i + 1) * (j + 1);
//		}
//	}
//
//	printf("%d", *(*arr + 2) + 3);
//}

//模拟题一 12
//int main() {
//	FILE* fp;
//	int i, k = 0;
//	fp = fopen("data.txt", "w");
//	for (int i = 4; i <= 8; i++)
//	{
//		fprintf(fp, "% d", i);
//
//	}
//	fclose(fp);
//	fp = fopen("data.txt", "r");
//	fseek(fp, 0, SEEK_SET);//文件指针重新指向文件开头,fseek函函数用于移动文件指针到指定位置
//	fprintf(fp, "%d", -1);//在文件开头写入-1，覆盖原来的4
//	fclose(fp);
//	return 0;
//}

//int main() {
//	int n, m;
//	int a[100][100];
//	scanf("%d %d", &n, &m);
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++) {
//			scanf("%d", &a[i][j]);
//		}
//
//	}
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++) {
//			printf("%d ", a[j][i]);
//		}
//		printf("\n");
//	}
//}

//统计一次数字中某个数出现的次数
//int main() {
//	int n, k, count = 0;
//	scanf("%d %d", &n, &k);
//	while (n)
//	{
//		if (n % 10 == k)
//			count++;
//		n = n / 10;
//	}
//	printf("%d\n", count);
//	return 0;
//}
//
//struct Node
//{
//	int data;
//	Node* next;
//};
=======

>>>>>>> d69cefcbff758ceb280363f3aeb49a2d0776ae41
