#include<stdio.h>
#include<stdlib.h>
#define size 5
int stack[size];
int  top=-1;
void push()
{
    int num;
    printf("enter the number to push: ");
    scanf("%d",&num);
    if(top==size-1)
    {
        printf("stack overflow");
    }
    else{
        top=top+1;
        stack[top]=num;
    }
}
void pop()
{
    int dt;
    if(top==-1)
    {
        printf("stack underflow");

    }
    else{
        dt=stack[top];
        top=top-1;
        printf("popped item=%d",dt);
    }
}
void display()
{
    int i;
    if(top==-1)
    {
        printf("stack is empty");

    }
    else{
        printf("content of stack is \n");
        for(i=0;i<=top;i++)
        {
            printf("|%d|\n",stack[i]);
        }
    }
}
int main()
{

    int choice;
    printf("1.push\n2.pop\n3.display\n4.exit");
    while(1){
        printf("\nenter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            push();
            break;
            case 2:
            pop();
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