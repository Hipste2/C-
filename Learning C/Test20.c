#include<stdio.h>
//函数指针作为返回值
int add(int,int);
int sub(int,int);
int calc(int (*fp)(int,int),int,int);
int (*select(char))(int,int);

int add(int num1,int num2)
{
    return num1 + num2;
}

int sub(int num1,int num2)
{
    return num1 - num2;
}

int calc(int (*fp)(int,int),int num1,int num2)
{
    return (*fp)(num1,num2);
}

int (*select(char c))(int,int)//指针函数有一个char参数在内嵌套，外嵌套是函数指针，内嵌套是指针函数
{
    switch (c)
    {
    case '+':
        return add;
        break;
    case '-':
        return sub;
        break;
    default:printf("输入错误，拜拜了您嘞！\n");
        break;
    }

}

int main()
{
    int a,b;
    char c;
    printf("请输入需要计算的格式（3+5）:\n");
    scanf("%d%c%d",&a,&c,&b);

    int (*fp)(int,int);
    fp = select(c);
    printf("%d %c %d = %d\n",a, c, b, calc(fp, a, b));

    return 0;
}