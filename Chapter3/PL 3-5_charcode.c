/*
_*_Coding GB2312 _*_
������Ա: gaochaofeng
��������: 2022.08.26
�ļ�����: PL 3-5_Charcode.c
��������: VS Code
*/
 
//PL 3-5_Charcode.c - ��ʾ�ַ��Ĵ�����
#include<stdio.h>

int main(void)
{
    char ch;

    printf("Please enter a character.\n");
    scanf("%c",&ch);

    printf("The code for %c is %d.\n",ch,ch);
    
    return 0;
}