/*
_*_Coding GB2312 _*_
������Ա: gaochaofeng
��������: 2022.08.26
�ļ�����: PE 2-8.c
��������: VS Code
*/
 
//PE 2-8.c - Programming Exercise 2-8
#include<stdio.h>
//��������
void one_three(void);
void two(void);

int main(void)
{
    printf("starting now:\n");
    one_three();
    printf("done!");

    return 0;
}
//����one_three()����
void one_three(void)
{
    printf("one\n");
    two();
    printf("Three\n");
}
//����two()����
void two(void)
{
    printf("two\n");
}