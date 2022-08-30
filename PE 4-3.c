/*
_*_Coding GB2312 _*_
开发人员: gaochaofeng
开发日期: 2022.08.29
文件名称: PE 4-3.c
开发工具: VS Code
*/
 
//PE 4-3.c - Programming Exercise 4-3
#include<stdio.h>

int main(void)
{
    float input;

    printf("Enter the float number: ");
    scanf("%f",&input);

    printf("%.2f\n",input);

    printf("%.2e",input);
    
    return 0;
}