/*
_*_Coding GB2312 _*_
������Ա: gaochaofeng
��������: 2022.08.26
�ļ�����: PE 2-5.c
��������: VS Code
*/
 
//PE 2-5.c - Programming Exercise 2-5
#include<stdio.h>

//��������
void br(void);
void ic(void);

int main(void)
{
    br();
    printf(",");
    ic();
    printf("\n");
    ic();
    printf(",\n");
    br();

    return 0;
}
//����br()����
void br(void)
{
    printf("Brazil,Russia");
}
//����ic()����
void ic(void)
{
    printf("India,China");
}