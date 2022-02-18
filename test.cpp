#include<iostream>

using namespace std;

class one
{
    protected:
    int a;
    public:
    void input()
    {
        cout<<"enter a number"<<endl;
        cin>>a;
    }
    void d()
    {
        cout<<"the number is "<<a<<endl;
    }

};
class two: public one
{
    private:
    int b;
    public:
    void input()
    {
        cout<<"enter another number "<<endl;
        cin>>b;
    }
    void d()
    {
        cout<<" the second number is "<<b<<endl;
    }

};
int main()
{
    two t;
    t.input();
    t.d();
    t.one::input();
    t.one::d();
    return 0;
}