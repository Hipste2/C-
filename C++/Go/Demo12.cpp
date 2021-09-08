//构造函数
#include<iostream>
using namespace std;
//对象的初始化和清理
class Person
{
    public:
        //1,构造函数进行初始化,可以重载
        Person()
        {
            cout << "Person构造函数的调用" << endl;
        }
        //2,析构函数进行清理操作,不可以参数所以不可以重载
        ~Person()
        {
            cout << "Person所创建的对象已经被销毁" << endl;
        }
};





int main()
{
    Person p1;
    return 0;
}