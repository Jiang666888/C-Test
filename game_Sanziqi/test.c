#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

//������������Ϸ
void menu()
{
	printf("********************************\n");
	printf("******1.������Ϸ 2.�˳���Ϸ******\n");
	printf("********************************\n");
}

void game()
{
	char board[ROW][COL] = {0};
	InitBoard(board, ROW, COL);
	DisplayBoard(board, ROW, COL);
	char ret;
	while (1)
	{

		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("���Ӯ��\n");
	}
	else if (ret == '#')
	{
		printf("����Ӯ��\n");
	}
	else
	{
		printf("ƽ�֣�\n");
	}
}

void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("������:>");
		scanf("%d", &input);
		switch (input)
		{
			case 1:
			{
				printf("������������Ϸ��\n");
				game();
				break;
			}
			case 0:
			{
				printf("�˳���Ϸ��\n");
				break;
			}
			default:
			{
				printf("ѡ�����������ѡ��\n");
				break;
			}
		}

	} while (input);
}

int main()
{
	test();
	return 0;
}