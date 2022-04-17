#include<iostream>
using namespace std;
class point
{
    int x,y;
    public:
    friend void difference(point,point);
    point(int a,int b)
    {
        x=a;
        y=b;
    }
    void displacement()
    {
        cout<<"the point is("<<x<<","<<y<<")"<<endl;
    }
};
void difference(point 01,point 02)
{
    int x_diff=02.x-01.x;
    int y_diff=02.y-01.y;
    double dist=sqrt((x_diff)*(x_diff)+
    (y_diff)*(y_diff));
    cout<<"distance is"<<dist<<"units";

}
int main()
{
    point p1(1,2).p2(4,3);
    p1.displaypoint();
    p2.displaypoint();
    cout<<endl<<endl;
    difference(p1,p2);
    return 0;
}

}