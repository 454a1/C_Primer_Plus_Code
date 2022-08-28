/*
_*_Coding GB2312 _*_
开发人员: gaochaofeng
开发日期: 2022.08.26
文件名称: PL 3-2_print1.c
开发工具: VS Code
*/
 
//PL 3-2_print1.c - 演示printf()的一些特性
//使用printf()函数是要确保转换说明符的数量和打印说明符的数量相等
#include<stdio.h>

int main(void)
{
    int ten = 10;
    int two = 2;

    //转换说明符的数量和打印说明符的数量相等
    printf("Doing it right: ");
    printf("%d minus %d is %d.\n",ten,two,ten - two);

    //转换说明符的数量和打印说明符的数量不相等
    printf("Doing it wrong: ");
    printf("%d minus %d is %d.\n",ten,two);

    return 0;
}