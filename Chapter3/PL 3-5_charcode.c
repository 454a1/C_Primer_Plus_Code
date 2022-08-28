/*
_*_Coding GB2312 _*_
开发人员: gaochaofeng
开发日期: 2022.08.26
文件名称: PL 3-5_Charcode.c
开发工具: VS Code
*/
 
//PL 3-5_Charcode.c - 显示字符的代码编号
#include<stdio.h>

int main(void)
{
    char ch;

    printf("Please enter a character.\n");
    scanf("%c",&ch);

    printf("The code for %c is %d.\n",ch,ch);
    
    return 0;
}