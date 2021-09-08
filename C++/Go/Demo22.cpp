//类做友元
#include<iostream>
#include<string>
using namespace std;

class Building
{
    friend class GoodGay;
    public:
        Building();
        string m_SittingRoom;
    private:
        string m_BedRoom;

};

class GoodGay
{
    public:
        GoodGay();
        void visit(); //访问Building中的所有属性
        Building* building;
};

Building::Building()
{
    m_SittingRoom = "客厅";
    m_BedRoom = "卧室";
    cout << "Building先初始化" << endl;
}

GoodGay::GoodGay()
{
    building = new Building;
    cout << "GoodGay先初始化" << endl;
}

void GoodGay::visit()
{
    cout << "好基友正在访问: " << building->m_SittingRoom << endl;
    cout << "好基友正在访问: " << building->m_BedRoom <<endl;
}
void test01()
{
    GoodGay gg;
    gg.visit();
}

int main()
{
    test01();
    return 0;
}