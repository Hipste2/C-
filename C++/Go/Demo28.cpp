//多态
#include<iostream>
using namespace std;
class Animal
{
    public:
        virtual void speak()
        {
            cout << "动物在说话！\n" << endl;
        }
};

class Cat : public Animal
{
    public:
        void speak()
        {
            cout << "小猫在说话!\n" << endl;
        }
};

//执行说话的函数
void doSpeak(Animal &animal)
{
    animal.speak();
}

void test01()
{
    Cat cat;
    doSpeak(cat);
}
int main()
{
    test01();
    return 0;
}