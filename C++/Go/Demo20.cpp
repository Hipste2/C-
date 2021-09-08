//const修饰成员函数(此时叫常函数)
//一般修饰后不可以修改但是成员属性后加入mutable字样后可以修改
//同理还有常对象，常对象只能调用常函数,但是普通对象可以调用常函数
#include<iostream>
using namespace std;
class Person
{
    public:
        Person() 
        {

        }
        void showPerson() const //本质const修饰的是this指针的指向
        {
            this->m_B = 100;
        }
        void test()
        {

        }
    int m_A;
    mutable int m_B;//可以修改
};

void test01()
{
    Person p;
    p.showPerson();
}

void test02()
{
    const Person p;
}

int main()
{

    return 0;
}