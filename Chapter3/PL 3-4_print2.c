/*
_*_Coding GB2312 _*_
������Ա: gaochaofeng
��������: 2022.08.26
�ļ�����: PL 3-4_print2.c
��������: VS Code
*/
 
//PL 3-4_print2.c - ����printf()������
//��ȷʹ��ת��˵��
#include<stdio.h>

int main(void)
{
    unsigned int un = 3000000000;
    short end = 200;
    long big = 65537;
    long long verybig = 12345678908642;

    printf("un = %u and not %d.\n",un,un);
    printf("end = %hd and %d.\n",end,end);
    printf("big = %ld and not %hd.\n",big,big);
    printf("verybig = %lld and not %ld.\n",verybig,verybig);
    
    return 0;
}