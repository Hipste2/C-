//const指针练习
#include<iostream>
using namespace std;
int main()
{
    int a = 20, b = 10;
    //常量指针
    const int *ptr = &a;
    //指针指向的值不能改，但是方向可以进行更改
    cout << *ptr << endl;
    ptr = &b;
    cout << *ptr << endl;

    //指针常量
    int *const ptr1 = &a;
    //指针指向的位置不能改，但是值可以改
    *ptr1 = 10;
    cout << *ptr1 << endl << a << endl;
 
    //const既修饰指针有修饰常量，所以都不能更改
    const int *const ptr2 = &b;
    cout << *ptr2;
 
    return 0;
}