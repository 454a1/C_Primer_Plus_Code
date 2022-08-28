/*
_*_Coding GB2312 _*_
开发人员: gaochaofeng
开发日期: 2022.08.26
文件名称: PE 2-6.c
开发工具: VS Code
*/
 
//PE 2-6.c - Programming Exercise 2-6
#include<stdio.h>

int main(void)
{
    int toes = 10;
    int two_toes,toes_squared;

    two_toes = 2 * toes;
    toes_squared = toes * toes;

    printf("toes = %d.\n",toes);
    printf("Twice toes = %d.\n",two_toes);
    printf("toes squared = %d.\n",toes_squared);

    return 0;
}