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
    int val='A'+(n-1);
    char starchar= val-(i-1);
    while(j<=i)
    {
      char ch = starchar + j-1;
      cout<<ch;
      j++;
    }
    cout<< endl;
    i++;

  }
  return 0;
}