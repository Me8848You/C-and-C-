#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define max 5
int a[max];
int top=-1;

void push()
{
	if(top==max-1)
   {
   	printf("stack is full \n");

    }

   else

   {
   	int data;
   	printf("plz enter the data \n");
   	scanf("%d",&data);
      top++;
   	a[top]=data;
   }
}
void pop()
{
    if(top==-1)
    {
        printf("stack is empty");
    }
    else
    {
        top--;
        printf("the delected item is-> %d",a[top]);
    }
}
void display()
{
    if(top==-1)
    {
        printf("stack is empty");
    }
    else
    {
        for(int i=top;i>=0;i--)
        {
            printf("%d\n",a[i]);
        }
    }
}

void main()
{
    int choice;
    while(1)
    	{
    		printf("***MENU***\n");
    		printf("1.push 2.pop 3.display 4. exit\n");
    		printf("do it by yourself \n");
    		scanf("%d",&choice);
      	switch (choice)
       	{
          case 1: push();
                  break;
          case 2: pop();
                  break;
          case 3: display();
                  break;
          case 4: exit(0);

          default:printf(" worng choice");

       }
    }
getch();
}