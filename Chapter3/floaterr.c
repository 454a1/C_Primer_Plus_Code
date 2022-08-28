/*
_*_Coding GB2312 _*_
开发人员: gaochaofeng
开发日期: 2022.08.26
文件名称: floaterr.c
开发工具: VS Code
*/
 
//floaterr.c - 演示舍入错误
#include<stdio.h>

int main(void)
{
    double a,b;

    b = 2.0e20 + 1.0;
    a = b-2.0e20;

    printf("%f.\n",a);

    return 0;
}