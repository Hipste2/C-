#include<stdio.h>
//可以类比参考传参数指针，只要是涉及传参数地址的，都可以影响到原函数的内容 
void get_array(int a[10]);

void get_array(int a[10])
{
    for(int i = 0;i<10;i++)
    {
        printf("a[%d] = %d\n",i,a[i]);
    }
}

int main()
{
    int a[10] = {1,2,3,4,5,6,7,8,9,0};

    get_array(a);

    return 0;
}