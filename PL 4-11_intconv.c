/*
_*_Coding GB2312 _*_
������Ա: gaochaofeng
��������: 2022.08.28
�ļ�����: PL 4-11_intconv.c
��������: VS Code
*/
 
//PL 4-11_intconv.c - һЩ��ƥ�������ת��
#include<stdio.h>

#define PAGES 336
#define WORDS 65618

int main(void)
{
    short num = PAGES;
    short mnum = -PAGES;

    printf("num as short and unsigned short: %hd %hu\n",num,num);
    printf("-num as short and unsigned short: %hd %hu\n",mnum,mnum);
    printf("num as int and char: %d %c\n",num,num);
    printf("WORDS as int,short,and char: %d,%hd,%c\n",WORDS,WORDS,WORDS);

    return 0;
}