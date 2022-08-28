/*
_*_Coding GB2312 _*_
开发人员: gaochaofeng
开发日期: 2022.08.26
文件名称: toobig.c
开发工具: VS Code
*/
 
//toobig.c - 超出系统允许的最大int值
#include<stdio.h>

int main(void)
{
    int i = 2147483647;
    unsigned int j = 4294967295;

    printf("%d,%d,%d.\n",i,i+1,i+2);
    printf("%u,%u,%u\n",j,j+1,j+2);

    return 0;
}