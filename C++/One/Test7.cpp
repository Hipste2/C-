#include<iostream>
using namespace std;
int main()
{
    string str1;
    cout << "Please input string" << endl;
    cin >> str1;
    for(int i = str1.size() - 1;i >= 0 ; i--)
    {
        cout << str1[i];
    }

    return 0;
}