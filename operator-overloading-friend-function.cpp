
 #include<iostream>
#include<conio.h>

 using namespace std;
class weight 
{
    private:
    int kg;
    int gm;

    public:
    weight ()
    {
        kg=0;
        gm=0;
    }
    weight (int x, int y)
    {
        kg=x;
        gm=y;
    }
    void display()
    {
        cout<<"kilograms="<<kg<<endl;
        cout<<"grams ="<<gm<<endl;
    }
    friend weight operator -(weight a, weight b);
};
weight operator  -(weight a, weight b)
{
    weight c;
    c.gm=a.gm-b.gm;
    c.kg=a.kg-b.kg;
    return c;
}
int main ()
{
    weight w1(200,239);
    weight w2(39,494);

    weight w3;
    w1.display();
    w2.display();
    w3=w1-w2;
    w3.display();
    getch();
    return 0;

}