#include<stdio.h>
int main()
{
/*
    位运算的几种操作
    与  x & y
    或 x | y
    非  x !  y
    异或 x ^ y
*/
    short abc = 9115;
    int a = 1;
    int b = a << 1;
    int c = a >> 1;
    int d = -1;
    int k =  d << 1;
    short abcd = abc << 2;
    printf("%d\n",b);
    printf("%d\n",k);
    printf("%d\n",abcd);
    return 0;
    
}