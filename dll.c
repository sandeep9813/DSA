#include<stdio.h>
#include<stdlib.h>
struct dll{
    int data;
    struct dll *prev;
    struct dll *next;
};
struct dll *head;
struct dll *tail;
void addbeg()
{
    struct dll *newnode;
    int num;
    printf("enter the number: ");
    scanf("%d",&num);
    newnode=(struct dll*)malloc(sizeof(struct dll));
    newnode->data=num;
    newnode->prev=NULL;
    newnode->next=NULL;
    if(head==NULL)
    {
        head=newnode;
        tail=newnode;
    }
    else{
        newnode->next=head;
        head->prev=newnode;
        head=newnode;
    }
}
void addend()
{
    int num;
    struct dll *newnode;
    printf("enter the number: ");
    scanf("%d",&num);
    newnode=(struct dll*)malloc(sizeof(struct dll));
    newnode->data=num;
    newnode->prev=NULL;
    newnode->next=NULL;
    if(head==NULL)
    {
        head=tail=newnode;
    }
    else{
        tail->next=newnode;
        newnode->prev=tail;
        tail=newnode;
    }
}
void delbeg()
{
    struct dll *temp;
    if(head==NULL)
    {printf("linked list doesnt exist");
    }
    else if(head->next==NULL)
    {
        temp=head;
        printf("the deleted item is %d",temp->data);
        head=tail=NULL;
        free(temp);
    }
    else{
        temp=head;
        head=head->next;
        head->prev=NULL;
        printf("deleted item is %d",temp->data);
        free(temp);
    }
}
void delend()
{
    struct dll *temp;
    if(head==NULL)
    {
        printf("the linked list doesnt exist");
    }
    else if(head->next==NULL)
    {
        temp=head;
        printf("deleted item is %d",temp->data);
        head=tail=NULL;
        free(temp);
            }

else
{
    temp=tail;
    tail=tail->prev;
    tail->next=NULL;
    printf("the deleted item is %d ",temp->data);
    free(temp);
}
}
void display()
{
    struct dll *temp;
    temp=head;
    if(head==NULL)
    {
        printf("linked list doesnt exist");

    }
    else
    {
        while(temp!=tail)

        {
            printf("%d \t",temp->data);
            temp=temp->next;
        }
        printf("%d ",tail->data);
    }
}

int main() {
    int choice;
     printf("\nMenu:\n1. Add at beginning\n2. Add at end\n3. Delete from beginning\n4. Delete from end\n5. Display\n6. Exit\n");
    while (1) {
       
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: addbeg(); 
            break;
            case 2: addend();
             break;
            case 3: delbeg(); 
            break;
            case 4: delend(); 
            break;
            case 5: display(); 
            break;
            case 6:  exit(0);
            break;
           
        }
    }
    return 0;
}