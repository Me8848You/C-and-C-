// WAP TO OVERLOAD INCREMENT AND DECREMENT OPERATOR:::
#include<iostream>
#include<conio.h>

 using namespace std;
 
 class sample
 {
     private:
     int x;

     public:
     sample()
     {
         x=0;
     }
     sample(int a){
         x=a;
     }
     void display()
     {
         cout<<" the number is ="<<x<<endl;
     }
     void operator --()
     {
        x--;
     }
     void operator ++()
     {
         x++;
     }
 };
 int  main()
 {
     sample s(90);
     s.display();
     --s;
     s.display();
     ++s;
     s.display();

     getch();
     return 0;


 }