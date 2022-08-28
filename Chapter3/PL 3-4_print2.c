/*
_*_Coding GB2312 _*_
开发人员: gaochaofeng
开发日期: 2022.08.26
文件名称: PL 3-4_print2.c
开发工具: VS Code
*/
 
//PL 3-4_print2.c - 更多printf()的特性
//正确使用转换说明
#include<stdio.h>

int main(void)
{
    unsigned int un = 3000000000;
    short end = 200;
    long big = 65537;
    long long verybig = 12345678908642;

    printf("un = %u and not %d.\n",un,un);
    printf("end = %hd and %d.\n",end,end);
    printf("big = %ld and not %hd.\n",big,big);
    printf("verybig = %lld and not %ld.\n",verybig,verybig);
    
    return 0;
}