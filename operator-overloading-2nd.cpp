#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;
class sample
{
    private:
    int count;

    public:
    sample()
    {
        count=0;
    }
    sample(int x)
    {
        count=x;
    }
    void display()
    {
        cout<<"count is "<<count<<endl;
    }
    void operator --()
    {
        --count;
    }
    void operator ++()
    {
        ++count;
    }
    void operator -()
    {
        count =-count;
    }
    void operator ++(int a)
    {
        count++;
    }
};
int main()
{
    sample s(5);
    s.display();
    --s;
    s.display();
    ++s;
    ++s;
    s.display();
    -s;
    s.display();
    ++s;
    s.display();

    getch();
    return 0;
}