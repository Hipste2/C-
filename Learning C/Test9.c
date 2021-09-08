//void 类型指针和 NULL指针

#include<stdio.h>
int main()
{
    //void类型指针指向任何类型
    int a = 10;
    int *ptr = &a;
    void *p;
    printf("指针ptr的值：%d",*ptr);

    p = ptr;
    printf("void类型指针的值:%d",*(int *)p);

    
    return 0;
}