//POlar to rectangle and vice versa....
// with non return type:
#include<iostream>
#include<conio.h>

#include<math.h>

using namespace std;

class polar;
class rectangle
{
    private:
    int x;
    int y;

    public:
    rectangle()
    {
      x=0;
      y=0;
    }
    rectangle(int a, int b)
    {
        x=a;
        y=b;
    }
    void display()
    {
        cout<<"x cordinate ="<<x<<endl;
        cout<<"y cordinate = "<<y<<endl;
    }
    operator polar();
};

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
    polar (float p, float q)
    {
        rad=p;
        ang=q;
    }
    void display()
    {
        cout<<"radius="<<rad<<endl;
        cout<<"angle ="<<ang<<endl;
    }
    operator rectangle();
};

rectangle :: operator polar()
{
    float r, a;
    r=sqrt(x*x+y*y);
    a=atan(y/x);
    return(polar(r,a));

}
polar :: operator rectangle ()
{
    float x,y;
    x=rad*cos(ang);
    y=rad*sin(ang); 
    return (rectangle (x,y));
}

int main()
{
     polar p1;
     rectangle r1(2.788,2.44);
     p1=r1;
     r1.display();
     p1.display();

     rectangle r2;
     polar p2(10.0,7.07);
     r2=p2;
     p2.display();
     r2.display();
     getch();
     return 0;
}
