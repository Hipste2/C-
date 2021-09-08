#include<stdio.h>
#define MAX(x, y) (((x) > (y)) ? (x) : (y))
//不用为函数里面的参数指定类型
int main()
{
    int x, y;

    printf("请输入两个整数:\n");
    scanf("%d%d",&x,&y);
    printf("%d是较大的一个数\n",MAX(x, y));
    return 0;
}