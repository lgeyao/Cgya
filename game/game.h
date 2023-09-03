#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define ROW 9  //行
#define COL 9  //列
#define ROWS ROW+2
#define COLS COL+2
#define EASY_COUNT 10

//函数的声明


//初始化数组棋盘 
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set);

//打印棋盘
void DisplayBoard(char board[ROWS][COLS], int row, int col);

//布置雷
void SetMine(char board[ROWS][COLS], int row, int col);

//排查雷
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);