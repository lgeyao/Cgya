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
	//创建数组棋盘
	char mine[ROWS][COLS];
	char show[ROWS][COLS];
	InitBoard(mine, ROWS, COLS,'0');
	InitBoard(show, ROWS, COLS,'*');
	//棋盘打印
	//DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);
	//布置雷
	SetMine(mine, ROW, COL);
	//DisplayBoard(mine, ROW, COL);
	//排查雷
	FindMine(mine, show, ROW, COL);
}

int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menus();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("扫雷\n");
			games();
			break;
		case 0:
			printf("结束游戏\n");
			break;
		default:
			printf("输入错误，重新输入\n");
			break;
		}
	} while (input);
}