#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

void game()
{
	//创建棋盘
	char board[ROW][COL];
	//初始化棋盘
	InitBoard(board,ROW,COL);
	//打印棋盘
	DisplayBoard(board, ROW, COL);
	int ret = 0;
	while (1)
	{
		//玩家回合
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret=Iswin(board, ROW, COL);
		if (ret != 'C')
			break;

		//电脑回合
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = Iswin(board, ROW, COL);
		if (ret != 'C')
			break;
	}
	if (ret == '*')
		printf("你赢了\n");
	else if (ret == '#')
		printf("你输了\n");
	else
		printf("平局\n");
}

int main()
{

	int  input = 0;

	//发现随机数
	srand((unsigned int)time(NULL));

	do
	{
		//菜单
		menu();
		printf("请输入你的选择:>\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新选择\n");
			break;
		}
	} while (input);
	return 0;
}