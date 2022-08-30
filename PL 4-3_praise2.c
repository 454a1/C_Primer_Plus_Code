/*
_*_Coding GB2312 _*_
开发人员: gaochaofeng
开发日期: 2022.08.27
文件名称: PL 4-3_praise2.c
开发工具: VS Code
*/
 
//PL 4-3_praise2.c - 
#include<stdio.h>
#include<string.h>

#define PRAISE "You are an extraordinary being."

int main(void)
{
    char name[40];

    printf("What's your name?");
    scanf("%s",name);

    printf("Hello,%s,%s\n",name,PRAISE);
    printf("Your name of %zd letters occupies %zd memory cells.\n",
    strlen(name),sizeof(name));
    printf("The phrase of praise has %zd letters.\n",strlen(PRAISE));
    printf("and occupies %zd memory cells.\n",sizeof(name));

    return 0;
}