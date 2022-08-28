/*
_*_Coding GB2312 _*_
开发人员: gaochaofeng
开发日期: 2022.08.26
文件名称: PL 3-7_showf_pt.c
开发工具: VS Code
*/
 
//PL 3-7_showf_pt.c - 以两种方式显示float类型的值
#include<stdio.h>

int main(void)
{
    float aboat = 32000.0f;
    float abet = 2.14e9f;
    double dip = 5.32e-5;

    printf("%f can be written %e.\n",aboat,aboat);
    printf("%f can be written %e.\n",abet,abet);
    printf("%f can be written %e.\n",dip,dip);

    return 0;
}