#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

//实现n的k次方
double Pow(int n,int k)//2 4
{
	if (k < 0)
		return 1.0 / Pow(n, -k);
	else if (k == 0)
		return 1;
	else
		return n * Pow(n, k - 1);
}
int main()
{
	int n, k;
	scanf("%d %d", &n, &k);
	double ret=Pow(n,k);
	printf("%lf\n", ret);
}



//一串数字求和
//int DigitSum(unsigned int n)
//{
//	int sum = 0;
//	if (n > 9)
//	{
//		return DigitSum(n/10)+n%10;
//	}
//	else
//	{
//		return n;
//	}
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	int ret=DigitSum(num);
//	printf("%d\n", ret);
//	return 0;
//}



//交换字符串
//void reverse_String(char arr[])
//{
//	int left = 0;
//	int right = strlen(arr) - 1;
//	while (left < right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//void reverse_String(char arr[])
//{
//	char tmp = arr[0];
//	int len = strlen(arr);
//	arr[0] = arr[len - 1];
//	arr[len - 1] = '\0';
//	if (strlen(arr + 1) >=2)
//		reverse_String(arr + 1);
//	arr[len - 1] = tmp;
//}
//int main()
//{
//	char arr[] = "abcdefg";
//	reverse_String(arr);
//	printf("%s\n", arr);
//	return 0;
//}



//乘法口诀表
//void print_table(int n)
//{
//	int i = 0;
//	for (i = 1;i <= n;i++)
//	{
//		int j = 0;
//		for (j = 1;j <= i;j++)
//		{
//			printf("%d*%d=%-3d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	print_table(a);
//	return 0;
//}



//取出一个数二进制位奇数位和偶数位分别打印
//void print(int m)
//{
//	int i = 0;
//	printf("奇数位：\n");
//	for (i = 30;i >= 0;i -= 2)
//	{
//		printf("%d ", (m >> i)&1);
//	}
//	printf("\n");
//	printf("偶数位：\n");
//	for (i = 31;i > 0;i -= 2)
//	{
//		printf("%d ", (m >> i)&1);
//	}
//	printf("\n");
//}
//int main()
//{
//	int m = 0;
//	scanf("%d", &m);
//	print(m);
//	return 0;
//}



//计算两个数二进制有几个不同
//int git_diff_bit(int m, int n)
//{
//	int count = 0;
//	int tmp = m ^ n;
//	while (tmp)
//	{
//		tmp = tmp & (tmp - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int m=0, n=0;
//	scanf("%d %d", &m, &n);
//	int count=git_diff_bit(m, n);
//	printf("%d\n", count);
//	return 0;
//}



//计算二进制1的个数
//int count_bit_one(unsigned int a)
//{
//	int cou = 0;
//	int b = 0;
//	while (a)
//	{
//		if (a % 2 == 1)
//		{
//			cou++;
//		}
//		a = a / 2;
//	}
//	return cou;
//}
//int count_bit_one(n)
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0;i < 32;i++)
//	{
//		if ((n >> i)&1 == 1)
//		{
//			count++;
//		}
//	}
//	return count;
// }
//int count_bit_one(n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int count=count_bit_one(a);
//	printf("%d\n", count);
//	return 0;
//}



//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	short* p = (short*)arr;
//	for (int i = 0;i < 4;i++)
//	{
//		*(p + i) = 0;
//	}
//	for (int i = 0;i < 5;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}



//两个数组交换
//int main()
//{
//	int i = 0;
//	int arr1[] = { 1,3,5,7,9 };
//	int arr2[] = { 2,4,6,8,0 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	for (i = 0;i < sz;i++)
//	{
//		int tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//	for (i = 0;i < sz;i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//	for (i = 0;i < sz;i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	return 0;
//}



//void Init(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0;i < sz;i++)
//	{
//		arr[i] = i;
//	}
//}
//
//void Print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0;i < sz;i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	printf("\n");
//}

//void Reverse(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0;i < sz;i++)
//	{
//		if (i < sz / 2)
//		{
//			int tmp = arr[i];
//			arr[i] = arr[sz - i-1];
//			arr[sz - i-1] = tmp;
//		}
//	}
//}

//void Reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Init(arr,sz);
//	Print(arr, sz);
//	Reverse(arr, sz);
//	Print(arr, sz);
//	return 0;
//}