#include<stdio.h>

int fact(int);
int fact(int num)
{
    int result = num;
    if(num >1)
    {
        result *= fact(num - 1);
    }
    else
    {
        result = 1;
    }
    return result;
}


int main()
{
    int num;
    printf("请输入要进行计算的:\n");
    scanf("%d",&num);

    printf("计算的结果为:%d",fact(num));
    return 0;
}