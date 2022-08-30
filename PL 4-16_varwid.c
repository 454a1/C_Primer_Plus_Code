/*
_*_Coding GB2312 _*_
开发人员: gaochaofeng
开发日期: 2022.08.28
文件名称: PL 4-16_varwid.c
开发工具: VS Code
*/
 
//PL 4-16_varwid.c - 使用变宽输出字段
#include<stdio.h>

int main(void)
{
    unsigned width, precision;
    int number = 256;
    double weight = 242.5;

    printf("Enter a field width:\n");
    scanf("%d", &width);

    printf("The number is :%*d:\n", width, number);

    printf("Now enter a width and a precision:\n");
    scanf("%d %d", &width, &precision);

    printf("Weight = %*.*f\n", width, precision, weight);
    printf("Done!\n");
    
    return 0;
}