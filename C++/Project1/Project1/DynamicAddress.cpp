//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main()
//{
//	char name[100];
//	char* description;
//
//	strcpy(name, "Zara Ali");
//
//	/* 动态分配内存 */
//
//	//方式一
//	//在内存中动态地分配 num 个长度为 size 的连续空间，并将每一个字节都初始化为 0。
//	// 所以它的结果是分配了 num*size 个字节长度的内存空间，并且每个字节的值都是 0。
//	/*description= (char*)calloc(30, sizeof(char));*/
//
//
//	//方式二
//	//在堆区分配一块指定大小的内存空间，用来存放数据。这块内存空间在函数执行完成后不会被初始化，它们的值是未知的。
//	//参数为分配的字节大小
//	description = (char*)malloc(30 * sizeof(char));
//	if (description == NULL)
//	{
//		fprintf(stderr, "Error - unable to allocate required memory\n");
//	}
//	else
//	{
//		strcpy(description, "Zara ali a DPS student.");
//	}
//	/* 假设您想要存储更大的描述信息 */
//	//realloc重新分配内存大小单位为字节数
//	description = (char*)realloc(description, 44 * sizeof(char));
//	if (description == NULL)
//	{
//		fprintf(stderr, "Error - unable to allocate required memory\n");
//	}
//	else
//	{
//		//一个空格占据一个字节
//		strcat(description, "She is in class 10th");
//	}
//
//	printf("Name = %s\n", name);
//	printf("Description: %s\n", description);
//
//	/* 使用 free() 函数释放内存 */
//	free(description);
//}