/*
_*_Coding GB2312 _*_
������Ա: gaochaofeng
��������: 2022.08.26
�ļ�����: PE 3-4.c
��������: VS Code
*/
 
//PE 3-4.c - Programming Exercise 3-4
#include<stdio.h>

int main(void)
{
    float num;

    //��ʾ����
    printf("Enter a floating-point value: ");
    scanf("%f", &num);

    printf("fixed-point notation: %f\n", num);
    printf("exponential notation: %e\n", num);
    printf("p notation: %a\n", num);

    return 0;
}