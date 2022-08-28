/*
_*_Coding GB2312 _*_
开发人员: gaochaofeng
开发日期: 2022.08.26
文件名称: PE 2-4.c
开发工具: VS Code
*/
 
//PE 2-4.c - Programming Exercise 2-4
#include<stdio.h>

//函数声明
void jolly(void);
void deny(void);

int main(void)
{
    jolly();
    jolly();
    jolly();
    deny();

    return 0;
}
//定义jolly()函数
void jolly(void)
{
    printf("For he's a jolly good fellow!\n");
}
//定义deny()函数
void deny(void)
{
    printf("Which nobody can deny!\n");
}
