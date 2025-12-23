#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<math.h>
#include <time.h>
/*
题目：利用条件运算符的嵌套来完成此题：学习成绩>=90分的同学用A表示，60-89分之间的用B表示，60分以下的用C表示。
程序分析：(a>b)?a:b这是条件运算符的基本例子。
*/
//#include<stdio.h>
//int main()
//{
//	int score;
//	char grade;
//	printf("请输入分数： ");
//	scanf("%d", &score);
//	grade = (score >= 90) ? 'A' : ((score >= 60) ? 'B' : 'C');
//	printf("%c\n", grade);
//	return 0;
//}

//题目：输入两个正整数m和n，求其最大公约数和最小公倍数。
//
//程序分析：
//
//（1）最小公倍数 = 输入的两个数之积除于它们的最大公约数，关键是求出最大公约数；
//
//（2）求最大公约数用辗转相除法（又名欧几里德算法）
//
//1）证明：设c是a和b的最大公约数，记为c = gcd(a, b), a >= b,
//令r = a mod b
//设a = kc，b = jc，则k，j互素，否则c不是最大公约数
//据上，r = a - mb = kc - mjc = (k - mj)c
//可知r也是c的倍数，且k - mj与j互素，否则与前述k，j互素矛盾,
//由此可知，b与r的最大公约数也是c，即gcd(a, b) = gcd(b, a mod b)，得证。
//2）算法描述：
//
//第一步：a ÷ b，令r为所得余数（0≤r 第二步：互换：置 a←b，b←r，并返回第一步。
//#include<stdio.h>
//int main()
//{
//    int a, b, t, r, n;
//    printf("请输入两个数字：\n");
//    scanf("%d %d", &a, &b);
//    if (a < b)
//    {
//        t = b; b = a; a = t;
//    }
//    r = a % b;
//    n = a * b;
//    while (r != 0)
//    {
//        a = b;
//        b = r;
//        r = a % b;
//    }
//    printf("这两个数的最大公约数是%d，最小公倍数是%d\n", b, n / b);
//
//    return 0;
//}

//题目：输入一行字符，分别统计出其中英文字母、空格、数字和其它字符的个数。
//#include<stdio.h>
//int main()
//{
//	char cn;
//	int letter = 0, space = 0, digit = 0, other = 0;
//	printf("请输入一行字符：\n");
//	while ((cn = getchar()) != '\n') {
//		if ((cn >= 'a' && cn <= 'z') || (cn >= 'A' && cn <= 'Z')) {
//			letter++;
//		}
//		else if (cn == ' ') {
//			space++;
//		}
//		else if (cn > '0' && cn < '9') {
//			digit++;
//		}
//		else {
//			other++;
//		}
//	}
//	printf("字母有%d个，数字有%d个，空格有%d个，其他有%d个", letter, digit, space, other);
//	return 0;
//
//}

//18.题目：求 s = a + aa + aaa + aaaa + aa...a 的值，其中 a 是一个数字，例如 2 + 22 + 222 + 2222 + 22222 (此时共有5个数相加)，几个数相加有键盘控制。
//
//程序分析：关键是计算出每一项的值。
//#include<stdio.h>
//int main() {
//	int a, n, sum = 0;
//	scanf("%d %d", &a, &n);
//	printf("sum=");
//	for (int i = 1; i <= n; i++)
//	{
//		sum += a;
//
//		printf("%d+", a);
//
//		a = a * 10 + a % 10;
//	}
//	printf("=%d\n", sum);
//}


//20 - 小球自由下落:一球从100米高度自由落下，每次落地后反跳回原高度的一半；再落下，求它在第10次落地时，共经过多少米？第10次反弹多高？
//int main() {
//	float sum = 0; float height = 100;
//	for (int i = 1; i <= 10; i++)
//	{
//		sum += height + height / 2;
//
//		height /= 2;
//	}
//
//	printf("第10次落地时，共经过%f米，第10次反弹高度是%f米\n", sum - height / 2, height);
//
//	return 0;
////答案
//#define INITIAL_HEIGHT 100.0
//#define BOUNCE_COUNT 10
//
//int main()
//{
//	double h = INITIAL_HEIGHT;
//	double s = INITIAL_HEIGHT;
//
//	// 第一次反弹高度
//	h /= 2;
//
//	// 计算后续反弹高度和总路程
//	for (int i = 2; i <= BOUNCE_COUNT; i++) {
//		s += 2 * h;
//		h /= 2;
//	}
//
//	// 输出结果，指定小数位数为2位
//	printf("第%d次落地时，共经过%.5f米，第%d次反弹高%.5f米\n", BOUNCE_COUNT, s, BOUNCE_COUNT, h);
//
//	return 0;
//}

/*
题目：猴子吃桃问题：猴子第一天摘下若干个桃子，当即吃了一半，还不瘾，又多吃了一个
第二天早上又将剩下的桃子吃掉一半，又多吃了一个。以后每天早上都吃了前一天剩下
的一半零一个。到第10天早上想再吃时，见只剩下一个桃子了。求第一天共摘了多少。
*/
//int main()
//{
//	int sum = 1;
//	for (int index = 1; index <= 9; index++) {
//		sum = (sum + 1) * 2;
//	}
//	printf("第一天摘了%d个桃子", sum);
//	return 0;
//
//}
//答案：
//#include <stdio.h>
//#include <stdlib.h>
//int main() {
//	int day, x1 = 0, x2;
//	day = 9;
//	x2 = 1;
//	while (day > 0) {
//		x1 = (x2 + 1) * 2;  // 第一天的桃子数是第2天桃子数加1后的2倍
//		x2 = x1;
//		day--;
//	}
//	printf("总数为 %d\n", x1);
//
//	return 0;
//}

/*
题目：两个乒乓球队进行比赛，各出三人，甲队为 a、b、c 三人，乙队为 x、y、z 三人。
抽签决定比赛名单，有人向队员打听比赛的名单：a 说他不和 x 比，c 说他不和 x、z 比，
请编写代码找出三队赛手的名单.
*/
//答案：
//int main() {
//	// 定义甲队和乙队的成员
//	char teamA[] = { 'a', 'b', 'c' }; // 甲队：a, b, c
//	char teamB[] = { 'x', 'y', 'z' }; // 乙队：x, y, z
//
//	// 变量 i, j, k 分别表示 a, b, c 的对手
//	char i, j, k;
//
//	// 枚举 a 的对手
//	for (i = 'x'; i <= 'z'; i++) {
//		// 枚举 b 的对手
//		for (j = 'x'; j <= 'z'; j++) {
//			// 确保 a 和 b 的对手不同
//			if (i != j) {
//				// 枚举 c 的对手
//				for (k = 'x'; k <= 'z'; k++) {
//					// 确保 c 的对手与 a 和 b 的对手不同
//					if (i != k && j != k) {
//						// 满足题目条件：a 不和 x 比，c 不和 x 和 z 比
//						if (i != 'x' && k != 'x' && k != 'z') {
//							// 输出匹配结果
//							printf("比赛顺序：a--%c\tb--%c\tc--%c\n", i, j, k);
//						}
//					}
//				}
//			}
//		}
//	}
//
//	return 0;
//}

