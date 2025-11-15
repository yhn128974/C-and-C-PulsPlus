//#include <stdio.h>
//#include <stdarg.h>
//#define _CRT_SECURE_NO_WARNINGS 1
//
////第一次参数为后续变量的个数
//double average(int num, ...)
//{
//
//	va_list valist;
//	double sum = 0.0;
//	int i;
//
//	/* 为 num 个参数初始化 valist */
//	va_start(valist, num);
//
//	/* 访问所有赋给 valist 的参数 */
//	for (i = 0; i < num; i++)
//	{
//		//每次执行会将 valist 指向下一个参数
//		sum += va_arg(valist, int);
//	}
//	/* 清理为 valist 保留的内存 */
//	va_end(valist);
//
//	return sum / num;
//}
//
//int main()
//{/*
//	printf("Average of 2, 3, 4, 5 = %f\n", average(4, 2, 3, 4, 5));
//	printf("Average of 5, 10, 15 = %f\n", average(3, 5, 10, 15));*/
//	int a = 3;
//	// <<||>> 表示将比特数向左右位移的单位个数
//	int b = 3 << 1;
//	printf("%d", b);
//}