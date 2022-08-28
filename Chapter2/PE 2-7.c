/*
_*_Coding GB2312 _*_
开发人员: gaochaofeng
开发日期: 2022.08.26
文件名称: PE 2-7.c
开发工具: VS Code
*/
 
//PE 2-7.c - Programming Exercise 2-7
#include<stdio.h>
//函数声明
void Smile(void);

int main(void)
{
    Smile();
    Smile();
    Smile();
    printf("\n");
    Smile();
    Smile();
    printf("\n");
    Smile();

    return 0;
}
//定义Smile()函数
void Smile(void)
{
    printf("Smile!");
}