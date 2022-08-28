/*
_*_Coding GB2312 _*_
开发人员: gaochaofeng
开发日期: 2022.08.26
文件名称: PL 3-8_typesize.c
开发工具: VS Code
*/
 
//PL 3-8_typesize.c - 打印类型大小
#include<stdio.h>

int main(void)
{
    printf("Type int has a size of %zd bytes.\n",sizeof(int));
    printf("Type char has a size of %zd bytes.\n",sizeof(char));
    printf("Type short has a size of %zd bytes.\n",sizeof(short));
    printf("Type float has a size of %zd bytes.\n",sizeof(float));
    printf("Type double has a size of %zd bytes.\n",sizeof(double));

    return 0;
}