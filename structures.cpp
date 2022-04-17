#include<iostream>
using namespace std;
struct employee //structure - different data types se bnana ho tb 
{
    /*data*/
    int eId;
    char favchar;
    float salary;
};
int main()
{

struct employee harry;
harry.eId=1;
harry.favchar='c';
harry.salary=12000000;
cout<<"the value is"<<harry.eId<<endl;
cout<<"the value is"<<harry.favchar<<endl;
cout<<"the value is "<<harry.salary<<endl;
    return 0;
}