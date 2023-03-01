#include<stdio.h>
#include<conio.h>
#include<alloc.h>
typedef struct node
{
int data;
struct node *link;
}NODE;
NODE *front=NULL,*rear=NULL,*s,*ptr,*disply;
void main()
{
int no,item;
char c;
clrscr();
printf("\n\tPROGRAM TO INSERT,DELETE AND DISPLAY ELEMENTS TO QUEUE USING LINKEDLIST");
printf("\t\t..............................................................\n\n");
do
{
printf("\t\t\t\tMENU");
printf("\n\t\t1.INSERT\n\t\t2.DELETE\n\t\t3.DISPLAY\n\t\t4.EXIT\n\t\tEnter your choice: ");
scanf("%d",&no);
if(no==1)
{
ptr=(NODE*)malloc(sizeof(NODE));
printf("\t\tEnter the element: ");
scanf("%d",&ptr->data);
ptr->link=NULL;
if(rear==NULL)
{
front=ptr;
rear=ptr;
}
else
{
rear->link=ptr;
rear=ptr;
}
}
if(no==2)
{
if(front==NULL)
printf("\t\tStack is empty\n");
else
{
s=front;
printf("\t\tDeleted Element is %d\n",front->data);
front=front->link;
free(s);
if(front==NULL)
rear=NULL;
}
}
if(no==3)
{
if(front==NULL)
printf("\t\tQueue is empty\n");
else
{
printf("\t\tQueue elements are");
disply=front;
while(disply!=NULL)
{
printf(" %d",disply->data);
disply=disply->link;
}
printf("\n");
}
}
if(no==4)
break;
printf("\t\tDo you want to continue(y/n) ");
scanf(" %c",&c);
}
while(c=='y'||c=='Y');
getch();
}
