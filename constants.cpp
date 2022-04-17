#include<iostream>
using namespace std;
int main()
{
    const int a=3;
    cout<<"the value of a was: "<<a<<endl;
    a=45;//you will get an error because a is a constant
    cout<<"the value of a is :"<<a<<endl;
    return 0;
}