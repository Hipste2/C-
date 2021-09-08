#include<iostream>
using namespace std;
int main()
{
    int sum = 0;
    cout << "请输入一串整数，整数之间用空格相隔:" << endl;
    int i;
    while (cin >> i)
    {
        sum += i;
        while (cin.peek() == ' ')
        {
            cin.get();/* code */
        }
        if(cin.peek() == '\n')
        {
            break;
        }
    }
    cout << "结果是:" << sum << endl;
    return 0;
}