#include<iostream>
using namespace std;
int main()
{
    int n=6;
    cout<<"multiplication table of 6 is:\n";
    int i=1;
    do
    {
        cout<<n<<"x"<<i<<"="<<n*i<<endl;
        i++;
    }while(i<=10);
    return 0;
}
