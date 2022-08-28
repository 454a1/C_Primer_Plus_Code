/*
_*_Coding GB2312 _*_
开发人员: gaochaofeng
开发日期: 2022.08.26
文件名称: PL 3-1_platinum.c
开发工具: VS Code
*/
 
//PL 3-1_platinum.c - your weight in platinum
#include<stdio.h>

int main(void)
{
    float weight;       //体重
    float value;        //相等重量的铂金价值

    printf("Are you worth your weight in platinum?\n");
    printf("Letis check it out.\n");

    printf("Please enter your weight in pounds: ");
    scanf("%f",&weight);

    //假设白金的价格是每盎司$1700
    //14.5833用于把英镑常衡盎司转换为金衡盎司
    value = 1700.0 * weight * 14.5833;

    printf("Your weight in platinum is worth $%.2f.\n",value);

    printf("You are easily worth that! If platinum prices drop,\n");
    printf("eat more to maintain your value.\n");

    return 0;
}