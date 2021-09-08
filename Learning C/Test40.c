//位操作
//逻辑位运算符 ~（取反） &（与） ^（异或） |（或） （按照优先级顺序排列由高到低） 
// #include<stdio.h>
// #include<limits.h>
// int main()
// {
//     printf("一个字节为几位:%d\n",CHAR_BIT);
//     printf("signed char的最小值:%d\n",SCHAR_MIN);
//     return 0;
// }
#include<stdio.h>
int main()
{
    int max = 0xFF;
    int v1 = 0xABCDEF;
    int v2 = 0xABCDEF;
    int v3 = 0xABCDEF;

    v1 &= max; 
    v2 |= max;
    v3 ^= max;

    printf("v1 = 0x%X\n",v1);
    printf("v2 = 0x%X\n",v2);
    printf("v3 = 0x%X\n",v3);

    return 0;
}