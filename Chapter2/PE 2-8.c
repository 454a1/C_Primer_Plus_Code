/*
_*_Coding GB2312 _*_
开发人员: gaochaofeng
开发日期: 2022.08.26
文件名称: PE 2-8.c
开发工具: VS Code
*/
 
//PE 2-8.c - Programming Exercise 2-8
#include<stdio.h>
//函数声明
void one_three(void);
void two(void);

int main(void)
{
    printf("starting now:\n");
    one_three();
    printf("done!");

    return 0;
}
//定义one_three()函数
void one_three(void)
{
    printf("one\n");
    two();
    printf("Three\n");
}
//定义two()函数
void two(void)
{
    printf("two\n");
}