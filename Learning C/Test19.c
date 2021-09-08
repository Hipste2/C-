#include<stdio.h>
//函数指针作为参数
int add(int,int);
int sub(int,int);
int calc(int (*fp)(int,int),int,int);

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


int main()
{

    printf("3 + 5 = %d\n",calc(add,3,5));
    printf("4 + 6 = %d\n",calc(add,4,6));
    printf("10 - 2 = %d\n",calc(sub,10,2));

    return 0;
}