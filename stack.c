#include<stdio.h>
int stack[100],choice,n,top,m,i;
void push();
void pop();
void display();
int main()
{
    top=-1;
    printf("Enter the size of Stack array:");
    scanf("%d",&n);
    printf("\n\t 1.PUSH\n\t 2.POP\n\t 3.DISPLAY\n\t 4.EXIT");
    do
    {
        printf("\nEnter the choice to perform:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                push();
                break;
            }
            case 2:
            {
                pop();
                break;
            }
            case 3:
            {
                display();
                break;
            }
            case 4:
            {
                printf("\n End");
                break;
            }
            default:
            {
                printf ("\n Please enter a valid choice(1/2/3/4)");
            }

        }
    }
    while(choice!=4);
    return 0;
}
void push()
{
    if(top>=n-1)
    {
        printf("\n Stack is over flow.");

    }
    else
    {
        printf("Enter a value to be pushed:");
        scanf("%d",&m);
        top++;
        stack[top]=m;
    }
}
void pop()
{
    if(top<=-1)
    {
        printf("\n Stack is under flow");
    }
    else
    {
        printf("\n The popped elements is %d",stack[top]);
        top--;
    }
}
void display()
{
    if(top>=0)
    {
        printf("\n The elements in Stack: \n");
        for(i=top;i>=0;i--)
            printf("\n%d",stack[i]);
        printf("\n Press the next choice.");
    }
    else
    {
        printf("\n The Stack is empty.");
    }

}
