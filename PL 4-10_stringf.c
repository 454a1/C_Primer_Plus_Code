/*
_*_Coding GB2312 _*_
������Ա: gaochaofeng
��������: 2022.08.28
�ļ�����: PL 4-10_stringf.c
��������: VS Code
*/
 
//PL 4-10_stringf.c - �ַ�����ʽ
#include<stdio.h>

#define BLURB "Authentic imitation"

int main(void)
{
    printf("[%2s]\n",BLURB);
    printf("[%24s]\n",BLURB);
    printf("[%24.5s]\n",BLURB);
    printf("[%-24.5s]\n",BLURB);
    
    return 0;
}