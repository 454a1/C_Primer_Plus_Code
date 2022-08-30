/*
_*_Coding GB2312 _*_
开发人员: gaochaofeng
开发日期: 2022.08.29
文件名称: PE 4-4.c
开发工具: VS Code
*/
 
//PE 4-4.c - Programming Exercise 4-4
#include<stdio.h>

int main(void)
{
    float height;
    char name[40];

    printf("Enter your height in inches: ");
    scanf("%f",&height);

    printf("Enter your name: ");
    scanf("%s",name);

    printf("%s,you are %.3f feet tall.\n",name,height/12.0);

    return 0;
}