//函数的参数---传值和传址


#include<stdio.h>

void swap(int *x,int *y);
void swap(int *x,int *y)
{
    printf("swap函数中交换前的值为:x=%d,y=%d\n",*x,*y);
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    printf("swap函数中交换后的值为:x=%d,y=%d\n",*x,*y);
}


int main()
{
    int x = 4,y = 5;
    printf("在main函数中交换前的值为---- x=%d,y=%d\n",x,y);
    swap(&x,&y);
    printf("在main函数中交换后的值为---- x=%d,y=%d\n",x,y);
    return 0;

}