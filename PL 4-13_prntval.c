/*
_*_Coding GB2312 _*_
������Ա: gaochaofeng
��������: 2022.08.28
�ļ�����: PL 4-13_prntval.c
��������: VS Code
*/
 
//PL 4-13_prntval.c - printf()�ķ���ֵ
#include<stdio.h>

int main(void)
{
    int bph2o = 212;
    int rv;

    rv = printf("%d F is water's boiling point.\n", bph2o);
    printf("The printf() function printed %d characters.\n",rv);
    
    return 0;
}