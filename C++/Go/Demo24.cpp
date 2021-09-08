//左移运算符的重载
#include<iostream>
using namespace std;
class Person
{
    public:
        int m_A;
        int m_B;
};

ostream& operator<<(ostream &cout, Person &p)
{
    cout << "m_A = " << p.m_A << " m_B = " << p.m_B;
    return cout;
}

void test01()
{
    Person p;
    p.m_A = 10;
    p.m_B = 10;

    operator<<(cout, p) << endl;
}
int main()
{
    test01();
    return 0;
}