#include<iostream>
#include<conio.h>

using namespace std;

class base
{
   public:
   base()
   {
      cout<<"constructing base"<<endl;
   }

   virtual ~base()
   {
      cout<<"destroying base"<<endl;
   }
};
class derived: public base
{
   public:
   derived()
   {
      cout<<"constructing  derived class"<<endl;
   }
   ~derived ()
   {
      cout<<"destroying derived class"<<endl;
   }
};

int main()
{
   base *b=new derived();
   delete b;
   getch();
   return 0;
