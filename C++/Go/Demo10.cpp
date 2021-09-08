#include<iostream>
#include<string>
using namespace std;

class Person
{
    public:
        string name;
        void setName(string name1)
        {
            name = name1;
        }
        string getName()
        {
            return name;
        }
    private:
        int num;
};


int main()
{
    Person p;
    p.setName("张家园");
    cout << p.getName() << endl;
    return 0;
}