/*
_*_Coding GB2312 _*_
开发人员: gaochaofeng
开发日期: 2022.08.28
文件名称: PL 4-11_intconv.c
开发工具: VS Code
*/
 
//PL 4-11_intconv.c - 一些不匹配的整型转换
#include<stdio.h>

#define PAGES 336
#define WORDS 65618

int main(void)
{
    short num = PAGES;
    short mnum = -PAGES;

    printf("num as short and unsigned short: %hd %hu\n",num,num);
    printf("-num as short and unsigned short: %hd %hu\n",mnum,mnum);
    printf("num as int and char: %d %c\n",num,num);
    printf("WORDS as int,short,and char: %d,%hd,%c\n",WORDS,WORDS,WORDS);

    return 0;
}