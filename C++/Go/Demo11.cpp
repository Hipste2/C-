//点和圆在坐标轴上的位置关系
#include<iostream>
#include "Point.cpp"
using namespace std;

class Circle
{
    public:
    //设置半径
    void setR(int r)
    {
        m_R = r;
    }
    //获取半径
    int getR()
    {
        return m_R;
    }
    //设置圆心
    void setCenter(Point center)
    {
        m_Center = center;
    }
    //获取圆心
    Point getCenter()
    {
        return m_Center;
    }
    private:
        int m_R;
        Point m_Center;
};

//判断点和圆的关系的函数
void isInCircle(Circle &c, Point &p)
{
    //计算两点之间距离的平方
    int distance =
    ( c.getCenter().getX() - p.getX() ) * ( c.getCenter().getX() - p.getX() )  + 
    ( c.getCenter().getY() - p.getY() ) * ( c.getCenter().getY() - p.getY() );
    //计算半径的平方
    int rDistance = c.getR() * c.getR();
    //判断关系
    if (distance == rDistance)
    {
        cout << "点在圆上" << endl;
    }
    else if(distance > rDistance)
    {
        cout << "点在圆外" << endl;
    }
    else
    {
        cout << "点在圆内" << endl;
    }
}

int main()
{
    //创建一个圆
    Circle c;
    c.setR(10);
    
    Point Center;
    Center.setX(10);
    Center.setY(0);
    c.setCenter(Center);
    //创建一个点
    Point p;
    p.setX(10);
    p.setY(10);
    //判断
    isInCircle(c, p);
    return 0;
}