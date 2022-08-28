/*
_*_Coding GB2312 _*_
开发人员: gaochaofeng
开发日期: 2022.08.26
文件名称: PE 3-8.c
开发工具: VS Code
*/
 
//PE 3-8.c - Programming Exercise 3-8
#include<stdio.h>

int main(void)
{
    //常量
    const int CUP_PINT = 2;         //1品脱等于2杯
    const int OUNCE_CUP = 8;        //1杯等于8盎司
    const int SPOON_OUNCE = 2;      //1盎司等于2大汤勺
    const int TEASPOON_SPOON = 3;   //1大汤勺等于3茶勺

    float cups,pints,ounces,spoons,teaspoons;

    //提示输入茶杯数
    printf("Enter the number of cup:");
    scanf("%f",&cups);

    pints = cups * CUP_PINT;
    ounces = cups / OUNCE_CUP;
    spoons = ounces * SPOON_OUNCE;
    teaspoons = spoons * TEASPOON_SPOON;

    printf("%.2f cups is equal to ",cups);
    printf("%.2f pints,",pints);
    printf("%.2f ounces,",ounces);
    printf("%.2f spoons,",spoons);
    printf("%.2f teaspoons.\n",teaspoons);

    return 0;
}