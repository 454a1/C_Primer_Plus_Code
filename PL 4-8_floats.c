/*
_*_Coding GB2312 _*_
开发人员: gaochaofeng
开发日期: 2022.08.27
文件名称: PL 4-8_floats.c
开发工具: VS Code
*/
 
//PL 4-8_floats.c - 一些浮点型修饰符的组合
#include<stdio.h>

int main(void)
{
    const double RENT = 3852.99;

    printf("*%f*\n",RENT);
    printf("*%e*\n",RENT);
    printf("*%4.2f*\n",RENT);
    printf("*%3.1f*\n",RENT);
    printf("*%10.3f*\n",RENT);
    printf("*%-10.3f*\n",RENT);
    printf("*%+4.2f*\n",RENT);
    printf("*%010.2f*\n",RENT);

    return 0;
}