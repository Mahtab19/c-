#include<iostream>
using namespace std;
int main()
{
    int marks[4]={23,45,56,89};
    int mathmarks[4];
    mathmarks[0] =2278;
    mathmarks[1]=738;
    mathmarks[2]=378;
    mathmarks[3]=578;
    cout<<"these are math marks"<<endl;
    cout<<mathmarks[0]<<endl;
    cout<<mathmarks[1]<<endl;
    cout<<mathmarks[2]<<endl;
    cout<<mathmarks[3]<<endl;
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    //you can change the value of an array
    marks[2]=455;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;

    for(int i=0;i<4;i++)
    {
        cout<<"the value of marks"<<i<<"is"<<marks[i]<<endl;
    }
    //pointers and arrays
    int *p=marks;
 // cout<<*(p++);
  //cout<<*(++p);  
    cout<<"the value of marks[0] is"<<*p;
    cout<<"the value of marks[1] is"<<*(p+1);
    cout<<"the value of marks[2] is"<<*(p+2);
    cout<<"the value of marks[3] is"<<*(p+3);
    return 0;
}