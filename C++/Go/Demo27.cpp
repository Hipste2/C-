//继承
#include<iostream>
using namespace std;
class Base1
{
    public:
        int c = 100;
};
class Base2
{
    public:
        int c = 102;
};

class son : public Base1, public Base2
{
    public:
        int c = 101;
};

void test01()
{
    son son1;
    cout << son1.c << " " << son1.Base1::c << " " << son1.Base2::c << endl;
}

int main()
{
    test01();
    return 0;
}