//类与对象
#include<iostream>
#include<string>
using namespace std;

class Student
{
    public:
        int age;
        int number;
        string name;
        void show()
        {
            cout << "名字: " << name << " 学号: " << number << " 年龄: " << age << endl;
        }
};

int main()
{
    Student student;
    cout << "请输入你的个人信息:" << endl;
    cout << "姓名:" << endl;
    cin >> student.name;
    cout << "年龄:" << endl;
    cin >> student.age;
    cout << "学号:" << endl;
    cin >> student.number;

    student.show();
    return 0;
}