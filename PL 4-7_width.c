/*
_*_Coding GB2312 _*_
开发人员: gaochaofeng
开发日期: 2022.08.27
文件名称: PL 4-7_width.c
开发工具: VS Code
*/
 
//PL 4-7_width.c - 字段宽度
#include<stdio.h>

#define PAGES 959

int main(void)
{
    printf("*%d*.\n",PAGES);
    printf("*%2d*.\n",PAGES);
    printf("*%10d*.\n",PAGES);
    printf("*%-10d*.\n",PAGES);
    printf("*%+d*.\n",PAGES);
    printf("*%+d*.\n",PAGES * (-1));
    printf("*%010d*.\n",PAGES);
    
    return 0;
}