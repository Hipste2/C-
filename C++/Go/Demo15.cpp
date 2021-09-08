//深浅拷贝
#include<iostream>
using namespace std;
//浅拷贝:简单的赋值拷贝操作
//深拷贝:在堆区申请空间进行拷贝操作
class Person
{
public:
    Person()
    {
        cout << "Person的默认构造函数的调用" << endl;
    }
    Person(int age, int height)
    {
        m_age = age;
        m_High = new int(height);
        cout << "Person的有参构造函数的调用" << endl;
    }
    Person(const Person &p)
    {
        cout << "深拷贝" << endl; //深拷贝关键就是申请堆区内存空间
        m_age = p.m_age;
        m_High = new int(*p.m_High);
    }
    ~Person()
    {
        //析构函数就是将堆区开辟的数据进行释放--会报错
        if(m_High != NULL)
        {
            delete m_High;
            m_High = NULL; 
        } //原因就是利用了编译器的浅拷贝 --- 堆区的内存重复释放 利用深拷贝解决
        cout << "Person的析构函数调用" << endl;
    }
    int m_age;
    int *m_High;
};
void test01()
{
    Person p1(18, 180);
    cout << "P1的年龄为多大：" << p1.m_age << " 身高为多少 " << *p1.m_High << endl;
    Person p2(p1);
    cout << "P2的年龄为多大：" << p2.m_age << " 身高为多少 " << *p2.m_High << endl;
}
int main()
{
    test01();
    return 0;
}