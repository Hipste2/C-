//高级宏定义
#include<stdio.h>
//不带参数的宏定义
#define PI 3.14
//宏定义允许嵌套，可以在一个宏定义里面用另外一个宏定义
#define R 6371
#define V PI * R * R * R * 4 / 3
//若在程序中使用#undef x则相对应的PI的范围就是到x并不是之前的define全局宏定义

int main()
{
    // int r;
    // float s;
    // printf("请输入圆的半径:\n");
    // scanf("%d",&r);

    // s = PI * r * r;

    printf("地球的体积是:%.2f",V);
    return 0;
}