//指向指针的指针
#include<stdio.h>
int main()
{
    int num = 520;
    int *ptr = &num;
    int **ptr1 = &ptr;
    printf("num的地址为：%p\n",&num);
    printf("ptr的地址为：%p\n",ptr);
    printf("&ptr的地址为：%p\n",&ptr);
    printf("指向ptr的指针ptr1的地址为：%p\n",ptr1);
    printf("&ptr1的地址为：%p\n",&ptr1);
    printf("**ptr1的值：%d",**ptr1);
    
    return 0;
}