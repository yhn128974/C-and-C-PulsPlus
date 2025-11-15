#define _CRT_SECURE_NO_WARNINGS  // 禁用不安全函数警告
#include <stdio.h>

//int main()
//{
//	FILE* fp = NULL;
//	//定义一个char字符数组接受文件字符流
//	char buffer[255];
//
//	fp = fopen("example.txt", "w+");
//	//fprintf，fputs向文件内部写入数据
//	int flage = fprintf(fp, "This is testing for fprintf1...\n");
//	if (flage < 0) {
//		printf("fprintf failed!\n");
//		return 0;
//	}
//	else {
//		printf("fprintf success!\n");
//	}
//
//	int flage2 = fputs("This is testing for fputs2...\n", fp);
//	if (flage2 < 0) {
//		printf("fputs failed!\n");
//		return 0;
//	}
//	else {
//		printf("fputs success!\n");
//	}
//
//	//fclose，关闭文件流
//	fclose(fp);
//
//	//重新打开文件流
//	fp = fopen("example.txt", "r");
//	//获取文件字符串 int fscanf(FILE *fp, const char *format, ...) 函数来从文件中读取字符串
//	//但是在遇到第一个空格和换行符时，它会停止读取
//	fscanf(fp, "%s", buffer);
//	printf("1: %s\n", buffer);
//
//	//每次从上一次中止的地方开始读取，直到文件结束
//	//从 fp 所指向的输入流中读取 n - 1 个字符。它会把读取的字符串复制到缓冲区 buf，并在最后追加一个 null 字符来终止字符串。
//	// 
//	// 如果这个函数在读取最后一个字符之前就遇到一个换行符 '\n' 或文件的末尾 EOF，则只会返回读取到的字符，包括换行符
//	fgets(buffer, 255, (FILE*)fp);
//	printf("2: %s\n", buffer);
//
//	//最后，调用 fgets() 完整地读取第二行。
//	fgets(buffer, 255, (FILE*)fp);
//	printf("3: %s\n", buffer);
//
//	fclose(fp);
//	return 0;
//}