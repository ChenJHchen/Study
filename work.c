#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<math.h>
////写一个函数求两个整数的较大值
//int Max(int a, int b)
//{
//	return a > b ? a : b;
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d%d", &num1, &num2);
//	int ret = Max(num1, num2);
//	printf("最大值是：%d ", ret);
//	return 0;
//}

//判断一个整数是否能5整除 输出包括一行，如果M可以被5整除就输出YES，否则输出NO
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (num % 5 == 0)
//		printf("YES");
//	else
//		printf("NO");
//
//	return 0;
//}

//给定两个数，求这两个数的最大公约数
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int max = 0;//最大公约数为其中的较小的一个
//	scanf("%d%d", &num1, &num2);
//	if (num1 < num2)
//		max = num1;
//	else
//		max = num2;
//	while (1)
//	{
//		if (num1 % max == 0 && num2 % max == 0)
//		{
//			printf("最大公约数为:%d ", max);
//			break;
//		}
//		max--;
//		
//	}
//	
//
//	return 0;
//}

//打印1000年到2000年之间的闰年
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//			printf("%d ",year);
//	}
//	return 0;
//}

