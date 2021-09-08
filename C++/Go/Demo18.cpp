//静态成员函数
//所有对象共享同一个函数
//静态成员函数只能访问静态成员变量
#include<iostream>
using namespace std;
class Person
{
    public:
        static void func()
        {
            // m_A = 100;
            cout << "static void func的调用\n" << "静态成员变量的值为:" << m_A << endl;
        }

        static int m_A;//静态成员变量(特点:类内声明，类外初始化)
};

int Person::m_A = 10;

void test01()
{
    //1,通过对象进行访问
    Person p;
    p.func();

    //2,通过类名进行访问
    Person::func();
}

int main()
{
    test01();
    return 0;
}