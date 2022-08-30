/*
_*_Coding GB2312 _*_
开发人员: gaochaofeng
开发日期: 2022.08.28
文件名称: PL 4-15_input.c
开发工具: VS Code
*/
 
//PL 4-15_input.c - 何时使用&
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