/*
_*_Coding GB2312 _*_
������Ա: gaochaofeng
��������: 2022.08.27
�ļ�����: PL 4-5_defines.c
��������: VS Code
*/
 
//PL 4-5_defines.c - ʹ��limit.h��floatͷ�ļ��ж������ʾ����
#include<stdio.h>
#include<limits.h>      //��������
#include<float.h>       //����������

int main(void)
{
    printf("Some number limits for this systerm:\n");
    printf("Biggest int:%d\n",INT_MAX);
    printf("Smallest lone long:%lld.\n",LONG_MIN);
    printf("One byte = %d bits on this systerm.\n",CHAR_BIT);
    printf("Largest double: %e\n", DBL_MAX);
    printf("Smallest normal float: %e\n", FLT_MIN);
    printf("float precision = %d digits\n", FLT_DIG);
    printf("float epsilon = %e\n", FLT_EPSILON);
    
    return 0;
}