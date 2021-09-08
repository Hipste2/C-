//引用作为函数的返回值
#include<iostream>
using namespace std;

//1，不要返回局部变量的引用
int& test01()
{
    int a = 10;
    return a;
}
//2，函数的调用可以作为左值
int main()
{

    return 0;
}
//引用的本质就是指针常量