/*
_*_Coding GB2312 _*_
开发人员: gaochaofeng
开发日期: 2022.08.29
文件名称: PE 4-5.c
开发工具: VS Code
*/
 
//PE 4-5.c - Programming Exercise 4-5
#include<stdio.h>

int main(void)
{
    float megabits;
    float megabytes;

    printf("Enter the speed: ");
    scanf("%f",&megabits);

    printf("Enter the file size: ");
    scanf("%f",&megabytes);

    printf("At %.2f megabits per second, a file of %.2f megabytes\n",
    megabits,megabytes);

    printf("downloads in %.2f seconds.",megabytes * 8 / megabits);

    return 0;
}