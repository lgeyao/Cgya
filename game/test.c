#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
#include"game.h"
void menus()
{
	printf("*********************\n");
	printf("****** 1.play *******\n");
	printf("****** 0.exit *******\n");
	printf("*********************\n");
}
void games()
{
	//������������
	char mine[ROWS][COLS];
	char show[ROWS][COLS];
	InitBoard(mine, ROWS, COLS,'0');
	InitBoard(show, ROWS, COLS,'*');
	//���̴�ӡ
	//DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);
	//������
	SetMine(mine, ROW, COL);
	//DisplayBoard(mine, ROW, COL);
	//�Ų���
	FindMine(mine, show, ROW, COL);
}

int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menus();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("ɨ��\n");
			games();
			break;
		case 0:
			printf("������Ϸ\n");
			break;
		default:
			printf("���������������\n");
			break;
		}
	} while (input);
}