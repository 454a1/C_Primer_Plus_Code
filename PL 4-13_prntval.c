/*
_*_Coding GB2312 _*_
开发人员: gaochaofeng
开发日期: 2022.08.28
文件名称: PL 4-13_prntval.c
开发工具: VS Code
*/
 
//PL 4-13_prntval.c - printf()的返回值
#include<stdio.h>

int main(void)
{
    int bph2o = 212;
    int rv;

    rv = printf("%d F is water's boiling point.\n", bph2o);
    printf("The printf() function printed %d characters.\n",rv);
    
    return 0;
}