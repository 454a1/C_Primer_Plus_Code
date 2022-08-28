/*
_*_Coding GB2312 _*_
开发人员: gaochaofeng
开发日期: 2022.08.26
文件名称: PE 3-6.c
开发工具: VS Code
*/
 
//PE 3-6.c - Programming Exercise 3-6
#include<stdio.h>

int main(void)
{
    //常量
    const float MASS_MOL = 3.0e-23;
    const float MASS_QT = 950;

    float quarts,molecules;

    //提示输入水的夸脱数
    printf("Enter the number of quarts of water:");
    scanf("%f",&quarts);

    //水分子数 = 水夸脱数 * 每夸脱水的重量 / 一个水分子的重量
    molecules = quarts * MASS_QT / MASS_MOL;

    printf("%f quarts of water contain %e molecules.\n", quarts, molecules);

    return 0;
}