/*
_*_Coding GB2312 _*_
������Ա: gaochaofeng
��������: 2022.08.26
�ļ�����: PL 3-3_bases.c
��������: VS Code
*/
 
//PL 3-3_bases.c - ��ʮ���ơ��˽��ơ�ʮ�����ƴ�ӡʮ������100
#include<stdio.h>

int main(void)
{
    int x = 100;
    
    printf("dec = %d,octal = %o,hex = %x.\n",x,x,x);
    printf("dec = %d,octal = %#o,hex = %#x.\n",x,x,x);

    return 0;
}