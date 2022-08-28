/*
_*_Coding GB2312 _*_
开发人员: gaochaofeng
开发日期: 2022.08.26
文件名称: PE 2-3.c
开发工具: VS Code
*/
 
//PE 2-3.c - Programming Exercise 2-3
#include<stdio.h>

int main(void)
{
    int ageyears = 22;
    int agedays;

    agedays = 365 * ageyears;
    printf("My age is %d years,is equal to %d days",ageyears,agedays);

    return 0;
}