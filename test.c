#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

void game()
{
	//��������
	char board[ROW][COL];
	//��ʼ������
	InitBoard(board,ROW,COL);
	//��ӡ����
	DisplayBoard(board, ROW, COL);
	int ret = 0;
	while (1)
	{
		//��һغ�
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret=Iswin(board, ROW, COL);
		if (ret != 'C')
			break;

		//���Իغ�
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = Iswin(board, ROW, COL);
		if (ret != 'C')
			break;
	}
	if (ret == '*')
		printf("��Ӯ��\n");
	else if (ret == '#')
		printf("������\n");
	else
		printf("ƽ��\n");
}

int main()
{

	int  input = 0;

	//���������
	srand((unsigned int)time(NULL));

	do
	{
		//�˵�
		menu();
		printf("���������ѡ��:>\n");
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
			printf("ѡ�����������ѡ��\n");
			break;
		}
	} while (input);
	return 0;
}