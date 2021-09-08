//操作符重载练习---初步理解链式编程
#include<iostream>
using namespace std;
class Person
{
    public:
    Person operator+(Person &p)
    {
        Person temp;
        temp.m_A = this->m_A+ p.m_A;
        temp.m_B = this->m_B + p.m_B;
        return temp;
    }
        int m_A;
        int m_B;
};

ostream& operator<<(ostream &cout, Person &p)
{
    cout << p.m_A << " " << p.m_B << endl;
    return cout;
}

void test01()
{
    Person p1, p2;
    p1.m_A = 10;
    p1.m_B = 20;
    p2.m_A = 10;
    p2.m_B = 11;

    Person p = p1.operator+(p2);// p1 + p2;
    operator<<(cout, p);
}
int main()
{
    test01();
    return 0;
}