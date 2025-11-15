//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <errno.h>
//#include <string.h>
//
//
//extern int errno;
//
//int main()
//{
//	FILE* pf;
//	int errnum;
//	pf = fopen("unexist.txt", "rb");
//	if (pf == NULL)
//	{
//		errnum = errno;
//		fprintf(stderr, "错误号: %d\n", errno);
//		perror("通过 perror 输出错误");
//		fprintf(stderr, "打开文件错误: %s\n", strerror(errnum));
//	}
//	else
//	{
//		fclose(pf);
//	}
//	//
//	int dividend = 20;
//	int divisor = 1;
//	if (divisor == 0)
//	{
//		fprintf(stderr, "除数不能为 0\n");
//	}
//	else
//	{
//		float quotient = dividend / divisor;
//		printf("%d / %d = %f\n", dividend, divisor, quotient);
//	}
//	return 0;
//}