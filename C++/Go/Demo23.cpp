//运算符重载
#include<iostream>
using namespace std;
class Perosn
{
    public:
        // Perosn operator+(Perosn &p)//1,通过成员函数重载加号
        // {
        //     Perosn temp;
        //     temp.m_A = this->m_A + p.m_A;
        //     temp.m_B = this->m_B + p.m_B;
        //     return temp;
        // }

        int m_A;
        int m_B;
};

Perosn operator+(Perosn &p1, Perosn &p2)
{
    Perosn temp;
    temp.m_A = p1.m_A + p2.m_A;
    temp.m_B = p1.m_B + p2.m_B;
    return temp;
}
// void test01()
// {
//     Perosn p1, p2;
//     p1.m_A = 10;
//     p1.m_B = 20;
//     p2.m_A = 15;
//     p2.m_B = 20;

//     Perosn p3 = p1 + p2;
//     cout << "p3.m_A的值为: " << p3.m_A << endl;
//     cout << "p3.m_B的值为: " << p3.m_B << endl;
// }
// 1,通过成员函数重载加号

//2,通过全局函数重载加号
void test02()
{
    Perosn p1, p2;
    p1.m_A = 10;
    p1.m_B = 20;
    p2.m_A = 15;
    p2.m_B = 20;

    Perosn p3 = p1 + p2;
    cout << "p3.m_A的值为: " << p3.m_A << endl;
    cout << "p3.m_B的值为: " << p3.m_B << endl;
}
int main()
{
    // test01();
    test02();
    return 0;
}