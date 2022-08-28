/*
_*_Coding GB2312 _*_
开发人员: gaochaofeng
开发日期: 2022.08.26
文件名称: PL 3-9_badcount.c
开发工具: VS Code
*/
 
//PL 3-9_badcount.c - 参数错误的情况
#include<stdio.h>

int main(void)
{
    int n = 4;
    int m = 5;
    float f = 7.0f;
    float g = 8.0f;

    //参数太多
    printf("%d.\n",n,m);
    //参数太少
    printf("%d,%d,%d.\n",n,m);
    //值的类型不匹配
    printf("%d,%d.\n",f,g);
    
    return 0;
}