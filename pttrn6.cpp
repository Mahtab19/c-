#include<iostream>
using namespace std;
int main()
{
    int N;
    cin>>N;
    int n1=(N+1)/2;
    int i=1;
    while(i<=n1)
    {
        int j=1;
        while(j<=n1-i)
        {
            cout<<" ";
            j++;
        }
        int k=1;
        while(k<=(2*i-1))
        {
            cout<< "*";
            k++;
        }
        cout<< endl;
        i++;
    }
        int n2=N/2;
        i = 1;
        while(i<=n2)
        {
            int l=1;
            while(l<=i)
            {
                cout<<" ";
                l++;
            }
            int m=1;
            
            while(m<=(n2-i)*2+1)
            {
                cout<<"*";
                m++;
            }
            cout<<endl;
            i++;
        }

        return 0;
    }