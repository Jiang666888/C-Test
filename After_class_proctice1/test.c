#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <math.h>

//杨氏矩阵
//int FindNum(int arr[3][3], int k, int row, int col)
//{
//	int x = 0;
//	int y = col - 1;
//	while ((x <= row - 1)&&(y>=0))
//	{
//		if (arr[x][y] > k)
//			y--;
//		else if (arr[x][y] < k)
//			x++;
//		else
//			return 1;
//	}
//	return 0;
//}
int FindNum(int arr[3][3], int k, int* px, int* py)
{
	int x = 0;
	int y = *py - 1;
	while ((x <= *px - 1) && (y >= 0))
	{
		if (arr[x][y] > k)
			y--;
		else if (arr[x][y] < k)
			x++;
		else
		{
			*px = x;
			*py = y;
			return 1;
		}	
	}
	return 0;
}
int main()
{
	int i = 0, j = 0;
	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
	int x = 3;
	int y = 3;
	int k = 0;
	scanf("%d", &k);
	int ret = FindNum(arr, k, &x, &y);
	if (ret == 1)
		printf("找到了，下标：%d %d\n",x,y);
	else
		printf("没找到\n");
	return 0;
}



//左旋字符串的k个字符，并判断
//void left_move(char* arr,int k)
//{
//	assert(arr);
//	int i = 0;
//	int len = strlen(arr);
//	for (i = 0;i < k;i++)
//	{
//		int j = 0;
//		char c = *arr;
//		for (j = 0;j < len-1;j++)
//		{
//			*(arr + j) = *(arr + j + 1);
//		} 
//		*(arr + len - 1) = c;
//	}
//}
//void reverse(char* left,char* right)
//{
//	assert(left);
//	assert(right);
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//void left_move(char* arr,int k)
//{
//	assert(arr);
//	int len = strlen(arr);
//	assert(k <= len);
//	reverse(arr,arr+k-1);
//	reverse(arr+k,arr+len-1);
//	reverse(arr,arr+len-1);
//}
//int is_left_move(char* s1, char* s2)
//{
//	int len = strlen(s1);
//	int i = 0;
//	for (i = 0;i < len;i++)
//	{
//		left_move(s1, 1);
//		if (strcmp(s1, s2) == 0)
//			return 1;
//	}
//	return 0;
//}
//int is_left_move(char* str1, char* str2)
//{
//	int len1 = strlen(str1);
//	int len2 = strlen(str2);
//	if (len1 != len2)
//		return 0;
//	strncat(str1, str1,len1);
//	char* ret=strstr(str1, str2);
//	if (ret == NULL)
//	{
//		return 0;
//	}
//	else
//	{
//		return 1;
//	}
//		
//}
//int main()
//{
//	char s1[30] = "abcdef";
//	char s2[] = "cdefab";
//	int ret=is_left_move(s1, s2);
//	if (ret == 1)
//		printf("Yes\n");
//	else if (ret == 0)
//		printf("No\n");
//	return 0;
//}
//int main()
//{
//	char arr[100] = { 0 };
//	int k = 0;
//	scanf("%d %s", &k,&arr);
//	left_move(arr, k);
//	printf("%s\n", arr);
//	return 0;
//}



//旋转字符串的k个字符
//void rotate(char arr[], int k)
//{
//	int sz = strlen(arr);
//	char left = 0;
//	char right = sz-1;
//	while (k > 0&&left<right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//		k--;
//	}
//}
//int main()
//{
//	char arr[100] = { 0 };
//	int k = 0;
//	scanf("%d %s", &k,&arr);
//	rotate(arr, k);
//	printf("%s\n", arr);
//	return 0;
//}



//预测比赛结果
//int main()
//{
//	int a = 0, b = 0, c = 0, d = 0, e = 0;
//	for (a = 1;a <= 5;a++)
//	{
//		for (b = 1;b <= 5;b++)
//		{
//			for (c = 1;c <= 5;c++)
//			{
//				for (d = 1;d <= 5;d++)
//				{
//					for (e = 1;e <= 5;e++)
//					{
//						if (((b==2) + (a==3) == 1)&&
//							((b==2) + (e==4) == 1)&&
//							((c==1) + (d==2) == 1)&&
//							((c==5) + (d==3) == 1)&&
//							((e==4) + (a==1) == 1))
//						{
//							if(a*b*c*d*e==120)
//								printf("a=%d\nb=%d\nc=%d\nd=%d\ne=%d\n", a, b, c, d, e);
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}



