#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

//测试三子棋游戏
void menu()
{
	printf("********************************\n");
	printf("******1.进入游戏 2.退出游戏******\n");
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
		printf("玩家赢！\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢！\n");
	}
	else
	{
		printf("平局！\n");
	}
}

void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请输入:>");
		scanf("%d", &input);
		switch (input)
		{
			case 1:
			{
				printf("进入三子棋游戏！\n");
				game();
				break;
			}
			case 0:
			{
				printf("退出游戏！\n");
				break;
			}
			default:
			{
				printf("选择错误，请重新选择！\n");
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