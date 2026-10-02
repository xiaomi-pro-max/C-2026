//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int judgment(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n /= 10;
//		count++;
//	}
//	return count;
//}
//int exponent(int n, int num)
//{
//	int power = 1;
//	while (n--)
//	{
//		power *= num;
//	}
//	return power;
//}
//
//int main()
//{
//	printf("0~100000中是水仙花数的是:0");
//	//0-100000
//	for (int i = 1; i < 100001; i++)
//	{
//		int sub = i;
//		//判断是几位数
//		int n = judgment(sub);
//		int sum = 0;
//		//要每一位的数
//		while (sub)
//		{
//			int num = sub % 10;
//			sub /= 10;
//			num = exponent(n, num);
//			sum += num;
//		}
//		if (sum == i)
//		{
//			printf(",%d", i);
//		}
//	}
//	return 0;
//}