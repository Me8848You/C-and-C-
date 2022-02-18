#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

class University
{
    protected:
    char uname[20];
    char loc[20];

    public:
    University(char *a,char *b)
    {
        strcpy(uname,a);
        strcpy(loc,b);
    }
    void displaya()
    {
        cout<<" University name is "<<uname<<endl;
        cout<<"address is "<<loc<<endl;

    }


};
class acollege : virtual public University
{
    protected:
    char aname[20];
    char address[20];
    int nop;
    
    public:
    acollege(char *a,char *b,char *c, char *d, int e):University(a,b)
    {
       strcpy(aname,c);
       strcpy(address,d);
       nop=e;       
    }
    void displayb()
    {
        cout<<"affilitaed college  is "<<aname<<endl;
        cout<<"affilited college address is "<<address<<endl;
        cout<<"no  of programs is "<<nop<<endl;
    }

};
class ccollege : virtual public University
{
    protected:
    char school[20];
    char dean[20];
    char program[20];
    
    public:
    ccollege(char *a,char *b,char *f, char *g,char *h):University(a,b)
    {
       strcpy(school,f);
       strcpy(dean,g);
       strcpy(program,h);
    }
    void displayc()
    {
        cout<<"school  is "<<school<<endl;
        cout<<"dean  is "<<dean<<endl;
        cout<<"name  of programs is "<<program<<endl;
    }

};

class student :  public acollege, public ccollege
{
    private:
    char sname[20];
    char prog[20];
    int year;


    public:
    student(char *a, char *b, char *c, char *d,int e,char *f, char *g, char * h,char *i, char *j, int k):University (a,b) ,acollege(a,b,c,d,e),ccollege(a,b,f,g,h)

    {
        strcpy(sname,i);
        strcpy(prog,j);
        year=k;
    }
    void displayd()
    {
        cout<<"student  name is "<<sname<<endl;
        cout<<"program   is "<<prog<<endl;
        cout<<"enrolled year is"<<year<<endl;
    }

};

int main()
{
    student b("Pokhara ","kaski","NCIT","balkumari",12,"kalika", "binay","software","suman","it",2016);
    b.displayb();
    b.displaya();
    b.displayc();
    b.displayd();
    getch();
    return 0;
     

}