//打印出如下图案（菱形）
//int main() {
//	int n;
//	scanf("%d", &n);
//	for (int i = 0; i <= n; i++) {
//		for (int j = 1; j <= 2 * n + 1; j++)
//		{
//			if (j < n + 1 - i || j > n + 1 + i) {
//				printf(" ");
//			}
//			else {
//				printf("*");
//			}
//		}
//		printf("\n");
//	}
//
//	for (int i = 0; i <= n; i++) {
//		if (i != 0)
//		{
//			for (int j = 1; j <= 2 * n + 1; j++)
//			{
//
//				if (j >= i + 1 && j <= 2 * n + 1 - i) {
//					printf("*");
//				}
//				else {
//					printf(" ");
//				}
//			}
//			printf("\n");
//		}
//	}
//}
//答案
//#include <stdio.h>
//int main()
//{
//    int i, j, k;
//    for (i = 0; i <= 3; i++) {
//        for (j = 0; j <= 2 - i; j++) {
//            printf(" ");
//        }
//        for (k = 0; k <= 2 * i; k++) {
//            printf("*");
//        }
//        printf("\n");
//    }
//    for (i = 0; i <= 2; i++) {
//        for (j = 0; j <= i; j++) {
//            printf(" ");
//        }
//        for (k = 0; k <= 4 - 2 * i; k++) {
//            printf("*");
//        }
//        printf("\n");
//    }
//
//}

//题目：有一分数序列：2 / 1，3 / 2，5 / 3，8 / 5，13 / 8，21 / 13...求出这个数列的前20项之和。
//int main() {
//	float sum = 0;
//	float a = 2, b = 1, t;//在涉及分数的运算时候吧数字类型设置为浮点型或者双精度
//
//	for (int i = 1; i <= 20; i++)
//	{
//		sum += a / b;
//		t = a;
//		a = a + b;
//		b = t;
//	}
//	printf("sum=%f", sum);
//}
//答案：
//int main()
//{
//	int i, t;
//	float sum = 0;
//	float a = 2, b = 1;
//	for (i = 1; i <= 20; i++)
//	{
//		sum = sum + a / b;
//		t = a;
//		a = a + b;
//		b = t;
//	}
//	printf("%9.6f\n", sum);
//}

//25.阶乘相加
//定义阶乘函数
//double factorial(int n) {
//	double sum = 1;
//	for (int i = 1; i <= n; i++)
//	{
//		sum *= i;
//
//	}
//	return sum;
//}
//int main() {
//	double sum = 0;
//	int n;
//	printf("pleads put into a value with n\n");
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++)
//	{
//		sum += factorial(i);
//		printf("%d!+", i);
//	}
//	printf("=%f", sum);
//
//}
// 标准答案：
// 计算阶乘的函数
//unsigned long long factorial(int n) {
//    unsigned long long result = 1;
//    for (int i = 1; i <= n; i++) {
//        result *= i;
//    }
//    return result;
//}
//
//int main() {
//    unsigned long long sum = 0;
//
//    // 计算1 + 2! + 3! + ... + 20!
//    for (int i = 1; i <= 20; i++) {
//        sum += factorial(i);
//    }
//
//    // 输出结果
//    printf("1 + 2! + 3! + ... + 20!的和是: %llu\n", sum);
//
//    return 0;
//}

//26.利用递归求n的阶乘、
//定义一个递归函数返回阶乘的值
//int factorial(int n) {
//	int sum;
//	if (n == 1)
//	{
//		return 1;
//	}
//	else {
//		sum = n * factorial(n - 1);
//	}
//	return sum;
//}
//int main() {
//	int n;
//	printf("pleads put into a value with n\n");
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++)
//	{
//		printf(" %d!=%d\n", i, factorial(i));
//	}
//}

//27.利用递归函数调用方式，将所输入的5个字符，以相反顺序打印出来。
//int main()
//{
//	int i = 5;
//	void palin(int n);
//	printf("请输入5个字符\40:\40");
//	palin(i);
//	printf("\n");
//}
//void palin(int n)
//
//{
//	char next;
//	if (n <= 1) {
//		next = getchar();
//		printf("相反顺序输出结果\40:\40");
//		putchar(next);
//	}
//	else {
//		next = getchar();
//		palin(n - 1);
//		putchar(next);
//	}
//}

//28.题目：有5个人坐在一起，问第五个人多少岁？他说比第4个人大2岁
// 。问第4个人岁数，他说比第3个人大2岁
// 。问第三个人，又说比第2人大两岁。
// 问第2个人，说比第一个人大两岁。最后问第一个人，他说是10岁。请问第五个人多大？
//int main() {
//	int age(int n);
//	int n = 5;
//	printf("第五个人的年龄是%d\n", age(n));
//	return 0;
//}
//
//int age(int n) {
//	if (n == 1) {
//		return 10;
//	}
//	else {
//		return age(n - 1) + 2;
//	}
//}

//29.给一个不多于5位的正整数，要求：一、求它是几位数，二、逆序打印出各位数字。
//int handlenumber(int n, int count) {
//	int lastNumber;
//	if (n / 10 != 0) {
//		lastNumber = n % 10;
//		printf("%d", lastNumber);
//		count++;
//		handlenumber(n / 10, count);
//	}
//	else
//	{
//		printf("%d", n);
//		printf("该数是%d位数\n", count + 1);
//
//	}
//	return 0;
//}
//int main() {
//	int numbers;
//	int count = 0;
//	scanf("%d", &numbers);
//	if (numbers < 100000 && numbers > 0)
//	{
//		handlenumber(numbers, count);
//	}
//	else {
//		printf("请输入不多于5位数的正整数");
//		scanf("%d", &numbers);
//	}
//
//
//	return 0;
//
//}
////答案：
//int main()
//{
//	long a, b, c, d, e, x;
//	printf("请输入 5 位数字：");
//	scanf("%ld", &x);
//	a = x / 10000;        /*分解出万位*/
//	b = x % 10000 / 1000;   /*分解出千位*/
//	c = x % 1000 / 100;     /*分解出百位*/
//	d = x % 100 / 10;       /*分解出十位*/
//	e = x % 10;           /*分解出个位*/
//	if (a != 0) {
//		printf("为 5 位数,逆序为： %ld %ld %ld %ld %ld\n", e, d, c, b, a);
//	}
//	else if (b != 0) {
//		printf("为 4 位数,逆序为： %ld %ld %ld %ld\n", e, d, c, b);
//	}
//	else if (c != 0) {
//		printf("为 3 位数,逆序为：%ld %ld %ld\n", e, d, c);
//	}
//	else if (d != 0) {
//		printf("为 2 位数,逆序为： %ld %ld\n", e, d);
//	}
//	else if (e != 0) {
//		printf("为 1 位数,逆序为：%ld\n", e);
//	}
//}

//30.一个5位数，判断它是不是回文数。即12321是回文数，个位与万位相同，十位与千位相同。
//int main() {
//	int number, a, b, c, d, e;
//	scanf("%d", &number);
//	if (number < 10000 || number>99999) {
//		printf("请输入一个5位数");
//		scanf("%d", &number);
//	}
//	else {
//		a = number % 10;
//		b = number / 10 % 10;
//		c = number / 100 % 10;
//		d = number / 1000 % 10;
//		e = number / 10000;
//		if (a == e && b == d)
//		{
//			printf("该数是回文书");
//		}
//		else {
//			printf("该数不是回文书");
//		}
//
//	}
//	return 0;
//}
//答案：
//int main()
//{
//	long ge, shi, qian, wan, x;
//	printf("请输入 5 位数字：");
//	scanf("%ld", &x);
//	wan = x / 10000;        /*分解出万位*/
//	qian = x % 10000 / 1000;  /*分解出千位*/
//	shi = x % 100 / 10;       /*分解出十位*/
//	ge = x % 10;            /*分解出个位*/
//	if (ge == wan && shi == qian) { /*个位等于万位并且十位等于千位*/
//		printf("这是回文数\n");
//	}
//	else {
//		printf("这不是回文数\n");
//	}
//}

