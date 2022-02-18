#include<conio.h>
#include<stdlib.h>
#include<stdio.h>

using namespace std;

// class<template T>

// class stack
// {
//     private:
//     int top,i;
//     T a[n];

//     public:
//     stack()
//     {
//         top=-1;
//     }

//     void push(T data)
//     {
//         if(top==n-1)
//         {
//             cout<<"stack is full"<<endl;
//         }
//         else
//         {
//             cout<<a[top]=data;
//             top++;
//         }
//     }
//     void pop()
//     {
//       if(top==-1)
//        {
//            cout<<"stack is empty"<<endl;

//         }
//         else
//         {
//             top--;
//         }
//     }
//     void display()
//     {
//         cout<<" stack is "<<endl;
//         for(i=top;i>=0;i--)
//         {
//             cout<<a[top]<<endl;
//         }
//     }
     
    
// };

// int main()
// {
//     stack<int>s[n];
//     cin>>n;
//     s.push(5);
//     s.push(10);
//     s.push(15);
//     s.push(20);
//     s.push(25);
//     s.display();
//     s.pop();
//     s.pop();
//     s.pop();
//     s.display();
//     return 0;
// }
#define max 5;
int a[max];
int top=-1;
void push()
{
  if(top=max-1)  
  {
      cout<<"Stack is full"<<endl;
  }
  else
  {
      int data;
      cout<<"enter the data element"<<endl;
      cin>>data;
      top++;
      a[top]=data;
      cout<<"the pushed data element is "<<a[top]<<endl;
  }
}
void pop()
{
    if (top==-1)
    {
        cout<<"the stack is empty"<<endl;
    }
    else
    {
        top--;
        cout<<"the delected item is "<<a[top]<<endl;
    }
    
}
void display()
{
    if (top==-1)

    {
     cout<<"the stack is empty"<<endl;
    }
    for(int i=max-1; i>=0;i--)
    {
        cout<<a[i]<<endl;
    }
    
}

int main()
{
    int choice;
    cout<<"***MEnU***"<<endl;
    cout<<"1.push 2.pop 3.display 4.exit"<<endl;
    cout<<"enter your choice"<<endl;
    cin>>choice;

    switch (choice)
    {
     case 1: push();
            break;

     case 2: pop();
            break;
     case 3: display();
            break;
     case 4: exit(0);

     default: cout<<"wrong choice"<<endl;
    }
    return 0;
}