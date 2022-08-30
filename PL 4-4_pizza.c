/*
_*_Coding GB2312 _*_
开发人员: gaochaofeng
开发日期: 2022.08.27
文件名称: PL 4-4_pizza.c
开发工具: VS Code
*/
 
//PL 4-4_pizza.c - 在比萨饼程序中使用已定义的常量
#include<stdio.h>

#define PI 3.14159

int main(void)
{
    float area,circum,radius;

    printf("What's the pizza of your pizza?\n");
    scanf("%f",&radius);

    area = PI * radius * radius;
    circum =2 * PI * radius;

    printf("Your basic pizza parameters are as follow:\n");
    printf("circumference = %1.2f,area = %1.2f.\n",circum,area);
    
    return 0;
}