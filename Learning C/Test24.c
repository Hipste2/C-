//动态内存管理
#include<stdio.h>
#include<stdlib.h>

int main()
{//malloc free函数
    int *ptr;
    ptr = (int *)malloc(sizeof(int));
    if(ptr == NULL)
    {
        printf("分配内存失败\n");
        exit(1);
    }
    else
    {
        printf("分配内存成功！\n");
    }
    
    printf("请输入一个整数:\n");
    scanf("%d",ptr);

    printf("你输入的整数是:%d\n",*ptr);

    free(ptr);

    return 0;
}