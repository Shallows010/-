#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//int main()
//{
//	//字符类型
//	//char ch = 'a';
//	//整形
//	//int age = 20;
//	//短整型
//	//float weight = 55.5;
//	//单精度浮点型
//	//double d = 0.00;
//	//双精度浮点型
//	int a, b;
//	int sum;
//	scanf("%d %d", &a, &b);
//	sum  = a + b;
//	printf("%d\n", sum);
//
//	return 0;
//}
// 
//int main()
//{
//	//数组
//	int a[10] = {0};
//	//输入
//	int i = 0;
//	for (i = 0; i < 10; i++)
//		scanf("%d", &a[i]);
//	//找出最大值
//	int max = a[0];//假设数组的第一个元素就是最大值
//	//拿剩下的元素和max比较
//	for(i = 1;i <= 10;i++)
//		if (a[i] > max)
//		{
//			max = a[i];
//		}
//	//输出
//	printf("max = %d", max);
//		return 0;
//}

//int main()
//{
//	//数组
//	int a[10] = { 0 }, i ,s = 0 ;
//	//输入
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &a[i]);
//		s = s + a[i];//求和
//	}
//	//求和
//	/*for (i = 0; i < 10; i++)
//	{
//		s = s + a[i];
//	}*/
//	//求平均值
//	s = s / 10;
//	//输出
//	printf("平均值 = %d\n", s);
//	return 0;
//}

//int main()
//{
//	int i = 0, a[] = {1,2,3,4,5,6,7,8,9,10};
//	int *s = a;
//	for (i = 0; i < 10; i++)
//		//{
//			//scanf("%d", &a[i]);
//			//a[i] = i + 1;
//			//printf("%d", a[i]);
//		//}
//	{
//
//		printf("%d", *s);
//		s++;//*
//	}
//	return 0;
//}
int main()
{
	char arr[] = "hello";
	char arr1[] = { 'a','b','c','d'/*,'\0'*/};
	printf("%s\n", arr);
	printf("%s\n", arr1);
	int a = strlen(arr), b = strlen(arr1);
	printf("%d\n%d\n", a,b);
	printf("%d\n", b);
	return 0;
}


