/*
_*_Coding GB2312 _*_
������Ա: gaochaofeng
��������: 2022.08.29
�ļ�����: PE 4-7.c
��������: VS Code
*/
 
//PE 4-7.c - Programming Exercise 4-7
#include<stdio.h>
#include<float.h>

int main(void)
{
    double dblTest = 1.0 / 3.0;
    float fltTest = 1.0 / 3.0;

    printf("%.6f\n",dblTest);
    printf("%.12f\n",dblTest);
    printf("%.16f\n",dblTest);

    printf("\n%.6f\n",fltTest);
    printf("%.12f\n",fltTest);
    printf("%.16f\n",fltTest);   
    
    printf("\nfloat precision = %d digits\n", FLT_DIG);
    printf("double precision = %d digits\n", DBL_DIG);

    return 0;
}