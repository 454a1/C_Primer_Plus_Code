/*
_*_Coding GB2312 _*_
������Ա: gaochaofeng
��������: 2022.08.26
�ļ�����: PL 3-2_print1.c
��������: VS Code
*/
 
//PL 3-2_print1.c - ��ʾprintf()��һЩ����
//ʹ��printf()������Ҫȷ��ת��˵�����������ʹ�ӡ˵�������������
#include<stdio.h>

int main(void)
{
    int ten = 10;
    int two = 2;

    //ת��˵�����������ʹ�ӡ˵�������������
    printf("Doing it right: ");
    printf("%d minus %d is %d.\n",ten,two,ten - two);

    //ת��˵�����������ʹ�ӡ˵���������������
    printf("Doing it wrong: ");
    printf("%d minus %d is %d.\n",ten,two);

    return 0;
}