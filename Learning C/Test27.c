//Test26.c过于复杂，所以本文使用calloc进行初始化
//malloc不能自动初始化为0,减少代码复杂度
#include<stdio.h>
#include<stdlib.h>
#define N 10
int main()
{
    int *ptr;
    int i;
    ptr = calloc(N, sizeof(int));//第一个空为N，第二个为size；整体是申请N * size大小内存，全部初始化为0
    if(ptr == NULL)
    {
        exit(1);
    }
    free(ptr);
    return 0;
}