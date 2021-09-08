//引用
//作用就是给变量起别名
//引用必须被初始化，初始化后不能改变了（主要是不能更改指向，但是可以更改值）
#include<iostream>
using namespace std;
int main()
{
    int a = 10;
    int &b = a;
    cout << "a的值：" << a << endl << "a的地址:" << &a << endl;
    cout << "b的值：" << b << endl << "b的地址:" << &b << endl;
    return 0;
}