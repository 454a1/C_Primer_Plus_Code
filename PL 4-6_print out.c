/*
_*_Coding GB2312 _*_
开发人员: gaochaofeng
开发日期: 2022.08.27
文件名称: PL 4-6_print out.c
开发工具: VS Code
*/
 
//PL 4-6_print out.c - 使用转换说明
#include<stdio.h>

#define PI 3.141593

int main(void)
{
    int number = 7;
    float pies = 12.75;
    int cost = 7800;

    printf("The %d ate %f berry pies.\n",number,pies);
    printf("The value of pi is %f.\n",PI);
    printf("Farewell! thou art too dear for my possessing,\n");
    printf("%c%d\n",'$',2 * cost);

    return 0;
}