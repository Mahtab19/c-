  #include<iostream>
using namespace std;
//#include "Solution.h"

  bool checkMember(int n)
{
    int fn1 = 0,fn2 = 1,nn =0;
    for(int i =3;nn<=n;i++)
    {
        nn = fn1 + fn2;
    	fn1 = fn2;
        fn2 = nn;
        if(nn==n)
        {return true;}
        else if (nn>n)
        {return false;}
    }
    return false;
}
#include<iostream>
using namespace std;
//#include "Solution.h"

int main(){

  int n; 
  cin >> n ;
  if(checkMember(n)){
    cout << "true" << endl;
  }else{
    cout << "false" << endl;
  }

}


