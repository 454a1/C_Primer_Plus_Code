/*
_*_Coding GB2312 _*_
������Ա: gaochaofeng
��������: 2022.08.28
�ļ�����: PL 4-12_floatcnv.c
��������: VS Code
*/
 
//PL 4-12_floatcnv.c - ��ƥ��ĸ�����ת��
#include<stdio.h>

int main(void)
{
    float n1 = 3.0;
    float n2 = 3.0;
    long n3 = 2000000000;
    long n4 = 1234567890;

    printf("%.1e %.1e %.1e %.1e\n",n1,n2,n3,n4);
    printf("%ld %ld\n",n3,n4);
    printf("%ld %ld %ld %ld\n",n1,n2,n3,n4);
    
    return 0;
}