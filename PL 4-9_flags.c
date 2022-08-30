/*
_*_Coding GB2312 _*_
开发人员: gaochaofeng
开发日期: 2022.08.28
文件名称: PL 4-9_flags.c
开发工具: VS Code
*/
 
//PL 4-9_flags.c - 演示一些格式标记
#include<stdio.h>

int main(void)
{
    printf("%x,%X,%#x\n",31,31,31);
    printf("**%d**% d**% d**\n",42,42,-42);
    printf("**%5d**%5.3d**%05d**%05.3d**\n",6,6,6,6);

    return 0;
}