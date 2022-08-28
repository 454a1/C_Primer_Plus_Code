/*
_*_Coding GB2312 _*_
开发人员: gaochaofeng
开发日期: 2022.08.26
文件名称: PE 2-5.c
开发工具: VS Code
*/
 
//PE 2-5.c - Programming Exercise 2-5
#include<stdio.h>

//函数声明
void br(void);
void ic(void);

int main(void)
{
    br();
    printf(",");
    ic();
    printf("\n");
    ic();
    printf(",\n");
    br();

    return 0;
}
//定义br()函数
void br(void)
{
    printf("Brazil,Russia");
}
//定义ic()函数
void ic(void)
{
    printf("India,China");
}