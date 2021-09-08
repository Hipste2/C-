#include<iostream>
using namespace std;
int main()
{
    cout << "猜一下我在哪里？" << endl;
    goto Flag;

    cout << "Ok" << endl;

    Flag:
    cout << "我是谁" << endl;
    return 0;
}