//31.请输入星期几的第一个字母来判断一下是星期几，如果第一个字母一样，则继续判断第二个字母。
//int main() {
//	char char1, char2;
//	printf("请输入星期几的第一个字母：");
//	scanf("%c", &char1);
//	getchar(); //吸收掉回车符
//	switch (char1) {
//	case 'm':
//		printf("Monday");
//		break;
//	case 'w':
//		printf("Wednesday");
//		break;
//	case 'f':
//		printf("Friday");
//		break;
//	case 't':
//		printf("请输入第二个字母");
//		scanf("%c", &char2);
//		if (char2 == 'u')
//		{
//			printf("tuesday");
//			break;
//		};
//		if (char2 == 'h')
//		{
//			printf("thursday");
//			break;
//		};
//	case 's':
//		printf("请输入第二个字母");
//		scanf("%c", &char2);
//		if (char2 == 'a')
//		{
//			printf("saturday");
//			break;
//		};
//		if (char2 == 'u')
//		{
//			printf("sunday");
//		};
//	}
//
//	return 0;
//
//}

//32删除一个字符串中的指定字母，如：字符串 "aca"，删除其中的 a 字母。
// 删除字符串中指定字母函数
//char* deleteCharacters(char* str, char* charSet) {
//	// 用于存储要删除的字符的哈希表
//	int hash[256] = { 0 }; // 使用256大小的数组来存储ASCII字符，初始化为0
//	// 如果要删除的字符集为空，则直接返回原字符串
//	if (charSet == NULL)
//		return str;
//
//	// 标记要删除的字符
//	for (int i = 0; i < strlen(charSet); i++)
//		hash[(unsigned char)charSet[i]] = 1; // 将要删除的字符的ASCII码位置标记为1
//
//	int currentIndex = 0; // 用于追踪当前的字符串索引
//	// 通过遍历字符串来删除指定的字符
//	for (int i = 0; i < strlen(str); i++) {
//		// 如果当前字符不在要删除的字符集中，则保留该字符
//		if (!hash[(unsigned char)str[i]])
//			str[currentIndex++] = str[i];
//	}
//	str[currentIndex] = '\0'; // 在字符串的末尾添加空字符，以表示字符串的结束
//	return str;
//}
//
//int main() {
//	char s[] = "c";      // 要删除的字母
//	char s2[] = "abcdefg";   // 目标字符串
//	printf("%s\n", deleteCharacters(s2, s)); // 打印删除指定字符后的字符串
//	return 0;
//}

//33.质数（prime number）又称素数，有无限个。一个大于1的自然数，除了1和它本身外，不能被其他自然数整除。
//void isPrimeNaive(int n) {
//
//	if (n % 2 == 0 || n < 0)
//	{
//		printf("%d不是素数", n);
//		return;
//	}
//	else
//	{
//		for (int i = 2; i <= n - 1; i++)
//		{
//			if (n % i == 0) {
//				printf("%d不是素数", n);
//				return;
//			}
//
//		}
//	}
//	printf("%d为素数", n);
//
//}
//int main() {
//	int a;
//	printf("请输入a的值");
//	scanf("%d", &a);
//	isPrimeNaive(a);
//}

//34.练习函数调用
//void hello_world(void)
//{
//	printf("Hello, world!\n");
//}
//void three_hellos(void)
//{
//	int counter;
//	for (counter = 1; counter <= 3; counter++)
//		hello_world();/*调用此函数*/
//}
//int main(void)
//{
//	three_hellos();/*调用此函数*/
//}

//35.题目：字符串反转，如将字符串 "www.runoob.com" 反转为 "moc.boonur.www"
//void reverse(char* s)
//{
//	// 获取字符串长度
//	int len = 0;
//	char* p = s;
//	while (*p != 0)
//	{
//		len++;
//		p++;
//	}
//
//	// 交换 ...
//	int i = 0;
//	char c;
//	while (i <= len / 2 - 1)
//	{
//		c = *(s + i);//保存当前地址中的值
//		*(s + i) = *(s + len - 1 - i);//将对称位置的值赋给当前地址
//		*(s + len - 1 - i) = c;//将保存的值赋给对称位置
//		i++;
//	}
//}
//
//int main()
//{
//	char s[] = "www.runoob.com";
//	printf("'%s' =>\n", s);
//	reverse(s);           // 反转字符串
//	printf("'%s'\n", s);
//	return 0;
//}

//36.输出1-100的所有素数
//int main() {
//	printf("1-100的素数有：\n");
//	for (int i = 1; i <= 100; i++)
//	{
//		if (i == 1)
//		{
//			printf("%d ", i);
//		}
//		else {
//			if (i / 2 == 0)
//			{
//				break;
//			}
//			else {
//				for (int j = 2; j <= i - 1; j++) {
//					if (i % j == 0) {
//						break;
//					}
//					if (j == i - 1) {
//						printf("%d ", i);
//					}
//				}
//			}
//
//		}
//
//
//	}
//}

//37.选择排序(小到大)
//void handleSelectNumber(int list[], int n) {
//	for (int i = 0; i < n; i++)
//	{
//		int min = list[i];
//		for (int j = i + 1; j < n; j++)
//		{
//			if (list[j] < list[i]) {
//				int temp = list[i];
//				list[i] = list[j];
//				list[j] = temp;
//			}
//		}
//	}
//}
//int main() {
//	int n;
//	int numbers[10];
//	printf("需要排序的数字个数：\n");
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &numbers[i]);
//	}
//	handleSelectNumber(numbers, n);
//\
//	for (int j = 0; j < n; j++)
//	{
//		printf("%d", numbers[j]);
//	}
//}

