/*
_*_Coding GB2312 _*_
������Ա: gaochaofeng
��������: 2022.08.26
�ļ�����: PE 3-7.c
��������: VS Code
*/
 
//PE 3-7.c - Programming Exercise 3-7
#include<stdio.h>

int main(void)
{
    //����
    const float INCH_CM = 2.54;

    float inch_height,cm_height;

    //��ʾ����
    printf("Enter your height in inch:");
    scanf("%f",&inch_height);

    //1Ӣ���൱��2.54����
    cm_height = inch_height * INCH_CM;

    printf("Your height is %.2f cm.\n",cm_height);

    return 0;
}