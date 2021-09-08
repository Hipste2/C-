//字符串
#include<iostream>
#include<string>
using namespace std;
int main()
{
    const int ArSize = 20;
    char desert[ArSize];
    string str1;
    cout << "Please input your city name:" << endl;
    cin.getline(desert ,ArSize);
    cout << "The city name is : " << desert << endl;
    cout << "Why use string object?" << endl;
    getline(cin ,str1);
    cout << "This is why we play :" << str1;

    return 0;
}