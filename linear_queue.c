#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define max 5;
int Q[5];
int front=-1;
int rear=-1;

void Enqueue()
{
    if(rear==5-1)
    {
        printf("Queue is full");
    }
    else
    {
        int data;
        printf("enter data element \n");
        scanf("%d",&data);
        if(front==-1 && rear==-1)
        {
            printf("first time insertion \n");
            front=0;
        }
        rear=rear+1;
        Q[rear]=data;

    }
}
void Dequeue()
{
    if(rear==-1 && front==-1)
    {
        printf("queue is empty \n");

    }
    else{
       int data;
       data=Q[front];
       printf(" the delected item is %d",data);
       front=front+1;
       if(front>rear)
       {
           front=-1;
           rear=-1;
       }
    }
}
void Traverse()
{
    if(front>rear || (front==-1 && rear==-1))
    {
        printf("empty\n");
    }
    else{
        for(int i=front ; i<=rear; i++)
         {
             printf("%d\n",Q[i]);
         }
    }
}

void main()
{
    int choice;
    while(1)
    	{
    		printf("***MENU***\n");
    		printf("1.Enqueue 2.Dequeue 3.Traverse 4. exit\n");
    		printf("do it by yourself \n");
    		scanf("%d",&choice);
      	switch (choice)
       	{
          case 1: Enqueue();
                  break;
          case 2: Dequeue();
                  break;
          case 3: Traverse();
                  break;
          case 4: exit(0);

          default:printf(" worng choice");

       }
    }
getch();
}