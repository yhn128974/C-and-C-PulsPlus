#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
<<<<<<< HEAD
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<stdbool.h>

=======
>>>>>>> d69cefcbff758ceb280363f3aeb49a2d0776ae41
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

<<<<<<< HEAD
//程序题
///键盘输入一个字符，判断该字符的类型
//int main() {
//	printf("请输入一个字符：");
//	char ch;
//	scanf("%c", &ch);
//	if (ch >= 'a' && ch < 'z' || ch >= 'A' && ch <= 'Z')
//	{
//		printf("该字符是字母\n");
//	}
//	else if (ch >= '0' && ch <= '9')
//	{
//		printf("该字符是数字\n");
//	}
//	else
//	{
//		printf("该字符是其他字符\n");
//	}
//	return 0;
//}

//指出10进制数中100-999中转化为为7进制与9进制后互为逆序数的数
//int baseConversion(int number, int base) {
//	int result = 0;
//	int i = 0;
//	while (number > 0) {
//		result = (number % base) * pow(10, i) + result;
//		number /= base;
//		i++;
//	}
//	return result;
//}
//
//int main() {
//	for (int i = 100; i < 999; i++)
//	{
//		int reversed7 = 0;
//		int reversed9 = 0;
//		char reversedStr7[20];
//		char reversedStr9[20];
//		reversed7 = baseConversion(i, 7);
//		reversed9 = baseConversion(i, 9);
//		sprintf(reversedStr7, "%d", reversed7);
//		sprintf(reversedStr9, "%d", reversed9);
//		if (strlen(reversedStr7) == strlen(reversedStr9))
//		{
//			/*printf("reversedStr7=%s,reversedStr9=%s\n", reversedStr7, reversedStr9);*/
//			int n = strlen(reversedStr7);
//			for (int j = 0; j < n; j++)
//			{
//				if (reversedStr7[j] == reversedStr9[n - j - 1]) {
//					if (j == n - 1)
//					{
//						printf("数字%d满洲条件,7进制为%d,9进制为%d\n", i, reversed7, reversed9);
//					}
//					continue;
//				}
//				else {
//					break;
//				}
//			}
//		}
//	}
//	return 0;
//}

//写一个程序，接受一个字符串，该字符串中有若干*号，去掉字母之间的*号保留开头与结尾的*号，
//int main() {
//	char str[100];
//	printf("请输入一个字符串：");
//	scanf("%s", str);
//
//	for (int i = 0; i < strlen(str) - 1; i++)
//	{
//		if (str[i] == '*') {
//			int flage1 = 0; int flage2 = 0;
//			for (int j = 0; j < i - 1; j++)
//			{
//				if (str[j] != '*') {
//					flage1 = 1;
//					break;
//				}
//			}
//
//			for (int k = i + 1; k < strlen(str) - 1; k++)
//			{
//				if (str[k] != '*') {
//					flage2 = 1;
//					break;
//				}
//			}
//
//			if (flage1 == 1 && flage2 == 1)
//			{
//				for (int n = i; n < strlen(str) - 2; n++)
//				{
//					str[n] = str[n + 1];
//				}
//				i--;
//			}
//
//		}
//	}
//	printf("处理后的字符串为：%s\n", str);
//}

//int main() {
//	int x = 2;
//	float y = 8;
//	printf("%d %.2f\n", x, y);
//	return 0;
//}

//从键盘接受一个浮点数X，在接受一个整数n，计算x的N次方并输出结果保留两位小数。用递归方法实现

//float fun(int n, float x) {
//	if (n == 1)
//	{
//		return x;
//	}
//	else {
//		return x * fun(n - 1, x);
//	}
//}
//int main() {
//	int  n;
//	float x, result;
//	printf("请输入一个浮点数X，请输入他的倍数");
//	scanf("%f%d", &x, &n);
//	result = fun(n, x);
//	printf("x的n次方的结果是：%.2f\n", result);
//}

//打印数字三角形
//void main() {
//	int n;
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= i; j++)
//		{
//			printf("%d", j);
//		}
//		printf("\n");
//	}
//}

//将一个字符串的重复字符串删除，并打印删除后的字符串
//int main() {
//	char str[100];
//	printf("请输入一个字符串：");
//	scanf("%s", str);
//	int len = strlen(str);
//	char result[100];
//	int index = 0;
//
//	for (int i = 0; i < len; i++)
//	{
//		if (i == 0)
//		{
//			result[i] = str[i];
//			index = 1;
//		}
//
//		int flage = 0;
//		for (int j = 0; j < index; j++)
//		{
//			if (str[i] == result[j])
//			{
//				flage = 1;
//				break;
//			}
//		}
//		if (flage == 0)
//		{
//			index++;
//			result[index - 1] = str[i];
//		}
//	}
//	result[index] = '\0';
//	printf("删除重复字符后的字符串为%s\n", result);
//}

//输入一个整数N作为学生的人数，在输入每个学生姓名，id，成绩；并按照成绩从低高输出学生的信息
//struct Student {
//	char* name;
//	int id;
//	float score;
//};
//int main() {
//	int n;
//	printf("请输入学生人数：");
//	scanf("%d", &n);
//	Student stus[100];
//	for (int i = 0; i < n; i++)
//	{
//		int id;
//		char name[50];
//		float score;
//		scanf("%s %d %f", name, &id, &score);
//		stus[i].id = id;
//		stus[i].name = name;
//		stus[i].score = score;
//	}
//	//排序
//	for (int i = 0; i < n - 1; i++)
//	{
//		for (int j = i + 1; j < n; j++) {
//			if (stus[i].score > stus[j].score)
//			{
//				Student temp = stus[i];
//				stus[i] = stus[j];
//				stus[j] = temp;
//			}
//		}
//	}
//	//输出
//	for (int i = 0; i < n; i++)
//	{
//		printf("姓名：%s，id：%d，分数:%.2f", stus[i].name, stus[i].id, stus[i].score);
//	}
//}


