// with non return type:
 #include<iostream>
#include<conio.h>

 using namespace std;

void volume(int l)
{
    cout<<"the volume of cube is ="<<l*l*l<<endl;
}
void volume(float r, float h)
{
    cout<<"the volume of cylinder is ="<<3.14*r*r*h<<endl;
}
void volume(int l, int b, int h)
{
    cout<<"the volume of rectangle is "<<l*b*h<<endl;
}

int  main()
{
    int L;
    cout<<"enter the length of the cube"<<endl;
    cin>>L;
    volume(L);

    float R, H;
    cout<<"enter radius and height of the cylinder "<<endl;
    cin>>R>>H;
    volume(R,H);

    int x,y,z;
    cout<<"enter the length , breath and height "<<endl;
    cin>>x>>y>>z;
    volume(x,y,z);
    
    getch();
    return 0;
}