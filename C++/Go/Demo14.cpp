//拷贝构造函数的调用时机
#include<iostream>
using namespace std;
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
    }

    Person(const Person &p)
    {
        age = p.age;
        cout << "拷贝构造函数的调用" << endl;
    }

    ~Person()
    {
        cout << "析构函数的调用" << endl;
    }
    int age;
};
//1,使用一个已经创建完毕的对象来初始化一个新对象
// void test01()
// {
//     Person p1(20);
//     Person p2(p1);

//     cout << "P2的年龄为多少:" << p2.age << endl;
// }


//2,值传递的方式给函数的参数传值
// void doWork(Person p) // 拷贝
// {

// }
// void test02()
// {
//     Person p;
//     doWork(p);

// }

//3,值方式返回局部对象
Person doWork2()
{
    Person p1;//局部对象并不返回，而是函数调用后直接销毁
    return p1;//复制一个新的p1进行返回
}
void test03()
{
    Person p = doWork2();
}

int main()
{
    // test01();
    //test02();
    test03();
    return 0;
}


/*
    总结调用规则：C++编译器会自动给三个构造函数
    第一个默认
    第二个有参
    第三个拷贝
    1，但是调用我们写的默认构造函数的时候，C++编译器会只有默认和编译器写的拷贝
    2，调用有参的时候，编译器不再提供默认构造，依然会提供拷贝构造函数
    3，如果我们写了拷贝构造函数，编译器不在提供其他的
*/