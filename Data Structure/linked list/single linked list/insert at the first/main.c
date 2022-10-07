#include <stdio.h>
#include <stdlib.h>

// insert node at the beginning



struct node {
int data;
struct node *next;
};

//insert node at the beginning
struct node * add_at_the_beginning(struct node*head,int value)
{
    struct node *temp;
    temp=(struct node*)malloc(sizeof (struct node ));

    temp->data=value;
      temp->next =NULL;
    temp->next =head;
head =temp;
    return head;
}

int main()
{
struct node *head =NULL;
struct node *second =NULL;
struct node *third =NULL ;

head=(struct node *)malloc (sizeof(struct node));
second =(struct node *)malloc (sizeof(struct node));
third =(struct node *)malloc (sizeof(struct node));

// building the original linked list
head->data =15;
head ->next =second;
second ->data=25;
second->next =third;
third ->data=35;
third->next= NULL;

//calling a new head
head =add_at_the_beginning(head,5);

//traverse the new linked list
struct node *ptr;
ptr =head;
while(ptr !=NULL)
{
    printf("%d \t ", ptr->data);
    ptr=ptr->next;
}

}
