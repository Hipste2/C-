#include<stdio.h>
//extern关键字,变量在别处已经定义，编译器报错，用externg告诉编译器先不要报错
void c()
{
    extern count;
    count++;
}
int count = 0;

int main()
{
    c();
    printf("%d",count);
    return 0;
}