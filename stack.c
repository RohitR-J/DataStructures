#include<stdio.h>
//#include<process.h>
#include<stdlib.h>
#define MAX 5

int top=-1,stack[MAX];
void push();
void pop();
void display();

void main()
{
int ch;
while(1)
{
printf("Enter your choice\n");
printf("1.Push\n2.Pop\n3.Display\n4.Exit\n");
scanf("%d",&ch);

switch(ch)
{
case 1:push();
	break;
case 2:pop();
	break;
case 3:display();
	break;
case 4:exit(0);
default:printf("\nWrong Choice");
}
}
}
//Code to push
void push()
{
int val,i;
if(top==MAX-1)
{
printf("\nStack is full\n");
}
else
{
printf("\nEnter element to push:");
for(i=0;i<=MAX-1;i++)
{
top = top+1;
scanf("%d",&val);
stack[top]=val;
}
}
}

//code to pop
void pop()
{
if(top==-1)
{
printf("\nStack is Empty");
}
else
{
printf("\nDeleted element is %d",stack[top]);
top=top-1;
}
}

//code display
void display()
{
int i;
if(top==-1)
{
printf("\nStack is Empty");
}
else
{
printf("\nStack:\n");
for(i=top;i>=0;i--)
{
printf("%d\n",stack[i]);
}
}
}
