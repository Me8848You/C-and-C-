#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;
class polar
{
    private:
    float rad;
    float ang;
    
    public:
    polar()
    {
        rad=0;
        ang=0;
    }
    polar(float a, float b)
    {
        rad=a;
        ang=b;
    }
    void display()
    {
        cout<<"("<<rad<<","<<ang<<")"<<endl;
    }
    float getx()
    {
        return (rad*cos(ang));
    }
    float gety()
    {
        return (rad*sin(ang));
    }
    friend polar operator +(polar A, polar B);


};
polar operator +(polar A, polar B)
{
    float a, r, x,y;
    x=A.getx()+ B.getx();
    y=A.gety()+B.gety();
    r=sqrt(x*x+y*y);
    a=atan(y/x);
    return (polar (r,a));
}
int main()
{
    polar p1(10.5,0.7);
    polar p2(23.44,20);
    polar p3;
    p1.display();
    p2.display();
    p3=p1+p2;
    p3.display();
    return 0;

}