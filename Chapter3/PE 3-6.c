/*
_*_Coding GB2312 _*_
������Ա: gaochaofeng
��������: 2022.08.26
�ļ�����: PE 3-6.c
��������: VS Code
*/
 
//PE 3-6.c - Programming Exercise 3-6
#include<stdio.h>

int main(void)
{
    //����
    const float MASS_MOL = 3.0e-23;
    const float MASS_QT = 950;

    float quarts,molecules;

    //��ʾ����ˮ�Ŀ�����
    printf("Enter the number of quarts of water:");
    scanf("%f",&quarts);

    //ˮ������ = ˮ������ * ÿ����ˮ������ / һ��ˮ���ӵ�����
    molecules = quarts * MASS_QT / MASS_MOL;

    printf("%f quarts of water contain %e molecules.\n", quarts, molecules);

    return 0;
}