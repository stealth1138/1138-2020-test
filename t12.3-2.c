#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

void menu()
{
	printf("********************************\n");
	printf("*******    �Ƿ�Ҫ����    *******\n");
	printf("*******     1. play      *******\n");
	printf("*******     0. exit      *******\n");
	printf("********************************\n");
}


void game()
{
	int ret = rand() % 100 + 1;
	int num = 0;
	while (1)
	{
		printf("�������:");
		scanf("%d", &num);
		if (num == ret)
		{
			printf("��ϲ�㣬�¶���\n");
			break;
		}
		else if (num > ret)
		{
			printf("�´���\n");
		}
		else
		{
			printf("��С��\n");
		}
	}
}


int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("������:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (input);
	return 0;
}