/*
_*_Coding GB2312 _*_
开发人员: gaochaofeng
开发日期: 2022.08.25
文件名称: PL 2.3_two_func.c
开发工具: VS Code
*/
 
//PL 2.3_two_func.c - 一个文件中包含两个函数(除printf()函数)   
//New:函数声明，函数调用，函数定义
#include<stdio.h>

void butler(void);   //函数声明

int main(void)
{
    printf("I will summon the butler function.\n");
    
    bulter();   //函数调用

    printf("Yes .Bring me some tea and writeable DVDs.\n");

    return 0;
}
void bulter(void)   //函数定义
{
    printf("You rang,sir?\n");
}