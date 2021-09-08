#include<stdio.h>
//函数指针可以参照数组指针的格式去写

int square(int num);

int square(int num)
{
    return num * num;
}

int main()
{
    int num;
    int (*fp)(int);//用指针指向函数所以需要这样去定义,后面的括号int证明参数是整形的,前面的int证明返回类型是整形的所
    //与函数相互照应可以这样去定义

    printf("请输入一个整数:\n");
    scanf("%d",&num);

    fp = square;//可以对其进行取地址&，但是函数名就是相当于地址所以可以直接用函数名进行调用
    printf("%d * %d = %d\n",num,num,(* fp)(num));
    return 0;
}