/*
_*_Coding GB2312 _*_
������Ա: gaochaofeng
��������: 2022.08.27
�ļ�����: PL 4-4_pizza.c
��������: VS Code
*/
 
//PL 4-4_pizza.c - �ڱ�����������ʹ���Ѷ���ĳ���
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