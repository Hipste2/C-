//构造函数
#include<iostream>
using namespace std;

/*
    两种分类方式:
        按参数分为:有参构造和无参构造
        按类型分为:普通构造和拷贝构造
    三种调用方式:
        括号法
        显示法
        隐式转换法
*/
class Person
{
public:
    Person()
    {
        cout << "无参构造函数的调用" << endl;
    }

    Person(int a)
    {
        age = a;
        cout << "有参构造函数的调用" << endl;
        cout << age << endl;
    }

    Person(const Person &p)
    {
        age = p.age;
        cout << "拷贝构造函数的调用" << endl;
        cout << age << endl;
    }

    ~Person()
    {
        cout << "析构函数的调用" << endl;
    }

    int age;
};
//调用
void Test01()
{
    //1,括号法
    Person p1;//默认构造函数的调用
    Person p2(10);//有参构造函数的调用
    Person p3(p2);//拷贝构造函数的调用
    //2,显示法 --- Person()理解为匿名对象(特点:当前行结束后,系统会立即回收掉匿名对象)
    // Person p1;
    // Person p2 = Person(10);
    // Person p3 = Person(p2);
    //3,隐式转换法
    // Person p1;
    // Person p2 = 10;
    // Person p3 = p2;

}

int main()
{
    Test01();
    return 0;
}