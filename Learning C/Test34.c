//结构体数组用数组去理解
//结构体指针（结构体的变量名不是指向其地址的，所以要用取址运算符）
//传递结构体变量和结构体指针
#include<stdio.h>
int main()
{
    struct book
    {
        int x;
        int y;
    }t1, t2;
    t1.x = 2;
    t1.y = 3;
    t2 = t1;
    printf("t2.x的值为:%d\n",t2.x);
    printf("t2.y的值为:%d\n",t2.y);
    return 0;
    



}