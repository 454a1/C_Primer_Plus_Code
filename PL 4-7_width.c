/*
_*_Coding GB2312 _*_
������Ա: gaochaofeng
��������: 2022.08.27
�ļ�����: PL 4-7_width.c
��������: VS Code
*/
 
//PL 4-7_width.c - �ֶο��
#include<stdio.h>

#define PAGES 959

int main(void)
{
    printf("*%d*.\n",PAGES);
    printf("*%2d*.\n",PAGES);
    printf("*%10d*.\n",PAGES);
    printf("*%-10d*.\n",PAGES);
    printf("*%+d*.\n",PAGES);
    printf("*%+d*.\n",PAGES * (-1));
    printf("*%010d*.\n",PAGES);
    
    return 0;
}