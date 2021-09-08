//友元函数--全局函数友元
#include<iostream>
#include<string>
using namespace std;
class Building
{
    friend void GoodFriend(Building &);//friend不论是public还是private都可以,无影响
    public:
        Building()
        {
            m_SittingRoom = "客厅";
            m_BedRoom = "卧室";
        }
        string m_SittingRoom;
    private:
        string m_BedRoom;
};

void GoodFriend(Building &buid)
{
    cout << "你的好朋友正在访问SittingRoom:" << buid.m_SittingRoom << endl;
    cout << "你的好朋友正在访问SittingRoom:" << buid.m_BedRoom << endl;
}

void test01()
{
    Building building;
    GoodFriend(building);
}
int main()
{
    test01();
    return 0;
}