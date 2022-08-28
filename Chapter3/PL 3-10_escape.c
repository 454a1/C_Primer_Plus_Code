    /*
    _*_Coding GB2312 _*_
    开发人员: gaochaofeng
    开发日期: 2022.08.26
    文件名称: PL 3-10_escape.c
    开发工具: VS Code
    */
     
    //PL 3-10_escape.c - 使用转义序列
    #include<stdio.h>
    
    int main(void)
    {
        float salary;

        printf("\aEnter your desired monthly salary:");
        printf(" $_______\b\b\b\b\b\b\b");
        scanf("%f",&salary);
        printf("\n\t$%.2f a month is $%.2f a year.",salary,12.0 * salary);
        printf("\rGee!\n");

        return 0;
    }