////第1 题 （10.0 分）
///*-----------------------------------
//功能：根据整型形参m，计算如下公式的值：
//y=1＋1/3＋1/5＋1/7＋...＋1/(2m-3)
//--------------------------------*/
//#include "stdio.h"
//double fun(int m)
//{
//	/**********FOUND**********/
//	double y = 1；
//		int i;
//	/**********FOUND**********/
//	for (i = 3; i <= m; i++)
//		/**********FOUND**********/
//		y += 1.0 / (2i - 3);
//	return(y)
//}
////第2 题 （10.0 分）
///*-----------------------------------
//功能：用选择法对数组中的n 个元素按从小
//到大的顺序进行排序。
//-----------------------------------*/
//#include <stdio.h>
//#define N 20
//void fun(int a[], int n)
//{
//	int i, j, t, p;
//	for (j = 0; j < n - 1; j++)
//	{
//		/**********FOUND**********/
//		p = j
//			for (i = j + 1; i < n - 1; i++)
//				/**********FOUND**********/
//				if (a[i] < a[p])
//					/**********FOUND**********/
//					p = i;
//		t = a[p];
//		a[p] = a[j];
//		a[j] = t;
//	}
//}
//
//main()
//{
//	int a[N] = { 9,6,8,3,-1 }, i, m = 5;
//	printf("排序前的数据:");
//	for (i = 0; i < m; i++)
//		printf("%d ", a[i]);
//	printf("\n");
//	fun(a, m);
//	printf("排序后的数据:");
//	for (i = 0; i < m; i++)
//		printf("%d ", a[i]);
//	printf("\n");
//	getch();
//}
//
////第3 题 （10.0 分）
///*-----------------------------------
//功能：编写一个程序，从键盘接收一个字符
//串，然后按照字符顺序从小到大进行排序，
//并删除重复的字符。
//-----------------------------------*/
//#include <stdio.h>
//#include <string.h>
//void main()
//{
//	char str[100], * p, * q, * r, c;
//	printf("输入字符串:");
//	gets(str);
//	/**********FOUND**********/
//	for (p = str; *p; p++)
//	{
//		for (q = r = p; *q; q++)
//			if (*r > *q)
//				r = q;
//		/**********FOUND**********/
//		if (r != p)
//		{
//			/**********FOUND**********/
//			c = *r;
//			*r = *p;
//			*p = c;
//		}
//	}
//	for (p = str; *p; p++)
//	{
//		for (q = p; *p == *q; q++);
//		strcpy(p + 1, q);
//	}
//	printf("结果字符串：%s\n\n", str);
//	getch();
//}
//
//
//
//
////1.
////1). double y = 1;
////2). for (i = 3; i <= m; i++) 或 for (i = 3; i < m + 1;
////	i++)
////	3).y += 1.0 / (2 * i - 3);
//
////2.
////1).p = j;
////2). if (a[i] < a[p]) 或 if (a[p] > a[i])
////3).p = i;
//
////3.
////1). for (p = str; *p; p++)
////2). if (r != p)
////3).c = *r


//第4 题 （10.0 分）
/*-------------------------------
功能：编写程序, 求矩阵（3 行3 列）与5 的
乘积例如：输入下面的矩阵:
100 200 300
400 500 600
700 800 900
程序输出:
500 1000 1500
2000 2500 3000
3500 4000 4500
-----------------------------------*/
//#include "stdio.h"
//int fun(int array[3][3])
//{
//	/**********FOUND**********/
//	int i; j;
//	/**********FOUND**********/
//	for (i = 1; i < 3; i++)
//		for (j = 0; j < 3; j++)
//			/**********FOUND**********/
//			array[i][j] = array[i][j] / 5;
//}
//main()
//{
//	int i, j;
//	int array[3][3] = { {100,200,300},{400,500,600},{700,800,900} };
//	clrscr();
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//			printf("%7d", array[i][j]);
//		printf("\n");
//	}
//	fun(array);
//	printf("Converted array:\n");
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//			printf("%7d", array[i][j]);
//		printf("\n");
//	}
//	getch();
//}

//第5 题 （10.0 分）
/*-----------------------------------
功能：用"起泡法"对连续输入的十个字符排
序后按从小到大的次序输出.
-----------------------------------*/
//#define N 10
//#include <stdio.h>
//#include <string.h>
//main()
//{
//	int i;
//	char str[N];
//	/***********FOUND***********/
//	for (i = 0; i < N; i++)scanf("%c", str[i]);
//	/***********FOUND***********/
//	sort(str[N]);
//	for (i = 0; i < N; i++)
//		printf("%c", str[i]);
//	printf("\n");
//}
//sort(char str[N])
//{
//	int i, j; char t;
//	for (j = 1; j < N; j++)
//		/***********FOUND***********/
//		for (i = 0; i < N - j; i--)//i++
//			/***********FOUND***********/
//			if (str[i] < str[i + 1])
//			{
//				t = str[i];
//				str[i] = str[i + 1];
//				str[i + 1] = t;
//			}
//}

//第6 题 （10.0 分）
/*-----------------------------------
功能：读入一行英文文本，将其中每个单词
的最后一个字母改成大写，然后输出此文本
行 （这里的“单词”是指由空格隔开的字符
串）。
例如：若输入“I am a student to take the
examination.”，
则应输出“I aM A studenT tO takE thE
examination.”。
-----------------------------------*/

//#include "conio.h"
//#include "stdio.h"
//#include "ctype.h"
//#include "string.h"
//up1st(char* p)
//{
//	/**********FOUND**********/
//	integer k = 0;
//	for (; *p; p++)
//		if (k)
//		{
//			/**********FOUND**********/
//			if (*p = ' ')
//			{
//				k = 0;
//				/**********FOUND**********/
//				*(p - 1) = toupper(*(p - 1);
//			}
//		}
//		else if (*p != ' ') k = 1;
//	*(p - 1) = toupper(*(p - 1));
//}
//main()
//{
//	char chrstr[81];
//	clrscr();
//	printf("\nPlease enter a string: ");
//	gets(chrstr);
//	printf("\n\nBefore changing:\n %s", chrstr);
//	up1st(chrstr);
//	printf("\nAfter changing:\n %s", chrstr);
//}

/*
4.
1). int i,j;
2). for(i=0; i < 3; i++)
3). array[i][j]=array[i][j]*5;

5.
1). for(i=0;i<N;i++)scanf("%c",&str[i]);
2). sort(str);
3). for(i=0;i<N-j;i++)
4). if(str[i]>str[i+1]) 或 if(str[i+1]<str[i])

6.
1). int k=0;
2). if ( *p == ' ' )
3). *(p -1 ) = toupper( *( p - 1 ));
*/