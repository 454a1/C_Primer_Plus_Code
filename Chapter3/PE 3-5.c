/*
_*_Coding GB2312 _*_
������Ա: gaochaofeng
��������: 2022.08.26
�ļ�����: PE 3-5.c
��������: VS Code
*/
 
//PE 3-5.c - Programming Exercise 3-5
#include<stdio.h>

int main(void)
{
    int year;
    float year_seconds;

    printf("Enter your age in year:");
    scanf("%d",&year);

    year_seconds = year * 3.156e7;

    printf("%d year is equal to %.3e seconds.\n",year,year_seconds);

    return 0;
}