#pragma once
//ͷ�ļ�
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//�˵�
void menu();

//��������
#define ROW 3
#define COL 3


//���庯��

//��ʼ������
void InitBoard(char board[ROW][COL],int row,int col);
//��ӡ����
void DisplayBoard(char board[ROW][COL], int row, int col);
//��һغ�
void PlayerMove(char board[ROW][COL], int row, int col);
//���Իغ�
void ComputerMove(char board[ROW][COL], int row, int col);
//�ж���Ӯ
char Iswin(char board[ROW][COL], int row, int col);
