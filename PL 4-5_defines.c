/*
_*_Coding GB2312 _*_
开发人员: gaochaofeng
开发日期: 2022.08.27
文件名称: PL 4-5_defines.c
开发工具: VS Code
*/
 
//PL 4-5_defines.c - 使用limit.h和float头文件中定义的明示常量
#include<stdio.h>
#include<limits.h>      //整形限制
#include<float.h>       //浮点型限制

int main(void)
{
    printf("Some number limits for this systerm:\n");
    printf("Biggest int:%d\n",INT_MAX);
    printf("Smallest lone long:%lld.\n",LONG_MIN);
    printf("One byte = %d bits on this systerm.\n",CHAR_BIT);
    printf("Largest double: %e\n", DBL_MAX);
    printf("Smallest normal float: %e\n", FLT_MIN);
    printf("float precision = %d digits\n", FLT_DIG);
    printf("float epsilon = %e\n", FLT_EPSILON);
    
    return 0;
}