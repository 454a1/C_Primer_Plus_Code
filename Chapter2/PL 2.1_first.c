/*
_*_Coding GB2312 _*_
开发人员: gaochaofeng
开发日期: 2022.08.25
文件名称: PL 2.1_first.c
开发工具: VS Code
*/
 
//PL 2.1_first.c - 本书第一个程序，包含C程序的基本要素
#include<stdio.h>           //标准输入输出头文件，为了使用printf()函数

int main(void)          //这个名为main()的函数不包含参数，返回值为整形
{
    int num;        //定义变量

    num = 1;        //给变量赋值
    printf("I am a simple");        //使用printf()函数
    printf(" computer.\n");
    printf("My favorite number is %d because it is the first.\n",num);
    return 0;
}