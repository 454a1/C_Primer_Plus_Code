/*
_*_Coding GB2312 _*_
开发人员: gaochaofeng
开发日期: 2022.08.28
文件名称: PL 4-10_stringf.c
开发工具: VS Code
*/
 
//PL 4-10_stringf.c - 字符串格式
#include<stdio.h>

#define BLURB "Authentic imitation"

int main(void)
{
    printf("[%2s]\n",BLURB);
    printf("[%24s]\n",BLURB);
    printf("[%24.5s]\n",BLURB);
    printf("[%-24.5s]\n",BLURB);
    
    return 0;
}