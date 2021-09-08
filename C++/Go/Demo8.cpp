//函数的重载
#include<iostream>
using namespace std;
void func()
{
    cout << "这是普通的调用哦！" << endl;
}

void func(double a)
{
    cout << "这是double类型的调用" << endl;
}

int main()
{
    func(31.1);
    return 0;
}