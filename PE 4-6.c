/*
_*_Coding GB2312 _*_
������Ա: gaochaofeng
��������: 2022.08.29
�ļ�����: PE 4-6.c
��������: VS Code
*/
 
//PE 4-6.c - Programming Exercise 4-6
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

    printf("%s %s\n",fname,lname);
    printf("%*d %*d\n",strlen(fname),strlen(fname),strlen(lname),strlen(lname));

    printf("%s %s\n",fname,lname);
    printf("%*d %*d\n",-strlen(fname),strlen(fname),-strlen(lname),strlen(lname));

    return 0;
}