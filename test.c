#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//int main()
//{
//	//�ַ�����
//	//char ch = 'a';
//	//����
//	//int age = 20;
//	//������
//	//float weight = 55.5;
//	//�����ȸ�����
//	//double d = 0.00;
//	//˫���ȸ�����
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
//	//����
//	int a[10] = {0};
//	//����
//	int i = 0;
//	for (i = 0; i < 10; i++)
//		scanf("%d", &a[i]);
//	//�ҳ����ֵ
//	int max = a[0];//��������ĵ�һ��Ԫ�ؾ������ֵ
//	//��ʣ�µ�Ԫ�غ�max�Ƚ�
//	for(i = 1;i <= 10;i++)
//		if (a[i] > max)
//		{
//			max = a[i];
//		}
//	//���
//	printf("max = %d", max);
//		return 0;
//}

//int main()
//{
//	//����
//	int a[10] = { 0 }, i ,s = 0 ;
//	//����
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &a[i]);
//		s = s + a[i];//���
//	}
//	//���
//	/*for (i = 0; i < 10; i++)
//	{
//		s = s + a[i];
//	}*/
//	//��ƽ��ֵ
//	s = s / 10;
//	//���
//	printf("ƽ��ֵ = %d\n", s);
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


