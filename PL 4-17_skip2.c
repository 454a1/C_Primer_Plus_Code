/*
_*_Coding GB2312 _*_
������Ա: gaochaofeng
��������: 2022.08.28
�ļ�����: PL 4-17_skip2.c
��������: VS Code
*/
 
//PL 4-17_skip2.c - ���������е�ǰ��������
#include<stdio.h>

int main(void)
{
    int n;

    printf("Please enter three integers:\n");
    scanf("%*d %*d %d", &n);

    printf("The last integer was %d\n", n);

    return 0;
}