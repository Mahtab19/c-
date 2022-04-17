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
            N=N+1;
            k++;
        }
        int m=1;
        int h=2*i-2;
        while(m<=i-1)
        {
            cout<<h;
            h=h-1;
            m++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}