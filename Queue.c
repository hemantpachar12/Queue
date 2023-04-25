//Hemant kumar, PRN-21070123032

#include<stdio.h>
#include<stdlib.h>

void enqueue();
void dequeue();
int queue[5];
int  front = -1;
int rear = -1;
int data;

int main ()
{ 
  int choice;
  int i;
  printf("choose an operation: \n 1.Enqueue \n 2.Dequeue \n");
  scanf("%d",&choice); 
   
   while (i<=15)
  {
  	 switch (choice)
   {
   	case 1: enqueue ();
   	break;
   	case 2: dequeue ();
   	break;

   }
  }
return 0;
}
 
void enqueue()
{
 int data; 
 if(rear==4)
 {
 	printf("Overflow \n");
  } 
 else
 { 
   printf("Enter data \n");
   scanf("%d",&data);
   rear = rear+1;
    queue[rear]=data ;
    if (front==-1);
    {
    	front = 0;
	}
 }     
}
 
 void dequeue()
 {

 	if((front==-1)||(front>rear))
 	{
 		printf("Underflow \n");
	 }
	 else if(front==rear)
	 {
	 	front= -1;
	 	rear==-1;
	}
	else 
	{
		front = front+1;
	}
 }
 