//#include <stdio.h>
//
//double factorial(unsigned int i)
//{
//	if (i <= 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return i * factorial(i - 1);
//	}
//}
//
//int fibonaci(int i)
//{
//	if (i == 0)
//	{
//		return 0;
//	}
//	if (i == 1)
//	{
//		return 1;
//	}
//	return fibonaci(i - 1) + fibonaci(i - 2);
//}
//
//int  main()
//{
//	int n = 5;
//	double result = factorial(n);
//	printf("Factorial of %d is %lf", n, result);
//
//	int numbers[10];
//	numbers[0] = 0;
//	numbers[1] = 1;
//	for (int i = 0; i < 10; i++)
//	{
//		if (i != 0 && i != 1)
//		{
//			numbers[i] = numbers[i - 1] + numbers[i - 2];
//			printf("%d\n ", numbers[i]);
//		}
//		else
//		{
//			printf("%d\n", numbers[i]);
//		}
//
//	}
//	return 0;
//}