//猜凶手
//int main()
//{
//	int killer = 0;
//	for (killer = 'a';killer < 'd';killer++)
//	{
//		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3)
//			printf("%c\n", killer);
//	}
//	return 0;
//}



//杨辉三角
//int main()
//{
//	int i = 0,j = 0,k=0;
//	int arr[10][10] = { 0 };
//	for (int i = 0;i < 10;i++)
//	{
//		for (j = 0;j < 10;j++)
//		{
//			if (j == 0)
//				arr[i][j] = 1;
//			if (i == j)
//				arr[i][j] = 1;
//			if (i >= 2 && j >= 1)
//				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//		}
//	}
//	for (int i = 0;i < 10;i++)
//	{
//		for (k = 0;k < 9-i;k++) 
//		{
//			printf("  ");
//		}
//		for (j = 0;j <=i;j++)
//		{
//			printf("%3d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}



//奇数置前
//void move(int a[], int sz)
//{
//	int left = 0;
//	int right = sz-1;
//	while (left<right)
//	{
//		while ((left < right) && a[left] % 2 == 1)
//		{
//			left++;
//		}
//		while ((left < right) && a[right] % 2 == 0)
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			int tmp = a[left];
//			a[left] = a[right];
//			a[right] = tmp;
//		}
//	}
//}
//void print(int a[], int sz)
//{
//	int i = 0;
//	for (i = 0;i < sz;i++)
//	{
//		printf("%d ", a[i]);
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	move(arr, sz);
//	print(arr, sz);
//	return 0;
//}



//喝汽水问题
//int main()
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//	scanf("%d", &money);
//	if (money == 0)
//		total = 0;
//	else
//		total = 2 * money - 1;
//	/*total = money;
//	empty = money;
//	while (empty >= 2)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}*/
//	printf("%d\n", total);      
//	return 0;
//}



//打印菱形
//int main()
//{
//	int i = 0;
//	int line = 0;
//	scanf("%d", &line);
//	int j = 0, k=0;
//	for (i = 0;i < line;i++)
//	{
//		for (j = 0;j < line - 1 - i;j++)
//		{
//			printf(" ");
//		}
//		for (k = 0;k < 2 * i + 1;k++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = line - 1;i > 0;i--)
//	{
//		for (j = 0;j < line-i;j++)
//		{
//			printf(" ");
//		}
//		for (k = 0;k < 2 * i - 1;k++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}



//自幂数
//int main()
//{
//	int i = 0;
//	for (i = 0;i <= 100000;i++)
//	{
//		int tmp = i;
//		int n = 1;
//		int sum = 0;
//		while(tmp /= 10)
//		{
//			n++;
//		}
//		tmp = i;
//		while (tmp)
//		{
//			sum += (int)pow(tmp % 10, n);
//			tmp /= 10;
//		}
//		if (i == sum)
//			printf("%d ", i);
//	}
//	return 0;
//}



//前n项和（a+aa+aaa+...）
//int main()
//{
//	int i = 0;
//	int a = 0,n=0;
//	int sum = 0, ret = 0;
//	scanf("%d %d", &a, &n);
//	for (i = 0;i < n;i++)
//	{
//		ret=ret * 10+a;
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}



//字符逆序
//void reverse(char* str)
//{
//	assert(str);
//	int len = strlen(str);
//	char* left = str;
//	char* right = left + len - 1;
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[256] = { 0 };
//	//scanf("%s", &arr);
//	gets(arr);
//	reverse(arr);
//	printf("%s\n", arr);
//	return 0;
//}

//int main()
//{
//	char c[] = "abcdefgh";
//	int sz = sizeof(c) / sizeof(c[0]);
//	int j = 0;
//	while (j < sz -2- j)
//	{
//		char tmp = c[j];
//		c[j] = c[sz -2- j];
//		c[sz - 2 - j] = tmp;
//		j++;
//	}
//	printf("%s\n", c);
//	return 0;
//}