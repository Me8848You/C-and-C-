#include<iostream>
#include<conio.h>
using namespace std;
class polygon
{
    protected:
    int l;
    int h;
    public:
    void input()
    {
        cout<<"enter length and height of the polygon"<<endl;
        cin>>l>>h;
    }
    void display()
    {
        cout<<" length is "<<l<<endl;
        cout<<" height is "<<h<<endl;
    }
    virtual void area ()=0;
};
class Traingle: public polygon
{
    public:
    void area ()
    {
        float A;
        A=(l*h)/2.0;
        cout<<"the area of traingle is ="<<A<<endl;
    }
};
class Rectangle : public polygon 
{
    public:
    void area()
    {
        int 
        x;
        x=l*h;
        cout<<" the area of rectangle is ="<<x<<endl;
    }
};
int main()
{
    polygon *p1, *p2;
    Traingle T;
    Rectangle R;
    p1=&T;
    p2=&R;
    T.polygon::input();
    T.polygon::display();
    p2->area();
    p1->area();
    return 0;
}