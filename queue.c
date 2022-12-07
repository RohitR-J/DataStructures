#include<stdio.h>
#include<stdlib.h>
#define size 10

void enqueue();
void dequeue();
void display();

int queue[size], front=-1, rear=-1;

void main()
{
  int value, choice;
    while(1)
       {
         printf("Choose option to continue\n1.Insertion\n2.Deletion\n3.Display\n4.Exit\n");
         scanf("%d", &choice);
           switch(choice)
              {
                case 1: 
			enqueue();
                 break;
                case 2:
 			dequeue();
                 break;
		case 3: 
			display();
                 break;
		case 4:
 			exit(0);
  
		}
	      }
	    }		
      void enqueue()
          { 
           int value;
           if (rear==size-1)
           printf("\nOverflow\n");
           else
           {
            if (front==-1)
            front=0;
            printf("Enter the value to be inserted");
            scanf("%d",&value);
            rear=rear+1;
            queue[rear]=value;
           }
          }

     void dequeue()
         {
          if(front==-1||front>rear)
          {
            printf("\nUnderflow\n");
          }
          else
            {
             printf("Element deleted is %d\n",queue[front]);
             front++;
            }
         }
    void display()
         {
          if(front==-1)
              printf("Empty Queue\n");
          else
             {
               printf("Queue is:");
               for(int i=front;i<=rear;i++)
               printf("%d\n",queue[i]);
 }}




















