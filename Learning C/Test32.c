//内联函数来解决函数的效率问题
#include<stdio.h>
//使用内联函数可以优化代码，使代码嵌入到函数中去使用
inline int square(int);
inline int square(int x)
{
    return x * x;
}

int main()
{
    int i = 1;
    while (i <= 100)
    {
        printf("%d面积是:%d", i-1, square(i++));
    }
    return 0;
}
