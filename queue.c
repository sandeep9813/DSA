#include<stdio.h>
#include<stdlib.h>
#define size 5
int queue[size];
int  front=0;
int rear=-1;
void enqueue()
{
    int num;
    printf("enter the number to enqueue: ");
    scanf("%d",&num);
    if(rear==size-1)
    {
        printf("queue overflow");
    }
    else{
        rear=rear+1;
        queue[rear]=num;
    }
}
void dequeue()
{
    int dt;
    if(front>rear)
    {
        printf("queue underflow");

    }
    else{
        dt=queue[front];
        
        printf("dequeued item=%d",dt);
        front=front+1;
    }
}
void display()
{
    int i;
    if(front>rear)
    {
        printf("queue is empty");

    }
    else{
        printf("content of queue is \n");
        for(i=front;i<=rear;i++)
        {
            printf("|%d|\n",queue[i]);
        }
    }
}
int main()
{

    int choice;
    printf("1.enqueue\n2.dequeue\n3.display\n4.exit");
    while(1){
        printf("\nenter your choice: ");
        scanf("%d",&choice);
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
            return 0;
}