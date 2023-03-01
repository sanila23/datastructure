#include<stdio.h>
# define max 3
int st[max],top=-1;
void push(int st[],int val);
int pop(int st[]);
int peek(int st[]);
void display(int st[]);
void main()
{
	int val,option;
	do
	{
		printf("\n***Main Menu*");
		printf("\n1.Push");
		printf("\n2.Pop");
		printf("\n3.Peek");
		printf("\n4.Display");
		printf("\n5.Exit");
		printf("\n Enter your option:");
		scanf("%d",&option);
		switch(option)
		{
			case 1:
				printf("\n Enter the number to be pushed on stack:");
				scanf("%d",&val);
				push(st,val);
				break;
			case 2:
				val=pop(st);
				if(val!=-1)
				printf("\n The value deleted from stack is:%d",val);
				break;
			case 3:
				val=peek(st);
				if(val!=-1)
				printf("\n The value stored at top of stack is:%d",val);
				break;
			case 4:
				display(st);
				break;
		}
	}while(option!=5);
	getch();
}
void push(int st[],int val)
{
	if(top==max-1)
	{
		printf("\nSTACK OVERFLOW");
	}
	else
	{
		top++;
		st[top]=val;
	}
}
int pop(int st[])
{
	int val;
	if(top==-1)
	{
		printf("\n STACK UNDERFLOW");
		return -1;
	}
	else
	{
		val=st[top];
		top--;
		return val;
	}
}
void display(int st[])
{
	int i;
	if(top==-1)
	printf("\n STACK IS EMPTY");
	else
	{
		for(i=top;i>=0;i--)
		printf("\n%d",st[i]);
		printf("\n");
	}
}
int peek(int st[])
{
	if(top==-1)
	{
		printf("\n STACK IS EMPTY");
		return -1;
	}
	else
	return st[top];
}
