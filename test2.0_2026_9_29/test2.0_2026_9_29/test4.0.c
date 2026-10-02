//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int money = 0;
//	scanf("%d", &money);
//	int bottle = money;
//	int empty_bottle = bottle;
//	while (empty_bottle > 1)
//	{
//		//空瓶兑换汽水
//		bottle = bottle + empty_bottle / 2;
//		//空瓶数
//		empty_bottle = empty_bottle / 2 + empty_bottle % 2;
//	}
//	printf("%d元兑换了%d瓶汽水", money, bottle);
//
//	return 0;
//}
//
//
//int main()
//{
//	int money = 0;
//	scanf("%d", &money);
//	if (money > 1)
//	{
//		int bottle = money * 2 - 1;
//		printf("%d元兑换了%d瓶汽水\n", money, bottle);
//	}
//	else if(money==1)
//	{
//		printf("%d元兑换了1瓶汽水\n", money);
//	}
//	else
//	{
//		printf("钱数不能等于零或者为负数\n");
//	}
//
//	return 0;
//}