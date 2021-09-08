#include<stdio.h>
int main()
{
    char *ptr = "dasdasd";
    char ptr1[];
    ptr1 = ptr;
    printf("*ptr的地址为:%p\nptr1的地址为:%p\n",ptr,ptr1);
    return 0;
}