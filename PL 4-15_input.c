/*
_*_Coding GB2312 _*_
������Ա: gaochaofeng
��������: 2022.08.28
�ļ�����: PL 4-15_input.c
��������: VS Code
*/
 
//PL 4-15_input.c - ��ʱʹ��&
#include<stdio.h>

int main(void)
{
    int age;
    float assets;
    char pet[30];

    printf("Enter your age, assets, and favorite pet.\n");
    scanf("%d %f",&age,&assets);
    scanf("%s",pet);

    printf("%d $%.2f %s\n", age, assets, pet);

    return 0;
}