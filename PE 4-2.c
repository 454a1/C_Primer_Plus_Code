/*
_*_Coding GB2312 _*_
开发人员: gaochaofeng
开发日期: 2022.08.29
文件名称: PE 4-2.c
开发工具: VS Code
*/
 
//PE 4-2.c - Programming Exercise 4-2
#include<stdio.h>
#include<string.h>

int main(void)
{
    char fname[40];
    char lname[40];

    printf("Enter your first name: ");
    scanf("%s",fname);

    printf("Enter your last name: ");
    scanf("%s",lname);

    printf("\"%s,%s\"\n",lname,fname);
    printf("\"%20s,%20s\"\n",lname,fname);
    printf("\"%-20s,%-20s\"\n",lname,fname);
    printf("\"%*s,%*s\"\n",strlen(lname) + 3,lname,strlen(fname)+3,fname);

    return 0;
}