//判断4个数是否能构成一个四边形
//int main() {
//	int a, b, c, d;
//	printf("请输入四个整数：");
//	scanf("%d %d %d %d", &a, &b, &c, &d);
//	if (b + c + d > a && a + c + d > b && a + b + d > c && a + b + c > d)
//	{
//		printf("可以构成四边形\n");
//	}
//	else {
//		printf("不能构成四边形\n");
//	}
//	return 0;
//}

//计算 1-1/2+1/3-1/4+1/5-...+1/100;
//int main() {
//	int n = 100;
//	float sum = 0.0;
//	int sign = 1;
//	for (int i = 1; i <= 100; i++)
//	{
//		sum += (float)1 * sign / (i);
//		sign = -1 * sign;
//	}
//	printf("sum=%.2f\n", sum);
//}

//字符串s排除重复出现的字母，输出修改后的字符串，忽略大小写
//int main() {
//	char str[100];
//	char check[256] = { 0 };
//	scanf("%s", str);
//	int j = 0;
//	for (int i = 0; i < strlen(str); i++)
//	{
//		if (check[str[i]] == 0)
//		{
//			if (str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z')
//			{
//				if (str[i] >= 'a' && str[i] <= 'z' && check[str[i] - 32] == 0)
//				{
//					check[str[i]]++;
//					str[j] = str[i];
//					j++;
//				}
//				if (str[i] >= 'A' && str[i] <= 'Z' && check[str[i] + 32] == 0) {
//					check[str[i]]++;
//					str[j] = str[i];
//					j++;
//				}
//			}
//			else
//			{
//				check[str[i]]++;
//				str[j] = str[i];
//				j++;
//
//			}
//
//		}
//	}
//	str[j] = '\0';
//	printf("处理后的字符串为：%s\n", str);
//
//	return 0;


//struct Student
//{
//	int id;
//	float mathCore;
//	float englishCore;
//	float chineseCore;
//};
//
//int main() {
//	int n;
//	printf("请输入学生人数：");
//	scanf("%d", &n);
//	Student Stus[100];
//	for (int i = 0; i < n; i++)
//	{
//
//		printf("请输入第%d个学生的id，数学成绩，英语成绩，语文成绩：", i + 1);
//		scanf("%d %f %f %f", &Stus[i].id, &Stus[i].id, &Stus[i].englishCore, &Stus[i].chineseCore);
//
//	}
//
//
//	for (int i = 0; i < n - 1; i++)
//	{
//		float maxCore = Stus[i].mathCore + Stus[i].englishCore + Stus[i].chineseCore;
//		for (int j = i + 1; j < n; j++)
//		{
//			float currentCore = Stus[j].mathCore + Stus[j].englishCore + Stus[j].chineseCore;
//			if (currentCore > maxCore)
//			{
//				Student temp = Stus[i];
//				Stus[i] = Stus[j];
//				Stus[j] = temp;
//			}
//		}
//	}
//
//	printf("学号 数学  语文  总分  平均分\n");
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d %.1f %.1f %.1f %.2f\n", Stus[i].id, Stus[i].mathCore, Stus[i].chineseCore,
//			Stus[i].mathCore + Stus[i].englishCore + Stus[i].chineseCore,
//			(Stus[i].mathCore + Stus[i].englishCore + Stus[i].chineseCore) / 3);
//	}
//
//	return 0;
//}

//创建一个单链表，通过该链表对其数据进行冒泡排序并打印出来
//struct Node {
//	int data;
//	Node* next;
//};
//void swap(Node* a, Node* b) {
//	int temp = a->data;
//	a->data = b->data;
//	b->data = temp;
//}
//
//void bubbleSort(Node* head) {
//	if (head == NULL) return;
//	bool swapped;
//	do {
//		swapped = false;
//		Node* currentNode = head;
//		while (currentNode->next != NULL) {
//			if (currentNode->data > currentNode->next->data)
//			{
//				swap(currentNode, currentNode->next);
//				swapped = true;
//			}
//			currentNode = currentNode->next;
//		}
//	} while (swapped);
//}
//
//void printList(Node* head) {
//	Node* current = head;
//	while (current != NULL) {
//		printf("%d ", current->data);
//		current = current->next;
//	}
//	printf("\n");
//}
//
//int main() {
//	Node* head = NULL;
//	Node* tail = NULL;
//	int n, value;
//	printf("请输入节点个数：");
//	scanf("%d", &n);
//	printf("请输入节点的值：");
//	for (int i = 0; i < n; i++) {
//		scanf("%d", &value);
//		Node* newNode = (Node*)malloc(sizeof(Node));
//		newNode->data = value;
//		newNode->next = NULL;
//		if (head == NULL) {
//			head = newNode;
//			tail = newNode;
//		}
//		else {
//			tail->next = newNode;
//			tail = newNode;
//		}
//	}
//	printf("排序前的链表：");
//	printList(head);
//	bubbleSort(head);
//	printf("排序后的链表：");
//	printList(head);
//	return 0;
//}
=======

>>>>>>> d69cefcbff758ceb280363f3aeb49a2d0776ae41
