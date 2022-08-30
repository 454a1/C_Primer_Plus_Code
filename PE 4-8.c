/*
_*_Coding GB2312 _*_
开发人员: gaochaofeng
开发日期: 2022.08.29
文件名称: PE 4-8.c
开发工具: VS Code
*/
 
//PE 4-8.c - 
#include<stdio.h>

const float GALLON_LITER = 3.785;   //1加仑大约3.785升
const float Mile_KIL = 1.609;       //1英里大约为1.609千米

int main(void)
{
    float miles,petrol;     //里程和消耗的汽油量
    float milesperpetrol;      //每加仑汽油行驶的英里数

    printf("Enter the all miles: ");
    scanf("%f",&miles);

    printf("Enter the all petrol: ");
    scanf("%f",&petrol);

    milesperpetrol = miles / petrol;

    printf("%.1f英里/加仑\n",milesperpetrol);

    printf("%.1f升/100公里\n",milesperpetrol * Mile_KIL / GALLON_LITER);
    
    return 0;
}