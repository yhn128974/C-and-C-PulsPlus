//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <math.h>
//
////解一元二次方程
//void getSolusion(float a, float b, float c, float& x1, float& x2) {
//
//	if (a != 0)
//	{
//		//sqrt:开根号，属于数学math函数库
//		float d = sqrt(b * b - 4 * a * c);
//		float x1, x2;
//		if (d > 0)
//		{
//			x1 = (-b + d) / (2 * a);
//			x2 = (-b - d) / (2 * a);
//			if (x1 < x2)
//				printf("%0.2f %0.2f\n", x2, x1);
//			else
//				printf("%0.2f %0.2f\n", x1, x2);
//		}
//
//	}
//}
////输出乘法口角表
//void multiplicationTable() {
//	for (int i = 1; i <= 9; i++) {
//		for (int j = 1; j <= i; j++) {
//			printf("%d*%d=%d\t", i, j, i * j);
//		}
//		printf("\n");
//	}
//}
////输出一个n阶个金字塔
//void handlePyramid(int n) {
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= n - i; j++) {
//			printf("    ");
//		}
//		for (int k = 1; k <= 2 * i - 1; k++) {
//			printf(" * ");
//		}
//		printf("\n");
//	}
//
//}
//
//void handlePyramidReverse(int n) {
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j < i; j++) {
//			printf("   ");
//		}
//		for (int k = 1; k <= ((2 * n - 1) - (i - 1) * 2); k++) {
//			printf(" * ");
//		}
//		printf("\n");
//	}
//}
//
////使用结构体
//struct student
//{
//	char name[50];
//	int roll;
//	float marks;
//} s;
//
//void useStruct() {
//	printf("输入信息:\n");
//
//	printf("名字: ");
//	scanf("%s", s.name);
//
//	printf("编号: ");
//	scanf("%d", &s.roll);
//
//	printf("成绩: ");
//	scanf("%f", &s.marks);
//
//	printf("显示信息:\n");
//
//	printf("名字: ");
//	puts(s.name);
//
//	printf("编号: %d\n", s.roll);
//
//	printf("成绩: %.1f\n", s.marks);
//
//
//}
//
////读文件
//void readFile() {
//	FILE* fp;
//	fp = fopen("data.txt", "r");
//	if (fp == NULL) {
//		printf("文件打开失败！");
//		return;
//	}
//	char str[100];
//	while (fgets(str, 100, fp) != NULL) {
//		printf("%s", str);
//	}
//	fclose(fp);
//}
//
////写文件
//void writeFile() {
//	FILE* fp;
//	fp = fopen("data.txt", "w");
//	if (fp == NULL) {
//		printf("文件打开失败！");
//		return;
//	}
//	char str[100];
//	printf("请输入要写入的内容：\n");
//	while (fgets(str, 100, stdin) != NULL) {
//		fputs(str, fp);
//		/*	fprintf(fp, "%s", str);*/
//		fclose(fp);
//	}
//
//}
//
////打印图像
//void printImage() {
//	char a = 176, b = 219;
//	printf("%c%c%c%c%c\n", b, a, a, a, b);
//	printf("%c%c%c%c%c\n", a, b, a, b, a);
//	printf("%c%c%c%c%c\n", a, a, b, a, a);
//	printf("%c%c%c%c%c\n", a, b, a, b, a);
//	printf("%c%c%c%c%c\n", b, a, a, a, b);
//}
//
////判断是否为素数
//void isPrime() {
//	int i, j;
//	int count = 0;
//
//	for (i = 101; i <= 200; i++)
//	{
//		for (j = 2; j < i; j++)
//		{
//			// 如果 j 能被 i 整除再跳出循环
//			if (i % j == 0)
//				break;
//		}
//		// 判断循环是否提前跳出，如果 j<i 说明在 2~j 之间,i 有可整除的数
//		// 没有可整除的数（循环到 j=i ），i 就是素数
//		if (j >= i)
//		{
//			count++;
//			printf("%d ", i);
//			// 换行，用 count 计数，每五个数换行
//			if (count % 5 == 0)
//				printf("\n");
//		}
//	}
//}
//
//int main()
//{
//	/*multiplicationTable();*/
//	/*handlePyramid(5);
//	handlePyramidReverse(5);*/
//	//useStruct()
//
//	//writeFile();
//
//	/*readFile();*/
//	/*printImage();*/
//	/*isPrime();*/
//
//	int x = 5;
//	int y = x ^ 3;
//	printf("%d", y);
//	return 0;
//}
