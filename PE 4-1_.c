/*
_*_Coding GB2312 _*_
开发人员: gaochaofeng
开发日期: 2022.08.29
文件名称: PE 4-1_.c
开发工具: VS Code
*/
 
//PE 4-1_.c - Programming Exercise 4-1
#include<stdio.h>

int main(void)
{
    char fname[40];
    char lname[40];

    printf("Enter your first name: ");
    scanf("%s",fname);

    printf("Enter your last name: ");
    scanf("%s",lname);

    printf("%s,%s\n",lname,fname);
    
    return 0;
}