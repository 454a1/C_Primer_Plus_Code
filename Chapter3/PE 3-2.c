/*
_*_Coding GB2312 _*_
开发人员: gaochaofeng
开发日期: 2022.08.26
文件名称: PE 3-2.c
开发工具: VS Code
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