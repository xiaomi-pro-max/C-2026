#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

////strlen模拟实现
//int my_strlen(char arr[])
//{
//	int count = 0;
//	for (int i = 0; arr[i]; i++)
//	{
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "hello world";
//	int num=my_strlen(arr);
//	printf("%d", num);
//	return 0;
//}



////strcpy函数实现
//char* my_strcpy(char* dest, const char* src)
//{
//	char* ret = dest;
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[] = "Hello World";
//	char arr2[20];
//	my_strcpy(arr2, arr1);
//	printf("%s", arr2);
//	return 0;
//}



//创建一个函数,使数组里面的奇数,全部位于偶数的前面
void fun(int arr[],int const len)
{
	int left = 0;
	int right = len - 1;
	while ( left < right )
	{
		//左边是偶数交换
		if (arr[left] % 2 == 0)
		{
			while (left < right)
			{
				//右边是奇数交换
				if (arr[right] % 2 != 0)
				{
					int tmp = arr[left];
					arr[left] = arr[right];
					arr[right] = tmp;
					right--;
					break;
				}
				right--;
			}
		}
		left++;
	}
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int len = sizeof(arr) / sizeof(arr[0]);
	fun(arr,len);
	for (int i = 0; i < len ; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}

