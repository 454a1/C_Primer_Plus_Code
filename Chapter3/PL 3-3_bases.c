/*
_*_Coding GB2312 _*_
开发人员: gaochaofeng
开发日期: 2022.08.26
文件名称: PL 3-3_bases.c
开发工具: VS Code
*/
 
//PL 3-3_bases.c - 以十进制、八进制、十六进制打印十进制数100
#include<stdio.h>

int main(void)
{
    int x = 100;
    
    printf("dec = %d,octal = %o,hex = %x.\n",x,x,x);
    printf("dec = %d,octal = %#o,hex = %#x.\n",x,x,x);

    return 0;
}