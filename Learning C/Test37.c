//共用体union
//共用体的所有成员共用一个内存地址
#include<stdio.h>
#include<string.h>
union Test
{
    int i;
    double pi;
    char str[10];
};

int main()
{
    union Test OK;

    OK.i = 520;
    OK.pi = 3.14;
    strcpy(OK.str, "sda");
    
    printf("addr of OK.i:%p\n",&OK.i);
    printf("addr of OK.pi:%p\n",&OK.pi);
    printf("addr of OK.str:%p\n",OK.str);

    return 0;
}