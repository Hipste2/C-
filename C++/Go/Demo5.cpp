//全局区
#include<iostream>
using namespace std;

int g_a = 100;
int g_b = 101;
const int g_cc = 10;

int main()
{
    int a = 10;
    int b = 10;
    static int ab = 12;

    cout << "a的地址是:" << &a << endl;
    cout << "b的地址是:" << &b << endl;

    cout << "g_a的地址是:" << &g_a << endl;
    cout << "g_b的地址是:" << &g_b << endl;

    cout << "ab的地址是:" << &ab << endl;


    //字符串常量
    cout << "字符串常量的地址:" << &"Hello World" << endl;
    //const修饰的变量

    const int g_c = 100; 

    cout << "const修饰的局部变量:" << &g_c << endl;
    cout << "const修饰的全局变量:" << &g_cc << endl;

    return 0;
}