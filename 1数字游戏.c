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
	//rand函数返回了一个0-32767之间的数字；
	//时间戳
	int guess = 0;
	int ret = rand()%100+1;//%100的余数是(0-99);+1 --> (1-100)
	//printf("%d", ret);
	while (1)
	{
		printf("请猜数字");
		scanf("%d", &guess);
		if (guess < ret)
			printf("猜小了\n");
		else if (guess > ret)
			printf("猜大了\n");
		else
		{
			printf("猜对了");
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
		menu();//打印菜单
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();//j进入游戏
			break;
		case 0:
			printf("退出游戏");
			break;
		default:
				printf("选择错误，请重新选择");
				break;
		}
	} while (input);
	return 0;
}