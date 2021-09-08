#include<iostream>
#include<string>
using namespace std;
class num
{
    public:
        int get();
        void set(int);
    private:
        int id;
};

class Person
{
    public:
        string name;
        string address;
        num num1;
        void set(string );
    private:
        string sex;
};