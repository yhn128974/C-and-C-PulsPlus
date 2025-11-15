//1.求出200 以内的整数中，最大的可以被17 整
//除的数是哪个数。
//#include <stdio.h>
//___
//{
//int i;
//for (___; ___; i--)
//{
//if (___) break;
//}
//printf("%d\n",___);
//}
//
//2.以下程序输入3 个整数值给a，b，c，变量b
//中的值给a，变量c 中的值给b，变量a 中的
//值给c，交换后输出a，b，c 的值。
//#include <stdio.h>
//int main()
//{
//	int a, b, c, ___;
//	printf("enter a,b,c");
//	scanf("%d%d%d", &a, &b, &c);
//	___;
//	___;
//	___;
//	___;
//	printf("%d,%d,%d", a, b, c);
//	return 0;
//}
//
//3.下面程序的功能是输出数组s 中最大元素的
//下标，请填空。
//#include <stdio.h>
//int main()
//{
//	int k, p;
//	int s[] = { 1,-9,7,2,-10,3 };
//	for (p = 0, k = p; p < ___; p++)
//	{
//		if (s[p] > s[k])
//		{
//			___;
//		}
//	}
//	printf("%d\n", k);
//	return 0;
//}
//
//考查循环结构程序设计
//正确答案：int main(); i = 200; i = 0; i % 17 == 0; i;
//
//考查顺序结构程序设计和交换3 数的算法
//正确答案：d; d = a; a = b; b = c; c = d;
//
//数组和循环的综合应用
//正确答案：6; k = p;

//4.程序说明:统计正整数的各位数字中零的个
//数，并求各位数字中的最大者。
//#include <stdio.h>
//int main()
//{
//	int n, count, max, t;
//	count = max = 0;
//	scanf(“ % d”, &n);
//	do
//	{
//		t = ___;
//		if (t == 0) ++count;
//		else if (max < t) ___;
//		n /= 10;
//	} while (n);
//	printf(“count = % d, max = % d”, count, max);
//	return 0;
//}
//正确答案：n % 10; max = t;

//5.以下程序的功能是输入50 个数，以每行10
//个数据的形式输出a 数组，请填空。
//int main()
//{
//	int a[50], i;
//	printf(“输入50 个整数：”)；
//		for (i = 0; i < 50; i++)
//		{
//			scanf("%d", ___);
//		}
//	for (i = 0; i < 50; i++)
//	{
//		if (___)___;
//		printf(“ % 3d”, a[i]);
//	}
//}

//正确答案：&a[i]; i % 10 == 0; printf("\n");

//6.下列程序的功能是输入一个正整数，判断是
//否是素数，若为素数则输出1，否则输出0，
//请填空完成程序。
//int main()
//{
//	int i, x, y = 1;
//	scanf("%d", &x);
//	for (i = 2; i <= x / 2; i++)
//	{
//		if (___)
//		{
//			y = 0;
//			___;
//		}
//		printf(“ % d\n”, y);
//	}
//}
//正确答案：x % i == 0; break;