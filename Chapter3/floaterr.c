/*
_*_Coding GB2312 _*_
������Ա: gaochaofeng
��������: 2022.08.26
�ļ�����: floaterr.c
��������: VS Code
*/
 
//floaterr.c - ��ʾ�������
#include<stdio.h>

int main(void)
{
    double a,b;

    b = 2.0e20 + 1.0;
    a = b-2.0e20;

    printf("%f.\n",a);

    return 0;
}