/*
_*_Coding GB2312 _*_
������Ա: gaochaofeng
��������: 2022.08.26
�ļ�����: PE 3-2.c
��������: VS Code
*/
 
//PE 3-2.c - Programming Exercise 3-2
#include<stdio.h>

int main(void)
{
    int ascii;

    printf("Please enter an ASCII code: ");
    scanf("%d",&ascii);

    printf("%d is the ASCII code for %c.\n",ascii,ascii);
    
    return 0;
}