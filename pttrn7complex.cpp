#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int j=1;
        while(j<=n-i)
        {
            cout<<" ";
            j++;
        }
        int k=1;
        int N=i;
        while(k<=i)
        {
            cout<<N;
            k++;
            N++;
        }
        i++;
        cout<<endl;
    }
}