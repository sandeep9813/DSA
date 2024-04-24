#include<stdio.h>
#include<stdlib.h>
struct stack{
    int data;
    struct stack *next;
};
struct stack *top=NULL;
void push()
{
    struct stack *newnode;
    int num;
    newnode=(struct stack*)malloc(sizeof(struct stack));
    printf("enter the number: ");
    scanf("%d",&num);
    newnode->data=num;
    newnode->next=NULL;
    if(top==NULL)
    {
        top=newnode;

    }
    else{
        newnode->next=top;
        top=newnode;
    }
}
void pop()
{
    struct stack *temp;
    if(top==NULL)
    {
        printf("linked list doesnt exist");
    }
    else{
        temp=top;
        top=top->next;
        printf("deleted item is %d",temp->data);
        free(temp);

    }
}
void display()
{
    struct stack *temp;
    if(top==NULL)
   {
    printf("linked list doesnt exist");
   }
   else{
    temp=top;
    while(temp!=NULL)
    {
        printf("%d \t ",temp->data);
        temp=temp->next;
    }
   }

}

int main() {
    int choice;
       printf("\nMenu:\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Exit\n");
    while(1){
     
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
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
                break;
          
        }
    }  
    return 0;
}