#define _CRT_SECURE_NO_WARNINGS 1
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<time.h>
void menu()
{
	printf("*****************\n");
	printf("*****1.play *****\n");
	printf("*****0.exit *****\n");
	printf("*****************\n");
}
void game()
{
	//rand����������һ��0-32767֮������֣�
	//ʱ���
	int guess = 0;
	int ret = rand()%100+1;//%100��������(0-99);+1 --> (1-100)
	//printf("%d", ret);
	while (1)
	{
		printf("�������");
		scanf("%d", &guess);
		if (guess < ret)
			printf("��С��\n");
		else if (guess > ret)
			printf("�´���\n");
		else
		{
			printf("�¶���");
			break;
		}
	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();//��ӡ�˵�
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();//j������Ϸ
			break;
		case 0:
			printf("�˳���Ϸ");
			break;
		default:
				printf("ѡ�����������ѡ��");
				break;
		}
	} while (input);
	return 0;
}