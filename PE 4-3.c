/*
_*_Coding GB2312 _*_
������Ա: gaochaofeng
��������: 2022.08.29
�ļ�����: PE 4-3.c
��������: VS Code
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