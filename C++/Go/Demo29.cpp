//纯虚函数和抽象类
#include<iostream>
using namespace std;
class Base
{
    public:
        //只要有一个纯虚函数就成为抽象类
        //抽象类无法实例化对象
        //抽象类的子类必须重写父类中的纯虚函数
        virtual void func() = 0;

};
class son : public Base
{
    public:
        virtual void func()
        {
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