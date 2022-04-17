#include<iostream>
using namespace std;
class student
{
    protected:
    int roll_number;
    public:
    void set_roll_number(int);
    void get_roll_number(void);
};
void student :: set_roll_number(int r)
{
    roll_number=r;
}
void student :: get_roll_number()
{
    cout<<"the roll no. is"<<roll_number<<endl;
}
class exam : public student
{
    protected:
    float shayari;
    float ghazal;
    public:
    void set_marks(float,float);
    void get_marks(void);
};
void exam :: set_marks(float m, float n)
{
    shayari = m;
    ghazal = n;
}
void exam :: get_marks()
{
    cout<<"the marks obtained in shayari are: "<<shayari<<endl;
    cout<<"the marks obtained in ghazal are: "<<ghazal<<endl;
}
class Result : public exam
{
    float percentage;
    public:
    void display_results()
    {
        get_roll_number();
        get_marks();
        cout<<"your percentage is"<<(shayari+ghazal)/2<<endl;
        
    }
};
int main(){

    Result harry;
    harry.set_roll_number(55);
    harry.set_marks(92.0,92.0);
    harry.display_results();
    return 0;
}