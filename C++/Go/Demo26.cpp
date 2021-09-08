//继承
#include<iostream>
using namespace std;
class Base
{
    public:
        int m_A = 100;
};

class son : public Base
{
    public:
        son()
        {
            m_A = 101;
        }
        int m_A;
};
void test01()
{
    son s;
    cout << "This is " << s.m_A << endl;
    //通过子类对象访问到父类成员需要加入作用域
    cout << "This is " << s.Base::m_A << endl;
}
int main()
{
    test01();
    return 0;
}