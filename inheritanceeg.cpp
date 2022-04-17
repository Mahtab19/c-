#include<iostream>
#include<cmath>
using namespace std;
class simpleCalculator
{
    int a, b;
    public:
    void getDataSimple()
    {
        cout<<"enter the value of a"<<endl;
        cin>>a;
        cout<<"enter the value of b"<<endl;
        cin>>b;

    }
    void performOperationsSimple()
    {
        cout<<"the value of a+b is:"<<a+b<<endl;
        cout<<"the value of a-b is:"<<a-b<<endl;
        cout<<"the value of a*b is:"<<a*b<<endl;
        cout<<"the value of a/b is:"<<a/b<<endl;
    }
};
class scientificCalculator
{
    int a,b;
    public:
    void getDataScientific()
    {
        cout<<"enter the value of a"<<endl;
        cin>>a;
        cout<<"enter the value of b"<<endl;
        cin>>b;

    }
    void performOperationsScientific()
    {
        cout<<"the value of cos(a):"<<cos(a)<<endl;
        cout<<"the value of sin(a):"<<sin(a)<<endl;
        cout<<"the value of exp(a):"<<exp(a)<<endl;
        cout<<"the value of tan(a):"<<tan(a)<<endl;
    }

};
class HybridCalculator : public simpleCalculator, public scientificCalculator
{

};
int main()
{
   HybridCalculator calc;
  calc.getDataSimple();
  calc.performOperationsSimple();
  calc.getDataScientific();
  calc.performOperationsScientific();
    return 0;
}