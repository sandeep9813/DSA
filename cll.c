#include<stdio.h>
#include<stdlib.h>
struct cll{
    int data;
    struct cll *next;
};
struct cll *head=NULL;
struct cll *tail=NULL;

void addbeg()
{
    struct cll *newnode;
    int num;
    printf("enter the number: ");
    scanf("%d",&num);
    newnode=(struct cll*)malloc(sizeof(struct cll));
    newnode->data=num;
   
    newnode->next=NULL;
    if(head==NULL)
    {
        newnode->next=newnode;
        head=tail=newnode;
    }
    else{
        newnode->next=head;
        head=newnode;
        tail->next=head;
    }
}

void addend()
{
    int num;
    struct cll *newnode;
    printf("enter the number: ");
    scanf("%d",&num);
    newnode=(struct cll*)malloc(sizeof(struct cll));
    newnode->data=num;
 
    newnode->next=NULL;
    if(head==NULL)
    {    
        newnode->next=newnode;
        head=tail=newnode;
    }
    else{
        tail->next=newnode;
        tail=newnode;
        tail->next=head;
    }
}
void delbeg()
{
    struct cll *temp;
    if(head==NULL)
    {printf("linked list doesnt exist");
    }
     
    else{
        temp=head;
        head=head->next;
       
        printf("deleted item is %d",temp->data);
        free(temp);
    }
}
 
void delend() {
    struct cll *temp = head;
    if (head == NULL) {
        printf("The linked list doesn't exist\n");
    } else if (head == tail) {
        printf("Deleted item is %d\n", head->data);
        free(head);
        head = tail = NULL;
    } else {
        while (temp->next != tail) {
            temp = temp->next;
        }
        printf("Deleted item is %d\n", tail->data);
        free(tail);
        tail = temp;
        tail->next = head;
    }
}
void display()
{
    struct cll *temp;
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