    /*
    _*_Coding GB2312 _*_
    ������Ա: gaochaofeng
    ��������: 2022.08.26
    �ļ�����: PL 3-10_escape.c
    ��������: VS Code
    */
     
    //PL 3-10_escape.c - ʹ��ת������
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