/*
_*_Coding GB2312 _*_
������Ա: gaochaofeng
��������: 2022.08.29
�ļ�����: PE 4-8.c
��������: VS Code
*/
 
//PE 4-8.c - 
#include<stdio.h>

const float GALLON_LITER = 3.785;   //1���ش�Լ3.785��
const float Mile_KIL = 1.609;       //1Ӣ���ԼΪ1.609ǧ��

int main(void)
{
    float miles,petrol;     //��̺����ĵ�������
    float milesperpetrol;      //ÿ����������ʻ��Ӣ����

    printf("Enter the all miles: ");
    scanf("%f",&miles);

    printf("Enter the all petrol: ");
    scanf("%f",&petrol);

    milesperpetrol = miles / petrol;

    printf("%.1fӢ��/����\n",milesperpetrol);

    printf("%.1f��/100����\n",milesperpetrol * Mile_KIL / GALLON_LITER);
    
    return 0;
}