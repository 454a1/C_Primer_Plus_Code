/*
_*_Coding GB2312 _*_
������Ա: gaochaofeng
��������: 2022.08.25
�ļ�����: PL 2.2_fathm_ft.c
��������: VS Code
*/
 
//PL 2.2_fathm_ft.c - ��ӢѰ(fathm)ת��ΪӢ��(feet)
//New:����������������г˷����㣬��ӡ��������
#include<stdio.h>

int main(void)
{
    int feet,fathoms;       //��������ͬ���ͱ���

    fathoms = 2;
    feet = 6 * fathoms;     //�˷�����  1ӢѰ = 6Ӣ�� = 72Ӣ��

    //��ӡ��������
    printf("There are %d feet in %d fathoms.\n",feet,fathoms);
    printf("Yes,I said %d feet!\n",6*fathoms);

    return 0;
}