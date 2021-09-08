#include<iostream>
#include<ctime>
//延时器
using namespace std;
int main()
{
    cout << "Enter the delay time , in seconds!" << endl;
    float secs;
    cin >> secs;
    clock_t delay = secs * CLOCKS_PER_SEC;
    cout << "Starting\a" << endl;
    clock_t start = clock();
    while (clock() - start < delay)
    {
        /* code */
    }
    cout << "Done!" <<endl;
    return 0;
}