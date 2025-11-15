////1.下面程序的输出结果是： 将X,Y的值互换
//#include <stdio.h>
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


