// with non return type:
#include<iostream>
#include<conio.h>

using namespace std;

// void volume(int l)
// {
//     cout<<"the volume of cube is ="<<l*l*l<<endl;
// }
// void volume(float r, float h)
// {
//     cout<<"the volume of cylinder is ="<<3.14*r*r*h<<endl;
// }
// void volume(int l, int b, int h)
// {
//     cout<<"the volume of rectangle is "<<l*b*h<<endl;
// }

// int  main()
// {
//     int L;
//     cout<<"enter the length of the cube"<<endl;
//     cin>>L;
//     volume(L);

//     float R, H;
//     cout<<"enter radius and height of the cylinder "<<endl;
//     cin>>R>>H;
//     volume(R,H);

//     int x,y,z;
//     cout<<"enter the length , breath and height "<<endl;
//     cin>>x>>y>>z;
//     volume(x,y,z);
    
//     getch();
//     return 0;

// }
// WAP TO OVERLOAD INCREMENT AND DECREMENT OPERATOR:::
 
//  class sample
//  {
//      private:
//      int x;

//      public:
//      sample()
//      {
//          x=0;
//      }
//      sample(int a){
//          x=a;
//      }
//      void display()
//      {
//          cout<<" the number is ="<<x<<endl;
//      }
//      void operator --()
//      {
//         x--;
//      }
//      void operator ++()
//      {
//          x++;
//      }
//  };
//  int  main()
//  {
//      sample s(90);
//      s.display();
//      --s;
//      s.display();
//      ++s;
//      s.display();

//      getch();
//      return 0;


//  }
//  #include<iostream.h>
// #include<conio.h>
// #include<cstring>



// class University
// {
//     protected:
//     char uname[20];
//     char loc[20];

//     public:
//     University(char *a,char *b)
//     {
//         strcpy(uname,a);
//         strcpy(loc,b);
//     }
//     void displaya()
//     {
//         cout<<" University name is "<<uname<<endl;
//         cout<<"address is "<<loc<<endl;

//     }


// };
// class acollege : virtual public University
// {
//     protected:
//     char aname[20];
//     char address[20];
//     int nop;
    
//     public:
//     acollege(char *a,char *b,char *c, char *d, int e):University(a,b)
//     {
//        strcpy(aname,c);
//        strcpy(address,d);
//        nop=e;

       
//     }
//     void displayb()
//     {
//         cout<<"affilitaed college  is "<<aname<<endl;
//         cout<<"affilited college address is "<<address<<endl;
//         cout<<"no  of programs is "<<nop<<endl;
//     }

// };
// class ccollege : virtual public University
// {
//     protected:
//     char school[20];
//     char dean[20];
//     char program[20];
    
//     public:
//     ccollege(char *a,char *b,char *f, char *g,char *h):University(a,b)
//     {
//        strcpy(school,f);
//        strcpy(dean,g);
//        strcpy(program,h);
             
//     }
//     void displayc()
//     {
//         cout<<"school  is "<<school<<endl;
//         cout<<"dean  is "<<dean<<endl;
//         cout<<"name  of programs is "<<program<<endl;
//     }

// };

// class student :  public acollege, public ccollege
// {
//     private:
//     char sname[20];
//     char prog[20];
//     int year;


//     public:
//     student(char *a, char *b, char *c, char *d,int e,char *f, char *g, char * h,char *i, char *j, int k):University (a,b) ,acollege(c,d,e),ccollege(f,g,h)

//     {
//         strcpy(sname,i);
//         strcpy(prog,j);
//         year=k;
//     }
//     void displayd()
//     {
//         cout<<"student  name is "<<sname<<endl;
//         cout<<"program   is "<<prog<<endl;
//         cout<<"enrolled year is"<<year<<endl;
//     }

// };

// int main()
// {
//     student b("Pokhara ","kaski","NCIT","balkumari",12,"kalika", "binay","software","suman","it",2016);
//     b.displayb();
//     b.displaya();
//     b.displayc();
//     b.displayd();
//     getch();
//     return 0;
     

// }
template <class T>
T add( T a, T b)
{
    T c;
    c=a-b;
    return c;
}
int main()
{
    int x,y,z;
    cout<<"enter two numbers "<<endl;
    cin>>x>>y;
    z=add(x,y);
    cout<<"the sum is "<<z<<endl;
    getch();
    return 0;
}