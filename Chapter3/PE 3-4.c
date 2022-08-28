/*
_*_Coding GB2312 _*_
开发人员: gaochaofeng
开发日期: 2022.08.26
文件名称: PE 3-4.c
开发工具: VS Code
*/
 
//PE 3-4.c - Programming Exercise 3-4
#include<stdio.h>

int main(void)
{
    float num;

    //提示输入
    printf("Enter a floating-point value: ");
    scanf("%f", &num);

    printf("fixed-point notation: %f\n", num);
    printf("exponential notation: %e\n", num);
    printf("p notation: %a\n", num);

    return 0;
}