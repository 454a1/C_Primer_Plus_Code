/*
_*_Coding GB2312 _*_
������Ա: gaochaofeng
��������: 2022.08.26
�ļ�����: PL 3-7_showf_pt.c
��������: VS Code
*/
 
//PL 3-7_showf_pt.c - �����ַ�ʽ��ʾfloat���͵�ֵ
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