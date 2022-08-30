/*
_*_Coding GB2312 _*_
开发人员: gaochaofeng
开发日期: 2022.08.28
文件名称: PL 4-17_skip2.c
开发工具: VS Code
*/
 
//PL 4-17_skip2.c - 跳过输入中的前两个整数
#include<stdio.h>

int main(void)
{
    int n;

    printf("Please enter three integers:\n");
    scanf("%*d %*d %d", &n);

    printf("The last integer was %d\n", n);

    return 0;
}