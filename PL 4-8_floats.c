/*
_*_Coding GB2312 _*_
������Ա: gaochaofeng
��������: 2022.08.27
�ļ�����: PL 4-8_floats.c
��������: VS Code
*/
 
//PL 4-8_floats.c - һЩ���������η������
#include<stdio.h>

int main(void)
{
    const double RENT = 3852.99;

    printf("*%f*\n",RENT);
    printf("*%e*\n",RENT);
    printf("*%4.2f*\n",RENT);
    printf("*%3.1f*\n",RENT);
    printf("*%10.3f*\n",RENT);
    printf("*%-10.3f*\n",RENT);
    printf("*%+4.2f*\n",RENT);
    printf("*%010.2f*\n",RENT);

    return 0;
}