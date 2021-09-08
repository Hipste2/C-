//继承
#include<iostream>
using namespace std;
class BasePage
{
    public:
        int a;
    protected:
        int b;
    private:
        int d;
};
//语法：class子类 : 继承方式 父类
//该子类也成为派生类
//父类为基类
class pythonpage : public BasePage
{
    public:
        void fucker()
        {
            a = 10;
            b = 100;
        }
};

void test01()
{

}

int main()
{
    test01();
    return 0;
}