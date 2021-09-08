#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n_int = INT_MAX;
    short n_short = SHRT_MAX;
    cout<<"sizeof is "<<sizeof(n_int)<<" maybe is "<<INT_MAX<<endl;

    //整形字面值
    int chest = 42;
    int waist = 0x42;
    int inseam = 042;
    cout<<"chest = "<<chest<<endl;
    cout << "waits = " << waist <<endl;
    cout << "inseam = " << inseam <<endl;
    return 0;
}