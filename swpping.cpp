#include<iostream>
using namespace std;
int main()
{
    int a, b, temp;
    cout<<"before swapping"<<endl;
    cout<< "a=" <<a<<" b="<<b<<endl;
    temp =a;
    a=b;
    b=temp;
    cout<<"after swapping"<<endl;
    cout<<"a="<<a<<" b="<<b;
    return 0;
}