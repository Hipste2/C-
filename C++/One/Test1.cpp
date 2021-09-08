#include<iostream>
using namespace std;
int main()
{
    int carrots;
    cout << "Here are two carrots!How many are you?"<<endl;
    cin >> carrots;
    carrots = carrots + 2;
    cout << "OK!" << "There are " << carrots << endl;
    return 0;
}