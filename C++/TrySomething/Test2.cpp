#include"Test2.h"

void Person::set(string sex)
{
    this->sex = sex;
}

void num::set(int id)
{
    this->id = id;
}

int num::get()
{
    return id;
}

void Please()
{
    Person p;
    cout << "你的名字:" << endl;
    cin >> p.name; 
    cout << "你的名字是:" << p.name;
}
