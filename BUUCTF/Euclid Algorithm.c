//RSA----求解密钥d
#include<stdio.h>

int Euclid(int ,int);
int Euclid(int a,int b)
{
    int temp;
    if(a != b)
    {
        if(a > b)
        {
            a = a % b;
        }
        else
        {
            b = b % a;
        }
    }
    else
    {
        printf("Boom!!!!\a\n");
    }
}
int main()
{
    int a, b, c;
    printf("请输入e的值:\n");
    scanf("%d", &a);
    printf("请输入欧拉函数的计算结果:\n");
    scanf("%d", &b);
    c = Euclid(a, b);
    printf("-----------\n");
    printf("经过计算密钥的值为:%d",c);
    return 0;
}