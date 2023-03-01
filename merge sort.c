#include<stdio.h>
void main()
{
int a[50],n1,i,b[50],n2,s,j,temp1,temp2,temp,k;
printf("Enter the size of first array:");
scanf("%d",&n1);
printf("Enter the elements of first array:\n");
for(i=0;i<n1;i++)
{
    scanf("%d",&a[i]);
}

printf("\nThe array of first array:\n\t");
for(i=0;i<n1;i++)
{
    printf("%d\t",a[i]);
}
temp1=0;
for(i=0;i<n1;i++)
{
    for(j=i+1;j<n1;j++)
    {
        if(a[i]>a[j])
        {
            temp1=a[i];
            a[i]=a[j];
            a[j]=temp1;
        }
    }
}
printf("\nThe sorted array of first array:\n\t");
for(i=0;i<n1;i++)
{
    printf("%d\t",a[i]);
}
printf("\nEnter the size of second array:");
scanf("%d",&n2);
printf("Enter the elements of second array:\n");
for(j=0;j<n2;j++)
{
    scanf("%d",&b[j]);
}
printf("\nThe array of second array:\n\t");
for(j=0;j<n2;j++)
{
    printf("%d\t",b[j]);
}

temp2=0;
for(i=0;i<n2;i++)
{
    for(j=i+1;j<n2;j++)
    {
        if(b[i]>b[j])
        {
            temp2=b[i];
            b[i]=b[j];
            b[j]=temp2;
        }
    }
}
printf("\nThe sorted array of Second array:\n\t");
for(j=0;j<n2;j++)
{
    printf("%d\t",b[j]);
}

s=n2+n1;
k=n1;
for(i=0;i<s;i++)
{
a[k]=b[i];
k++;
}
printf("\nThe sorted merge array :\n\t");
for(j=0;j<s;j++)
{
    for(i=j+1;i<s;i++)
    {
        if(a[i]<a[j])
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    }
}
for(i=0;i<s;i++)
printf("%d\t",a[i]);
getch();
}
