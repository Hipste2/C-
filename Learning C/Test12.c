//const与指针的应用
#include<stdio.h>
int main()
{
    // const float pi = 3.14;
    // printf("pi的值为:%f",pi);
    // int num = 520;
    // const int cnum = 211;
    // const int *ptr = &cnum;
    // printf("cnum的值为:%d，cnum的地址为:%p\n",cnum,&cnum);
    // printf("ptr指向的值为:%d,ptr的地址为:%p\n",*ptr,ptr);
    
    //所以总结指向常量的指针可以进行修改，但是不能通过解引用来修改其数据

    int num = 520;
    const int cnum = 521;
    int *const ptr = &cnum;//只能修改指向的值--指针常量
    printf("地址分别为:%p,%p\n",&cnum,ptr);

    *ptr = 522;
    printf("*ptr的值为:%d\n",*ptr);

    const int *p = &cnum; //可以修改指向的地址---指向常量的指针
    p = &num;
    printf("*p的值为:%d",*p);
    return 0;
}