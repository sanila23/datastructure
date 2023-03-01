#include<stdio.h>
#include<conio.h>
#include<alloc.h>
typedef struct node
{
int data;
struct node *link;
}NODE;
NODE *start=NULL,*top=NULL,*s,*ptr,*disply;
void main()
{
int no,item;
char c;
clrscr();
printf("\n\tPROGRAM TO INSERT, DELETE AND DISPLAY ELEMENTS TO STACK USING LINKED LIST");
printf("\n\t.......................................................\n");
do
{
printf("\t\t\t\tMENU\n");
printf("\t\t1.INSERT\n\t\t2.DELETE\n\t\t3.DISPLAY\n\t\t4.EXIT\n\t\tEnter your choice: ");
scanf("%d",&no);
if(no==1)
{
ptr=(NODE*)malloc(sizeof(NODE));
printf("\n\t\tEnter the element: ");
scanf("%d",&item);
ptr->data=item;
ptr->link=NULL;
if(start==NULL)
{
start=ptr;
top=ptr;
}
else
{
ptr->link=top;
top=ptr;
}
}
if(no==2)
{
if(top==NULL)
printf("\n\t\tStack is empty");
else
{
s=top;
printf("\n\t\tDeleted Element is %d",top->data);
top=top->link;
free(s);
if(top==NULL)
start=NULL;
}
}
if(no==3)
{
if(top==NULL)
printf("\n\t\tStack is empty");
else
{
printf("\n\t\tStack elements are:");
disply=top;
while(disply!=NULL)
{
item=disply->data;
printf("\t %d\n",item);
disply=disply->link;
}
}
}
if(no==4)
break;
printf("\n\t\tDo you want to continue(y/n) ");
scanf(" %c",&c);
}
while(c=='y'||c=='Y');
getch();
}
