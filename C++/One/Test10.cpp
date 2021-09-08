#include<iostream>
using namespace std;
int main()
{
    char ch;
    int count = 0;
    cout << "Enter characters; enter # to quit；" << endl;
    cin >> ch;
    while (ch != '#')
    {
        cout << ch;
        count++;
        cin.get(ch);
    }
    cout << endl << count << " Characters read" << endl;
    return 0;
}