/*implement queue using array*/
#include<stdio.h>
#define max 10
int queue[max];
int front=-1,rear=-1;
void insert();
int deleteelement();
int peek();
void display();
void main()
{
	int option,val;
	do
	{
		printf("\n***Main Menu****");
		printf("\n1.Insert an element");
		printf("\n2.Delete an element");
		printf("\n3.Peek");
		printf("\n4.Display the queue");
		printf("\n5.Exit");

		printf("\n Enter your option:");
		scanf("%d",&option);
		switch(option)
		{
			case 1:
				insert();
				break;
			case 2:
				val=deleteelement();
				if(val!=-1)
				printf("\nThe number deleted is:%d",val);
				break;
			case 3:
				val=peek();
				if(val!=-1)
				printf("\nThe first value in queue is:%d",val);
				break;
			case 4:
				display();
				break;
		}
	}while(option!=5);
	getch();
}
void insert()
{
	int num;
	printf("\n Enter the number to be inserted in queue:");
	scanf("%d",&num);
	if(rear==max-1)
	printf("\nOverflow");
	else if(front==-1&&rear==-1)
	front=rear=0;
	else
	rear++;
	queue[rear]=num;
}
int deleteelement()
{
	int val;
	if(front==-1||front>rear)
	{
		printf("\nUnderflow");
		return -1;
	}
	else
	{
		val=queue[front];
		front++;
		if(front>rear)
		front=rear=-1;
		return val;
	}
}
int peek()
{
	if(front==-1||front>rear)
	{
		printf("\n Queue is empty");
		return -1;
	}
	else
	{
		return queue[front];
	}
}
void display()
{
	int i;
	printf("\n");
	if(front==-1||front>rear)
	printf("\nQueue is empty");
	else
	{
		for(i=front;i<=rear;i++)
		printf("\t%d",queue[i]);
	}
}
