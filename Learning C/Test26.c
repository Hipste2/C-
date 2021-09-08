//初始化内存空间
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define N 10

int main()
{
    int *ptr = NULL;
    int i;

    ptr = (int *)malloc(N * sizeof(int));
    if(ptr == NULL)
    {
        exit(1);
    }

    memset(ptr, 0, N * sizeof(int));//第一个是指向要初始化的内存块 第二个指定要初始化的常量 第三个指的是要初始化的内存大小
    //以上操作意思为初始化都为0
    for(i = 0;i < N;i++)
    {
        printf("%d ",ptr[i]);
    }
    putchar('\n');
    free(ptr);
    return 0;
}