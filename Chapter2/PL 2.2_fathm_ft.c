/*
_*_Coding GB2312 _*_
开发人员: gaochaofeng
开发日期: 2022.08.25
文件名称: PL 2.2_fathm_ft.c
开发工具: VS Code
*/
 
//PL 2.2_fathm_ft.c - 将英寻(fathm)转换为英尺(feet)
//New:声明多个变量，进行乘法运算，打印两个变量
#include<stdio.h>

int main(void)
{
    int feet,fathoms;       //声明两个同类型变量

    fathoms = 2;
    feet = 6 * fathoms;     //乘法运算  1英寻 = 6英尺 = 72英寸

    //打印两个变量
    printf("There are %d feet in %d fathoms.\n",feet,fathoms);
    printf("Yes,I said %d feet!\n",6*fathoms);

    return 0;
}