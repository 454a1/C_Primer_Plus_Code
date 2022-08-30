/*
_*_Coding GB2312 _*_
开发人员: gaochaofeng
开发日期: 2022.08.28
文件名称: PL 4-12_floatcnv.c
开发工具: VS Code
*/
 
//PL 4-12_floatcnv.c - 不匹配的浮点型转换
#include<stdio.h>

int main(void)
{
    float n1 = 3.0;
    float n2 = 3.0;
    long n3 = 2000000000;
    long n4 = 1234567890;

    printf("%.1e %.1e %.1e %.1e\n",n1,n2,n3,n4);
    printf("%ld %ld\n",n3,n4);
    printf("%ld %ld %ld %ld\n",n1,n2,n3,n4);
    
    return 0;
}