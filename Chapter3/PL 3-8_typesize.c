/*
_*_Coding GB2312 _*_
������Ա: gaochaofeng
��������: 2022.08.26
�ļ�����: PL 3-8_typesize.c
��������: VS Code
*/
 
//PL 3-8_typesize.c - ��ӡ���ʹ�С
#include<stdio.h>

int main(void)
{
    printf("Type int has a size of %zd bytes.\n",sizeof(int));
    printf("Type char has a size of %zd bytes.\n",sizeof(char));
    printf("Type short has a size of %zd bytes.\n",sizeof(short));
    printf("Type float has a size of %zd bytes.\n",sizeof(float));
    printf("Type double has a size of %zd bytes.\n",sizeof(double));

    return 0;
}