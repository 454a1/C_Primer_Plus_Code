/*
_*_Coding GB2312 _*_
������Ա: gaochaofeng
��������: 2022.08.26
�ļ�����: PE 2-4.c
��������: VS Code
*/
 
//PE 2-4.c - Programming Exercise 2-4
#include<stdio.h>

//��������
void jolly(void);
void deny(void);

int main(void)
{
    jolly();
    jolly();
    jolly();
    deny();

    return 0;
}
//����jolly()����
void jolly(void)
{
    printf("For he's a jolly good fellow!\n");
}
//����deny()����
void deny(void)
{
    printf("Which nobody can deny!\n");
}
