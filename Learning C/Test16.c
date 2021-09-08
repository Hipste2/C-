#include<stdio.h>
//可变参数 加入头文件
#include<stdarg.h>

int sum(int n, ...);
int sum(int n, ...)
{
    int i ,sum = 0;
    va_list vap;

    va_start(vap,n);
    for ( i = 0; i < n; i++)
    {
        sum += va_arg(vap, int);
        /* code */
    }
    va_end(vap);
    return sum;
}

int main()
{
    int result;
    result = sum(3,1,32,4);
    printf("result = %d\n",result);
    return 0;
}