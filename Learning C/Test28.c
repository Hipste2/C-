//如何实现自动管理大小--1
#include<stdlib.h>
#include<stdio.h>
#include<string.h>

#define N 10

int main()
{
    int *ptr1 = NULL;
    int *ptr2 = NULL;

    //第一次申请内存的空间
    ptr1 = (int *)malloc(N * sizeof(int));
    //进行若干操作之后，发现ptr1申请的内存空间不够用，所以需要第二次申请的内存空间
    ptr2 = (int *)malloc(2 * N * sizeof(int));

    //将ptr1的数据拷贝到ptr2中去
    memcpy(ptr2, ptr1, 10);//第一个参数为目标，第二个为源
    free(ptr1);

    //对ptr2申请的内存空间进行若干操作

    free(ptr2);

    return 0;
}