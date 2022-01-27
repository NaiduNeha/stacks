#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int a[MAX],top=-1;
int push(int x)
{
    if(top==MAX-1)
    {
        printf(" stack over flow");
    }
    else
    {
        a[++top]=x;
    }
}
int pop()
{
    if(top==-1)
    {
        return -1;
    }
    else
    {
        return a[top--];
    }
}
int peak()
{
    return a[top];
}
void display()
{
int i;
for(i=top;i>=0;i--)
{
printf("%d ",a[i]);
}
}
int main()
{
int choice,x,ele;
while(1)
{
printf("\n1.push\n2.pop\n3.peek\n4.display\n5.exit\n");
printf("Enter your choice: ");
scanf("%d",&choice);
switch(choice)
{
case 1:printf("Enter the element to be inserted:");
       scanf("%d",&x);
       push(x);
       break;
case 2:printf("poping element\n");
       ele=pop();
       printf("the element %d is popped from the stack\n",ele);
       break;
case 3:ele=peak();
       printf("Top most element of the stack is %d\n",ele);
       break;
case 4:printf("Displaying stack\n");
       display();
       break;
case 5:exit(0);
}
}
}
