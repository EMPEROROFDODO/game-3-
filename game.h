#pragma once
//头文件
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//菜单
void menu();

//定义行列
#define ROW 3
#define COL 3


//定义函数

//初始化棋盘
void InitBoard(char board[ROW][COL],int row,int col);
//打印棋盘
void DisplayBoard(char board[ROW][COL], int row, int col);
//玩家回合
void PlayerMove(char board[ROW][COL], int row, int col);
//电脑回合
void ComputerMove(char board[ROW][COL], int row, int col);
//判断输赢
char Iswin(char board[ROW][COL], int row, int col);
