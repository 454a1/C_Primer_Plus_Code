/*
_*_Coding GB2312 _*_
开发人员: gaochaofeng
开发日期: 2022.08.26
文件名称: PE 3-7.c
开发工具: VS Code
*/
 
//PE 3-7.c - Programming Exercise 3-7
#include<stdio.h>

int main(void)
{
    //常量
    const float INCH_CM = 2.54;

    float inch_height,cm_height;

    //提示输入
    printf("Enter your height in inch:");
    scanf("%f",&inch_height);

    //1英寸相当于2.54厘米
    cm_height = inch_height * INCH_CM;

    printf("Your height is %.2f cm.\n",cm_height);

    return 0;
}