/*
_*_Coding GB2312 _*_
������Ա: gaochaofeng
��������: 2022.08.26
�ļ�����: PE 3-8.c
��������: VS Code
*/
 
//PE 3-8.c - Programming Exercise 3-8
#include<stdio.h>

int main(void)
{
    //����
    const int CUP_PINT = 2;         //1Ʒ�ѵ���2��
    const int OUNCE_CUP = 8;        //1������8��˾
    const int SPOON_OUNCE = 2;      //1��˾����2������
    const int TEASPOON_SPOON = 3;   //1�����׵���3����

    float cups,pints,ounces,spoons,teaspoons;

    //��ʾ����豭��
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