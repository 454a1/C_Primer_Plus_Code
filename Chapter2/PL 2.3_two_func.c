/*
_*_Coding GB2312 _*_
������Ա: gaochaofeng
��������: 2022.08.25
�ļ�����: PL 2.3_two_func.c
��������: VS Code
*/
 
//PL 2.3_two_func.c - һ���ļ��а�����������(��printf()����)   
//New:�����������������ã���������
#include<stdio.h>

void butler(void);   //��������

int main(void)
{
    printf("I will summon the butler function.\n");
    
    bulter();   //��������

    printf("Yes .Bring me some tea and writeable DVDs.\n");

    return 0;
}
void bulter(void)   //��������
{
    printf("You rang,sir?\n");
}