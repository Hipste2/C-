//C++对象模型和this指针
//this指针指向被调用成员函数所属的成员对象
//谁调用，指向谁
//this指针的用途
//当形参和成员变量同名时,可用this指针来区分
//在类的非静态成员函数中返回对象本身,可使用return *this
#include<iostream>
using namespace std;
class Person
{
    public:
        int Age;
        Person(int Age)
        {
            this->Age = Age;
            cout << "年龄为:" << Age << endl;;
        }
        Person& PersonAge(Person &p)
        {
            this->Age += p.Age;
            cout << "年龄为:" << Age <<endl;
            return *this;
        }
};
int main()
{
    Person p(18);
    Person p1(20);

    p1.PersonAge(p).PersonAge(p);

    return 0;
}