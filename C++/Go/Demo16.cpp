//初始化列表
#include<iostream>
using namespace std;

class Person
{
    public:
        // Person(int a, int b)
        // {
        //     m_Age = a;
        //     m_Num = b;
        // }
        Person(int a, int b) : m_Num(a), m_Age(b) //列表
        {

        }
        ~Person()
        {
            cout << "结束" << endl;
        }
        int m_Age;
        int m_Num;
        void show()
        {
            cout << m_Age << " " << m_Num << endl;
        }
};

int main()
{
    Person p(12,43);
    p.show();
    return 0;
}