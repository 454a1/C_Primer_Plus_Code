/*
_*_Coding GB2312 _*_
������Ա: gaochaofeng
��������: 2022.08.26
�ļ�����: toobig.c
��������: VS Code
*/
 
//toobig.c - ����ϵͳ��������intֵ
#include<stdio.h>

int main(void)
{
    int i = 2147483647;
    unsigned int j = 4294967295;

    printf("%d,%d,%d.\n",i,i+1,i+2);
    printf("%u,%u,%u\n",j,j+1,j+2);

    return 0;
}