//38求一个3 * 3矩阵对角线元素之和
//#define N 3
//int main() {
//	int sum = 0;
//	int matrix[N][N];
//	printf("请输入一个3*3矩阵：\n");
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++) {
//			scanf("%d", &matrix[i][j]);
//		}
//	}
//	for (int k = 0; k < 3; k++)
//	{
//		sum += matrix[k][k];
//	}
//	printf("该矩阵对角线元素之和为%d", sum);
//
//	return 0;
//}

//39.有一个已经排好序的数组。现输入一个数，要求按原来的规律将它插入数组中。
//int main() {
//	int numbers[10] = { 1,3,5,7,9,11,13,15,17,19 };
//	int n;
//	printf("请输入一个数字：\n");
//	scanf("%d", &n);
//	int i;
//	for (i = 0; i < 10; i++)
//	{
//		if (n < numbers[i]) {
//			break;
//		}
//	}
//	for (int j = 9; j >= i; j--)
//	{
//		numbers[j + 1] = numbers[j];
//	}
//	numbers[i] = n;
//	printf("插入后的数组为：\n");
//	for (int k = 0; k < 11; k++)
//	{
//		printf("%d ", numbers[k]);
//	}
//	return 0;
//}

//40将一个数组逆序输出。(重大到小排序)
//int main() {
//	int numbers[10];
//	printf("请输入10个数字：\n");
//	for (int i = 0; i < 9; i++)
//	{
//		scanf("%d", &numbers[i]);
//	}
//	for (int i = 0; i < 8; i++)
//	{
//		for (int j = i + 1; j < 9; j++)
//		{
//			if (numbers[i] < numbers[j])
//			{
//				int temp = numbers[i];
//				numbers[i] = numbers[j];
//				numbers[j] = temp;
//			}
//		}
//	}
//	for (int i = 0; i < 9; i++)
//	{
//		printf("%d ", numbers[i]);
//	}
//	return 0;
//}

//41.题目：学习 static 定义静态变量的用法。
//在 C 语言中，static 关键字用于声明静态变量。静态变量与普通变量不同，它们的生存期和作用域是不同的。
//静态变量在声明时被初始化，只被初始化一次，而且在整个程序的生命周期内都保持存在。在函数内声明的静态变量只能在该函数内访问，而在函数外声明的静态变量则只能在该文件内访问。
//#include <stdio.h>
//
//void foo()
//{
//    static int x = 0;
//    x++;
//    printf("%d\n", x);
//}
//
//int main()
//{
//    foo();  // 输出 1
//    foo();  // 输出 2
//    foo();  // 输出 3
//    return 0;
//}

//42.题目：学习使用auto定义变量的用法。
//声明自动变量：auto关键字用于声明局部变量的存储类，表示该变量的生命周期与其所在的函数调用周期相关。
// 每次函数调用时，auto变量会被创建并初始化，函数结束时会自动销毁
//int main()
//{
//	int i, num;
//	num = 2;
//	for (i = 0; i < 3; i++)
//	{
//		printf("num 变量为 %d \n", num);
//		num++;
//		{
//			/*		auto int num = 1;*/
//			int num = 1;
//			printf("内置模块 num 变量为 %d \n", num);
//			num++;
//		}
//	}
//	return 0;
//}

//43.学习使用static的另一用法。
//int main()
//{
//	int i, num;
//	num = 2;
//	for (i = 0; i < 3; i++)
//	{
//		printf("num 变量为 %d \n", num);
//		num++;
//		{
//			static int num = 1;
//			printf("内置模块 num 变量为 %d\n", num);
//			num++;
//		}
//
//	}
//	return 0;
//}

//44.学习使用如何调用外部函数。
//int a, b, c;
//void add()
//{
//	int a;
//	a = 3;
//	c = a + b;
//}
//int main()
//{
//	a = b = 4;
//	add();
//	printf("c 的值为 %d\n", c);
//	return 0;
//}


/*
45.学习使用register定义变量的方法。
register是C语言中的一个存储类修饰符，用于提示编译器将变量尽可能存储在CPU的寄存器中，而不是内存中，以提高访问速度。以下是关于register关键字的详细说明：
1. 基本作用
提高访问速度：寄存器的访问速度比内存快，因此将频繁使用的变量存储在寄存器中可以优化性能。
局部变量优化：register通常用于局部变量，尤其是循环计数器等频繁访问的变量。
2. 使用限制
仅用于局部变量和函数参数：register不能用于全局变量或静态变量。
不能获取地址：由于寄存器变量可能不存储在内存中，不能对其使用取地址符&。C
复制代码
register int x = 10;
int *ptr = &x; // 错误：无法获取寄存器变量的地址*/
//int main()
//{
//	register int i;
//	int tmp = 0;
//	for (i = 1; i <= 100; i++)
//		tmp += i;
//	printf("总和为 %d\n", tmp);
//	return 0;
//}


//46.宏#define命令练习。
//#define TRUE 1
//#define FALSE 0
//#define SQ(x) (x)*(x)
//int main()
//{
//	int num;
//	int flage = 1;
//	while (flage) {
//		printf("请输入一个数字：");
//		scanf("%d", &num);
//		if (num >= 10)
//		{
//			flage = 1;
//		}
//		else {
//			flage = 0;
//		}
//		printf("该数字的平方是%d\n", SQ(num));
//	}
//	return 0;
//}

//47.宏#define命令练习2。
//#define exchange(a,b){int t;t = a;a = b;b = t;}
//int main()
//{
//	int x = 5;
//	int y = 10;
//	printf("交换前：x = %d, y = %d\n", x, y);
//	exchange(x, y);
//	printf("交换后：x = %d, y = %d\n", x, y);
//	return 0;
//};

//48.宏#define命令练习3
//#define LAG >
//#define SMA <
//#define EQL ==
//int main() {
//	int a, b;
//	printf("请输入两个数字：\n");
//	scanf("%d %d", &a, &b);
//	if (a LAG b)
//	{
//		printf("%d>%d", a, b);
//	}
//	else if (a SMA b) {
//		printf("%d<%d", a, b);
//	}
//	else
//	{
//		printf("%d==%d", a, b);
//	}
//	return 0;
//}

//49.#if #ifdef和#ifndef的综合应用。
//#define MAX
//#define MAXNUM(X,Y)(X>Y)?X:Y 
//#define MINNUM(X,Y)(X>Y)?X:Y 
//int main() {
//	int a, b;
//	printf("请输入两个数字：\n");
//	scanf("%d %d", &a, &b);
//#ifdef MAX
//	printf("更大的数字是 %d\n", MAXNUM(a, b));
//#else
//	printf("最小值是%d\n", MINNUM(a, b));
//#endif
//
//#ifndef MIN
//	printf("更大的数字是 %d\n", MAXNUM(a, b));
//#else
//	printf("最小值是%d\n", MINNUM(a, b));
//#endif
//#undef MAX
//#ifdef MAX
//	printf("最小值是%d\n", MINNUM(a, b));
//#else
//	printf("更大的数字是 %d\n", MAXNUM(a, b));
//#endif 
//#define MIN
//#ifndef MIN
//	printf("最小值是%d\n", MINNUM(a, b));
//#else
//	printf("更大的数字是 %d\n", MAXNUM(a, b));
//#endif 
//	return 0;
//}

//50.#include 的应用练习。
//#include "test.cpp"
//int main()
//{
//	int i = 10;
//	int j = 20;
//	if (i LAG j)
//		printf("%d 大于 %d \n", i, j);
//	else if (i EQ j)
//		printf("%d 等于 %d \n", i, j);
//	else if (i SMA j)
//		printf("%d 小于 %d \n", i, j);
//	else
//		printf("没有值。\n");
//	return 0;
//}

//51.题目：学习使用按位与 &。
//#include <stdio.h>
//int main()
//{
//	int a, b;
//	a = 077;//base8表示法，等于十进制的63
//	b = a & 3;//3的二进制表示为0000 0011
//	printf("a & b(decimal) 为 %d \n", b);//63的二进制表示为0011 1111，按位与运算后结���为0000 0011，即十进制的3		
//	b &= 7;
//	printf("a & b(decimal) 为 %d \n", b);
//	return 0;
//}

//52题目：学习使用按位或 | 。
//程序分析：0 | 0 = 0; 0 | 1 = 1; 1 | 0 = 1; 1 | 1 = 1 。
//#include<stdio.h>
//int main()
//{
//	int a, b;
//	a = 077;
//	b = a | 3;
//	printf("b 的值为 %d \n", b);//63的二进制表示为0011 1111，3的二进制表示为0000 0011，按位或运算后结果为0011 1111，即十进制的63
//	b |= 7;
//	printf("b 的值为 %d \n", b);
//	return 0;
//}

//53题目：学习使用按位异或 ^。
//程序分析：0 ^ 0 = 0; 0 ^ 1 = 1; 1 ^ 0 = 1; 1 ^ 1 = 0 。
//#include <stdio.h>
//int main()
//{
//	int a, b;
//	a = 077;
//	b = a ^ 3;
//	printf("b 的值为 %d \n", b);
//	b ^= 7;
//	printf("b 的值为 %d \n", b);
//	return 0;
//}

//54题目：取一个整数 a 从右端开始的 4～7 位。
//程序分析：可以这样考虑：
//(1)先使 a 右移 4 位。
//(2)设置一个低 4 位全为 1，其余全为 0 的数，可用~(~0 << 4)
//(3)将上面二者进行 & 运算。
//#include <stdio.h>
//int main()
//{
//	unsigned a, b, c, d;
//	printf("请输入整数：\n");
//	scanf("%o", &a);
//	b = a >> 4;
//	c = ~(~0 << 4);//低4位全为1
//	d = b & c;
//	printf("%o\n%o\n", a, d);
//	return 0;
//}

//55.题目：学习使用按位取反~。
//程序分析：~0 = -1; ~1 = -2;
//int main()
//{
//	int a, b;
//	a = 234;
//	b = ~a;
//	printf("a 的按位取反值为（十进制） %d \n", b);//
//	a = ~a;
//	printf("a 的按位取反值为（十六进制） %x \n", a);//
//	return 0;
//}

//61.题目：打印出杨辉三角形（要求打印出10行）
//int numbers[10][10] = { 0 };
//int main() {
//	for (int i = 0; i < 10; i++)
//	{
//		for (int j = 0; j <= i; j++) {
//			if (i == 0 && j == 0)
//			{
//				numbers[i][j] = 1;
//				printf("%d ", numbers[i][j]);
//			}
//			else {
//				numbers[i][j] = numbers[i - 1][j] + numbers[i - 1][j - 1];
//				printf("%d ", numbers[i][j]);
//			}
//		}
//		printf("\n");
//	}
//}
//答案：
//int main()
//{
//    int i, j;
//    int a[10][10];
//    printf("\n");
//    for (i = 0; i < 10; i++) {
//        a[i][0] = 1;
//        a[i][i] = 1;
//    }
//    for (i = 2; i < 10; i++)
//        for (j = 1; j < i; j++)
//            a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
//    for (i = 0; i < 10; i++) {
//        for (j = 0; j <= i; j++)
//            printf("%5d", a[i][j]);
//        printf("\n");
//    }
//}


////66.输入3个数a, b, c，按大小顺序输出
//void changeValue(int* a, int* b) {
//	int temp;
//	temp = *a;
//	*a = *b;
//	*b = temp;
//}
//void main() {
//	int a, b, c;
//	printf("请输如三个数");
//	scanf("%d %d %d", &a, &b, &c);
//	if (a < b)
//	{
//		changeValue(&a, &b);
//	}if (a < c) {
//		changeValue(&a, &c);
//	}if (b < c)
//	{
//		changeValue(&b, &c);
//	}
//	printf("从大到小的顺序为：%d %d %d", a, b, c);
//}

//67.输入数组，最大的与第一个元素交换，最小的与最后一个元素交换，输出数组。
//int main() {
//	int numbers[5];
//	int max, min;
//	scanf("请输入5个数字：\n");
//	for (int i = 0; i < 5; i++)
//	{
//		scanf("%d", &numbers[i]);
//	}
//	min = numbers[0];
//	max = numbers[0];
//	for (int i = 0; i < 5; i++)
//	{
//		if (numbers[i] < min)
//		{
//			min = numbers[i];
//		}if (numbers[max] > max)
//		{
//			max = numbers[i];
//		}
//	}
//	numbers[0] = max;
//	numbers[4] = min;
//	printf("最大值为%d，最小值为%d\n", max, min);
//	printf("交换后的数组为：\n");
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d", numbers[i]);
//	}
//}
//答案：
//void fun(int* s, int n)
//{
//    int i;
//    int max = s[0];
//    int a = 0;
//    for (i = 0; i < n; i++)
//    {
//        if (s[i] > max)
//        {
//            max = s[i];
//            a = i;
//        }
//    }
//    s[a] = s[0];
//    s[0] = max;
//    int j;
//    int min = s[n - 1];
//    int b = n - 1;
//    for (j = 0; j < n; j++)
//    {
//        if (s[j] < min)
//        {
//            min = s[j];
//            b = j;
//        }
//    }
//    s[b] = s[n - 1];
//    s[n - 1] = min;
//}
//
//void printf_s(int* s, int n)
//{
//    int i;
//    for (i = 0; i < n; i++)
//        printf("%d ", s[i]);
//    printf("\n");
//}
//
//int main()
//{
//    int s[20];
//    int i, n;
//    printf("设置数组长度(<20):");
//    scanf("%d", &n);
//    printf("输入 %d 个元素:\n", n);
//    for (i = 0; i < n; i++)
//        scanf("%d", &s[i]);
//    fun(s, n);
//    printf_s(s, n);
//    return 0;
//}

//68题目：有 n 个整数，使其前面各数顺序向后移 m 个位置，最后m个数变成最前面的 m 个数。
//int main() {
//
//	int n, m;
//
//	printf("请输入整数个数 n：");
//	scanf("%d", &n);
//
//	printf("请输入向后移动的位置 m：");
//	scanf("%d", &m);
//
//	int* arr = (int*)malloc(n * sizeof(int));
//	int* arr2 = (int*)malloc(m * sizeof(int));
//	if (arr == NULL) {
//		printf("内存分配失败n");
//		return 1;
//	}
//	printf("请输入n个整数");
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	for (int i = 0; i < m; i++)
//	{
//		arr2[i] = arr[n - m + i];
//	}
//	for (int i = n - m; i >= 0; i--)
//	{
//		arr[i + m] = arr[i];
//	}for (int i = 0; i < m; i++)
//	{
//		arr[i] = arr2[i];
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d", arr[i]);
//	}
//}
//答案：
//#include <stdio.h>
//// 通过 shiftArray 函数来实现数组元素的移动。
//void shiftArray(int arr[], int n, int m) {
//	int temp[m];
//
//	// 保存最后 m 个数到临时数组
//	for (int i = n - m, j = 0; i < n; i++, j++) {
//		temp[j] = arr[i];
//	}
//
//	// 将前面的 n-m 个数向后移动 m 个位置
//	for (int i = n - m - 1; i >= 0; i--) {
//		arr[i + m] = arr[i];
//	}
//
//	// 将临时数组中的数放到最前面
//	for (int i = 0; i < m; i++) {
//		arr[i] = temp[i];
//	}
//}
//// 在 main 函数中获取用户输入的数组和要移动的位置，调用s hiftArray 函数，最后输出移动后的数组
//
//int main() {
//	int n, m;
//
//	printf("请输入整数个数 n：");
//	scanf("%d", &n);
//
//	printf("请输入向后移动的位置 m：");
//	scanf("%d", &m);
//
//	int arr[n];
//
//	printf("请输入 %d 个整数：", n);
//	for (int i = 0; i < n; i++) {
//		scanf("%d", &arr[i]);
//	}
//
//	shiftArray(arr, n, m);
//
//	printf("移动后的数组：");
//	for (int i = 0; i < n; i++) {
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//
//	return 0;
//}

//69有n个人围成一圈，顺序排号。从第一个人开始报数（从1到3报数），凡报到3的人退出圈子，问最后留下的是原来第几号的那位

//70.写一个函数，求一个字符串的长度，在 main 函数中输入字符串，并输出其长度。
//int main() {
//	char str[100];
//	printf("请输入一个字符串：");
//	scanf("%s", str);
//	int length = 0;
//	int i = 0;
//	while (str[i] != '\0')
//	{
//		i++;
//		length++;
//	}
//	printf("字符串的长度为%d\n", length);
//}



//71.编写input()和output()函数输入，输出3个学生的数据记录。
//struct Student
//{
//	char name[20];
//	char gender[5];
//	int age;
//};
//int main() {
//	struct Student students[3];
//	printf("请输入5个学生的信息：\n");
//	for (int i = 0; i < 3; i++)
//	{
//		printf("请输入第%d个学生的姓名、性别、年龄：\n", i + 1);
//		scanf("%s %s %d", students[i].name, students[i].gender, &students[i].age);
//	}
//	printf("学生的信息如下：\n");
//	for (int i = 0; i < 3; i++)
//	{
//		printf("姓名：%s, 性别：%s, 年龄：%d\n", students[i].name, students[i].gender, students[i].age);
//	}
//	return 0;
//}
//答案：
//typedef struct {
//	char name[20];
//	char sex[5];
//	int  age;
//}Stu;
//void input(Stu* stu);
//void output(Stu* stu);
//int main()
//{
//	Stu stu[5];
//	printf("请输入5个学生的信息：姓名 性别 年龄:\n");
//	input(stu);
//	printf("5个学生的信息如下：\n姓名  性别  年龄\n");
//	output(stu);
//
//	system("pause");
//	return 0;
//}
//void input(Stu* stu)
//{
//	int i;
//	for (i = 0; i < 5; i++)
//		scanf("%s%s%d", stu[i].name, stu[i].sex, &(stu[i].age));
//}
//void output(Stu* stu)
//{
//	int i;
//	for (i = 0; i < 5; i++)
//		printf("%s %s %d\n", stu[i].name, stu[i].sex, stu[i].age);
//}


//创建一个链表。
//struct LINKStruct
//{
//	int data;
//	struct LINKStruct* next;
//};
////向后方添加链表结构
//void addNode(LINKStruct* head) {
//	LINKStruct* currentAddress = head;
//	while (currentAddress->next != NULL)
//	{
//		currentAddress = currentAddress->next;
//	}
//	if (currentAddress->next == NULL)
//	{
//		LINKStruct* newNode = (LINKStruct*)malloc(sizeof(LINKStruct));
//		printf("请后续输入节点的值：\n");
//		scanf("%d", &(newNode->data));
//		newNode->next = NULL;
//		currentAddress->next = newNode;
//	}
//}
////打印现有的链表结构
//void handlePrintNotes(LINKStruct* address) {
//	LINKStruct* currentAddress = address->next;
//	printf("链表的值为：\n");
//	while (currentAddress != NULL)
//	{
//		printf("%d ", currentAddress->data);
//		currentAddress = currentAddress->next;
//	}
//	printf("\n");
//}
//
////删除指定的链表数据
//void handleDeleteNote(LINKStruct* address) {
//	int data;
//	LINKStruct* currentAddress = address;
//	printf("请输入要删除的节点的data数据值：\n");
//	scanf("%d", &data);
//	//头节点不在存储数据只用于操作节点
//	while (currentAddress->next != NULL) {
//		if (currentAddress->next->data == data)
//		{
//			//将下下一个节点的地址赋值给当前节点的下一个节点
//			currentAddress->next = currentAddress->next->next;
//			////释放下一个节点的内存
//			//free(currentAddress->next);
//			return;
//		}
//		else {
//			currentAddress = currentAddress->next;
//		}
//	}
//}
//
//int main() {
//	//获取头节点
//	LINKStruct head;
//	head.next = NULL;
//	int number;
//	printf("请输入插入节点的个数");
//	scanf("%d", &number);
//	for (int i = 0; i < number; i++)
//	{
//		addNode(&head);
//	}
//	handlePrintNotes(&head);
//
//	handleDeleteNote(&head);
//
//	handlePrintNotes(&head);
//
//	return 0;
//}


//75.输入一个整数，并将其反转后输出。
//int main() {
//	int number;
//	printf("请输入一个整数：\n");
//	scanf("%d", &number);
//	int reversedNumber = 0;
//
//	while (number != 0) {
//		int digit = number % 10;
//		reversedNumber = reversedNumber * 10 + digit;
//		number = number / 10;
//	}
//
//	printf("反转后的整数为：%d\n", reversedNumber);
//}
// 


//76.题目：编写一个函数，输入n为偶数时，调用函数求1/2+1/4+...+1/n,当输入n为奇数时，调用函数1/1+1/3+...+1/n(利用指针函数)。
//double handleOddNumber(int n) {
//	double sum = 0;
//	for (int i = 1; i <= n; i += 2)
//	{
//		sum += (double)1.0 / i;
//	}
//	return sum;
//}
//double handleEvenNumber(int n) {
//	double sum = 0;
//	for (int i = 2; i <= n; i += 2)
//	{
//		sum += (double)1.0 / i;
//	}
//	return sum;
//}
//int main() {
//	int n;
//	double result = 0;
//	double (*funcPtr)(int);//指针函数声明（接受函数的地址，定义地址名字与函数参数类型）
//	printf("请输入一个整数n：\n");
//	scanf("%d", &n);
//
//	if (n % 2 == 0)
//	{
//		funcPtr = handleEvenNumber;
//	}
//	else {
//		funcPtr = handleEvenNumber;
//	}
//	result = (*funcPtr)(n);//暴露函数地址，调用函数
//	printf("结果为：%lf\n", result);
//}


//练习指向指针的指针（使用多级指针遍历字符串数组）。
//int main() {
//	const char* strArray[] = { "apple", "banana", "cherry" };
//	const char** ptr;
//	for (int i = 0; i < 3; i++)
//	{
//		ptr = &strArray[i];
//		printf("%s\n", *ptr);
//	}
//}

//题目：找到年龄最大的人，并输出。请找出程序中有什么问题。
//struct Person
//{
//	char name[20];
//	int age;
//};
//int main() {
//	Person personList[] = { {"li", 18}, {"wang", 25}, {"sun", 22} };
//	Person oldestPerson;
//	int maxAge = 0;
//
//	for (int i = 0; i < 3; i++)
//	{
//		if (personList[i].age > maxAge)
//		{
//			maxAge = personList[i].age;
//			oldestPerson = personList[i];
//		}
//	}
//	if (oldestPerson.age != NULL)
//	{
//		printf("%s,%d\n", oldestPerson.name, oldestPerson.age);
//	}
//	else {
//		printf("没有找到年龄最大的人\n");
//	}
//
//}

//题目：字符串排序
//#define MAX_LEN 20 // 定义常量表示字符串的最大长度
//
//// 函数声明：用于交换两个字符串
//void swap(char* str1, char* str2);
//
//int main() {
//	char str1[MAX_LEN], str2[MAX_LEN], str3[MAX_LEN];
//
//	// 提示用户输入字符串
//	printf("请输入3个字符串，每个字符串以回车结束:\n");
//
//	// 使用 fgets 读取输入并去除换行符
//	fgets(str1, sizeof(str1), stdin);
//	str1[strcspn(str1, "\n")] = '\0'; // 去除换行符
//
//	fgets(str2, sizeof(str2), stdin);
//	str2[strcspn(str2, "\n")] = '\0'; // 去除换行符
//
//	fgets(str3, sizeof(str3), stdin);
//	str3[strcspn(str3, "\n")] = '\0'; // 去除换行符
//
//	// 对字符串进行排序 
//	/*
//	两个字符串自左向右逐个字符相比（按 ASCII 值大小相比较），直到出现不同的字符或遇 \0 为止。如：
//1."A"<"B"
//2."A"<"AB"
//3."Apple"<"Banana"
//4."A"<"a"
//5."compare"<"computer"*/
//	if (strcmp(str1, str2) > 0) swap(str1, str2);
//	if (strcmp(str2, str3) > 0) swap(str2, str3);
//	if (strcmp(str1, str2) > 0) swap(str1, str2);
//
//	// 输出排序后的结果
//	printf("排序后的结果为：\n");
//	printf("%s\n%s\n%s\n", str1, str2, str3);
//
//	return 0;
//}
//
//// 交换两个字符串的内容
//void swap(char* str1, char* str2) {
//	char temp[MAX_LEN];
//	strcpy(temp, str1); // 将 str1 复制到临时字符串 temp
//	strcpy(str1, str2); // 将 str2 复制到 str1
//	strcpy(str2, temp); // 将 temp 复制到 str2
//}

//80.海滩上有一堆桃子，五只猴子来分。第一只猴子把这堆桃子平均分为五份，
// 多了一个，这只 猴子把多的一个扔入海中，拿走了一份
// 。第二只猴子把剩下的桃子又平均分成五份，又多了 一个，它同样把多的一个扔入海中，
// 拿走了一份，第三、第四、第五只猴子都是这样做的， 问海滩上原来最少有多少个桃子？
//int main() {
//	int peaches = 0; // 初始化桃子数量
//	int found = 0;   // 标志是否找到满足条件的桃子数量
//	// 从1开始尝试不同的桃子数量
//	while (!found) {
//		peaches++; // 增加桃子数量
//		int remaining = peaches; // 剩余的桃子数量
//		int valid = 1; // 标志当前桃子数量是否有效
//		// 模拟五只猴子的分桃过程
//		for (int i = 0; i < 5; i++) {
//			if ((remaining - 1) % 5 == 0) { // 检查是否能平均分成五份且多一个
//				remaining = remaining - (remaining - 1) / 5 - 1; // 扔掉一个，拿走一份
//			}
//			else {
//				valid = 0; // 如果不能满足条件，标记为无效
//				break;
//			}
//		}
//		if (valid) { // 如果当前桃子数量有效，结束循环
//			found = 1;
//		}
//	}
//	printf("海滩上原来最少有 %d 个桃子。\n", peaches); // 输出结果
//	return 0;
//}

//81题目：809*??=800*??+9*?? 
// 其中??代表的两位数,
// 809*??为四位数
// ，8*??的结果为两位数，
// 9*??的结果为3位数
// 。求??代表的两位数，及809*??后的结果。
//int main() {
//
//	for (int i = 10; i < 100; i++)
//	{
//		if (809 * i >= 1000 && 809 * i < 10000 && 8 * i >= 10 && 8 * i < 100 && 9 * i >= 100 && 9 * i < 1000)//吧表达式写在前面，判定值写在后面
//		{
//			printf("??代表的两位数为%d，809*??的结果为%d\n", i, 809 * i);
//		}
//	}
//
//	return 0;
//}

//82八进制转换为十进制
//#include <math.h>
//int main()
//{
//	char  number[100];
//
//	printf("请输入一个八进制数：\n");
//	scanf("%s", &number);
//	int length = strlen(number);
//	int sum = 0;
//	for (int i = 0; i < length; i++)
//	{
//		int digit = number[i] - '0';//将字符转化数字
//		sum += digit * pow(8, length - 1 - i);
//	}
//	printf("转换后的十进制数为：%d\n", sum);
//
//}

//83.求0—7所能组成的奇数个数。(八个数字位，每位只能取0-7)、
//#include <math.h>
//int main() {
//	int sum = 0;
//	for (int i = 1; i < 8; i++)
//	{
//		int currentCount = 0;
//		if (i == 1)
//		{
//			currentCount = 4;//个位数只能是1,3,5,7
//			sum += currentCount;
//			printf("第%d为的奇数总数为%d\n", i, sum);
//		}
//		else if (i == 2)
//		{
//			currentCount = 4 * 7;//十位数有1-7七种选择，个位数只能是1,3,5,7
//			sum += currentCount;
//			printf("第%d为的奇数总数为%d\n", i, sum);
//		}
//		else
//		{
//			currentCount = 7 * 4 * pow(8, i - 2);
//			sum += currentCount;
//			printf("第%d为的奇数总数为%d\n", i, sum);
//
//		}
//	}
//	printf("0-7所能组成的奇数个数总和为%d\n", sum);
//}

//84.一个偶数总能表示为两个素数之和。
//int distinguishPrime(int number) {
//
//	if (number == 1)
//	{
//		return 1;
//	}
//	for (int i = 2; i < number - 1; i++)
//	{
//		if (number % i == 0) {
//			return 0;
//		}
//	}
//	return 1;
//}
//void decomposeEventNumber(int number) {
//
//	for (int i = 1; i <= sqrt(number); i++)//sqrt(_In_ double _X) 开平方函数
//	{
//		if (distinguishPrime(i) && distinguishPrime(number - i))
//		{
//			printf("%d可由%d,%d两个素数组成", number, i, number - i);
//		}
//	}
//}
//int main() {
//	int number;
//	printf("请输入一个偶数");
//	scanf("%d", &number);
//	int flage = 1;
//	while (flage == 1)
//	{
//		if (number % 2 == 0)
//		{
//			flage = 0;
//			decomposeEventNumber(number);
//		}
//		else {
//			printf("输入的不是偶数，请重新输入一个偶数：");
//			scanf("%d", &number);
//		}
//	}
//}


//85.判断一个素数能整除多少个9
//int distinguishPrime(int number) {
//
//	if (number == 1)
//	{
//		return 1;
//	}
//	for (int i = 2; i < number - 1; i++)
//	{
//		if (number % i == 0) {
//			return 0;
//		}
//	}
//	return 1;
//}
//int main() {
//
//	int number;
//	printf("请输入一个素数:\n");
//	scanf("%d", &number);
//	int falge = 1;
//	while (falge) {
//		if (distinguishPrime(number) == 1)
//		{
//			falge = 0;
//
//			int falge2 = 1;
//			long int countNumber = 9;
//			int count = 1;
//			while (falge2) {
//				if (countNumber % number == 0)
//				{
//					falge2 = 0;
//					printf("素数%d能整除%d个9组成的数%ld\n", number, count, countNumber);
//
//				}
//				else
//				{
//					count++;
//					countNumber = countNumber * 10 + 9;
//
//				}
//			}
//		}
//		else
//		{
//			printf("请输入一个素数:\n");
//			scanf("%d", &number);
//		}
//	}
//
//	return 0;
//}


//86.两个字符串连接程序 。
//int main() {
//	char str1[100];
//	char str2[100];
//	printf("请输入第一个字符串：\n");
//	scanf("%s", str1);
//	printf("请输入第二个字符串：\n");
//	scanf("%s", str2);
//	//找到第一个字符串的结尾
//	int length1 = strlen(str1);
//	//将第二个字符串连接到第一个字符串的结尾
//	for (int i = 0; i <= strlen(str2); i++) {
//		str1[length1 + i] = str2[i];
//	}
//	printf("连接后的字符串为：%s\n", str1);
//	return 0;
//}


//87.回答结果（结构体变量传递）。
//struct MyStruct
//{
//	int x;
//	char y[100];
//};
//
//void handeleChangeStrctInfunction(MyStruct object) {
//	object.x = 20;
//	strcpy(object.y, "Changed in function");
//	printf("x: %d, y: %s\n", object.x, object.y);
//}
//
//int main() {
//	MyStruct demo;
//	demo.x = 10;
//	strcpy(demo.y, "Hello, World!");
//	printf("x: %d, y: %s\n", demo.x, demo.y);
//	handeleChangeStrctInfunction(demo);
//	printf("x: %d, y: %s\n", demo.x, demo.y);
//}

//88.读取7个数（1—50）的整数值，每读取一个值，程序打印出该值个数的
//int main()
//{
//	int n, i, j;
//	printf("请输入数字:\n");
//
//	for (i = 0; i < 7; i++)
//	{
//		scanf("%d", &n);
//		if (n > 50) {
//			printf("请重新输入:\n");
//			i--;
//		}
//		else
//		{
//			for (j = 0; j < n; j++)
//				printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//89.题目：某个公司采用公用电话传递数据，数据是四位的整数，在传递过程中是加密的，
// 加密规则如下： 每位数字都加上5,然后用和除以10的余数代替该数字，再将第一位和第四位交换，第二位和第三位交换。
//int main() {
//	puts("请输入一个四位整数：");
//	int number;
//	scanf("%d", &number);
//	while (number < 1000 && number >= 10000)
//	{
//		puts("请输入一个四位整数：");
//		scanf("%d", &number);
//	}
//	int digits[4];
//	//提取每一位数字
//	for (int i = 0; i < 4; i++)
//	{
//		digits[i] = ((number % 10) + 5) % 10;
//		number = number / 10;
//	}
//	printf("加密后的数字为：%d%d%d%d\n", digits[0], digits[1], digits[2], digits[3]);
//}

//90.专升本一题，读结果。
//#define M 5
//int main()
//{
//	int a[M] = { 1,2,3,4,5 };
//	int i, j, t;
//	i = 0; j = M - 1;
//	while (i < j)
//	{
//		t = *(a + i);
//		*(a + i) = *(a + j);
//		*(a + j) = t;
//		i++; j--;
//	}
//	for (i = 0; i < M; i++) {
//		printf("%d\n", *(a + i));
//	}
//
//}
//取反输出结果为5 4 3 2 1

//94.猜谜游戏
// 处理是否继续游戏的逻辑
//int ask_to_play_again() {
//	char begin;
//	printf("需要挑战最高级别不？Y/N \n");
//	scanf(" %c", &begin);  // 注意前面有个空格，确保跳过上次输入的换行符
//	if (begin == 'Y' || begin == 'y') {
//		return 1;  // 用户选择继续游戏
//	}
//	printf("谢谢，再见!\n");
//	return 0;  // 用户选择退出游戏
//}
//
//// 游戏的主体逻辑
//void caizi(void) {
//	int n;
//	int count = 1;
//	srand((unsigned int)time(NULL));  // 更严谨地处理随机数种子
//	int m = (rand() % 100) + 1;
//
//	printf("游戏开始，请输入数字:\n");
//
//	while (1) {
//		scanf("%d", &n);
//
//		if (n == m) {
//			printf("猜中了，使用了 %d 次！\n", count);
//
//			// 根据猜测次数，给出不同的评价
//			if (count == 1) {
//				printf("你是神级人物了！膜拜\n");
//			}
//			else if (count <= 5) {
//				printf("你是王级人物了！非常赞\n");
//			}
//			else if (count <= 10) {
//				printf("你是大师级人物了！狂赞\n");
//			}
//			else if (count <= 15) {
//				printf("你是钻石级人物了！怒赞\n");
//			}
//			else {
//				printf("你的技术还有待提高哦！\n");
//			}
//
//			// 询问是否继续游戏
//			if (ask_to_play_again()) {
//				caizi();  // 重新开始游戏
//			}
//			break;
//		}
//
//		else if (n < m) {
//			puts("太小了!");
//			puts("重新输入:");
//		}
//		else {
//			puts("太大了!");
//			puts("重新输入:");
//		}
//
//		count++;  // 计数器
//	}
//}
//
//int main(void) {
//	caizi();
//	return 0;
//}

//95.简单的结构体应用实例。
//struct Progrmming
//{
//	float number;
//	char* name;
//};
//
//int main() {
//	Progrmming demo;
//	/*strcpy(demo.name, "C Programming");*/
//	char string[] = "C Programming";
//	demo.name = string;//string为char类型的指针，指向字符串常量的首地址
//	demo.number = 99.5;
//	printf("Name: %s\n", demo.name);
//	printf("Number: %.2f\n", demo.number);
//}

//96.计算字符串中子串出现的次数 。
//int main() {
//	char str[100];
//	char substr[100];
//	printf("请输入一个字符串：\n");
//	scanf("%s", str);
//	printf("请输入要查找的子串：\n");
//	scanf("%s", substr);
//	int count = 0;
//	int lenstr, lensubstr;
//	lenstr = strlen(str);
//	lensubstr = strlen(substr);
//	for (size_t i = 0; i <= lenstr - lensubstr; i++)
//	{
//		for (int j = 0; j < lensubstr; j++)
//		{
//			if (str[i + j] == substr[j]) {
//				if (j == lensubstr - 1)
//				{
//					count++;
//				}
//				continue;
//			}
//			else
//			{
//				break;
//			}
//		}
//	}
//	printf("子串出现的次数为：%d\n", count);
//}

//97.从键盘输入一些字符，逐个把它们送到磁盘上去，直到输入一个#为止。
//int main() {
//	FILE* fp;
//	char ch;
//	fp = fopen("data.txt", "w");//w,写入方式打开文件
//	if (fp == NULL) {
//		printf("无法打开文件。\n");
//		return 1;
//	}
//	else
//	{
//		printf("请输入一些字符，输入#结束：\n");
//		while (1) {
//			ch = getchar();
//			if (ch == '#') {
//				break;
//			}
//			fputc(ch, fp);//写入字符流
//		}
//		fclose(fp);
//		printf("字符已写入文件output.txt。\n");
//		return 0;
//	}
//}

//98.从键盘输入一个字符串，将小写字母全部转换成大写字母，然后输出到一个磁盘文件"test"中保存。 输入的字符串以！结束。
//int main() {
//	FILE* fp;
//	FILE* fp2 = fopen("data2.txt", "r");//r,读取方式打开文件
//	char currentStr[100];
//	char fileStr[100];
//	fp = fopen("data.txt", "w");//w,写入方式打开文件
//	if (fp == NULL)
//	{
//		printf("无法打开文件\n");
//		return 0;
//	}
//	else {
//		printf("请输入一个字符串，以！结束：\n");
//		scanf("%s", currentStr);
//		for (int i = 0; i < strlen(currentStr); i++)
//		{
//			if (currentStr[i] > 'a' && currentStr[i] < 'z') {
//				currentStr[i] = currentStr[i] - 32;//-('a'-'A');
//			}
//		}
//		/*fprintf(fp, "%s\n", currentStr);*/ //写入字符串流
//		fputs(currentStr, fp);//写入字符串流
//		fclose(fp);
//		//
//		fgets(fileStr, 255, fp2);
//		printf("当前文件中的字符串为：%s\n", fileStr);
//		fclose(fp2);
//		return 1;
//	}
//
//}

//99.有两个磁盘文件A和B,各存放一行字母，要求把这两个文件中的信息合并（按字母顺序排列），输出到一个新文件C中。
//int main() {
//	FILE* fpA;
//	FILE* fpB;
//	FILE* fpC;
//	char strA[100], strB[100], strC[100];
//	fpA = fopen("data.txt", "r");
//	if (fpA != NULL)
//	{
//		fgets(strA, 100, fpA);
//		fclose(fpA);
//		fpB = fopen("data2.txt", "r");
//		if (fpB != NULL) {
//			fgets(strB, 100, fpB);
//			fclose(fpB);
//			fpC = fopen("data3.txt", "w");
//			if (fpC != NULL)
//			{
//				strcat(strC, strA);
//				strcat(strC, strB);
//				printf("合并后的字符串为：%s\n", strC);
//				//
//				for (int i = 0; i < strlen(strC) - 2; i++)
//				{
//
//					for (int j = i + 1; j < strlen(strC) - 1; j++)
//					{
//
//						if (strC[i] > strC[j])
//						{
//							int temp;
//							temp = strC[i];
//							strC[i] = strC[j];
//							strC[j] = temp;
//						}
//					}
//				}
//				printf("排序后的字符串为：%s\n", strC);
//				fputs(strC, fpC);//写入字符串流	
//				printf("合并并排序后的字符串已写入文件data3.txt。\n");
//				fclose(fpC);
//				return 1;
//			}
//			else
//			{
//				printf("文件打开失败03\n");
//				return 0;
//			}
//
//		}
//		else
//		{
//			printf("文件打开失败02\n");
//			return 0;
//		}
//
//	}
//	else
//	{
//		printf("文件打开失败01\n");
//		return 0;
//	}
//}

//100.有五个学生，每个学生有3门课的成绩，从键盘输入以上数据（包括学生号，姓名，三门课成绩），
// 计算出平均成绩，况原有的数据和计算出的平均分数存放在磁盘文件"stud"中。
//typedef struct {
//    int ID;
//    int math;
//    int English;
//    int C;
//    int avargrade;
//    char name[20];
//}Stu;
//int main()
//{
//    FILE* fp;
//    Stu stu[5];
//    int i, avargrade = 0;
//    printf("请输入5个同学的信息：学生号，姓名，3门成绩:\n");
//    for (i = 0; i < 5; i++)
//    {
//        scanf("%d %s %d %d %d", &(stu[i].ID), stu[i].name, &(stu[i].math), &(stu[i].English), &(stu[i].C));
//        stu[i].avargrade = (stu[i].math + stu[i].English + stu[i].C) / 3;
//    }
//
//    if ((fp = fopen("stud", "w")) == NULL)
//    {
//        printf("error :cannot open file!\n");
//        exit(0);
//    }
//    for (i = 0; i < 5; i++)
//        fprintf(fp, "%d %s %d %d %d %d\n", stu[i].ID, stu[i].name, stu[i].math, stu[i].English,
//            stu[i].C, stu[i].avargrade);
//
//    fclose(fp);
//    // system("pause");
//    return 0;
//}