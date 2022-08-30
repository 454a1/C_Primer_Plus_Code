/*
_*_Coding GB2312 _*_
开发人员: gaochaofeng
开发日期: 2022.08.27
文件名称: PL 4-2_praise1.c
开发工具: VS Code
*/
 
//PL 4-2_praise1.c - 使用不同类型的字符串
#include<stdio.h>

#define PRAISE "You are an extraordinary being."

int main(void)
{
    char name[40];

    printf("What's your name?");
    scanf("%s",name);

    printf("Hello,%s,%s.\n",name,PRAISE);
    
    return 0;
}