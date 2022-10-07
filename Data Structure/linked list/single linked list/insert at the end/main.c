//Reda galal
#include <stdio.h>
#include <stdlib.h>

//insert a node at the end of linked list

struct node{
int data;
struct node * next;
};

int main()
{

struct node * head =NULL;
struct node * second =NULL;
struct node * third = NULL;

head = (struct node *)malloc (sizeof (struct node ));
second = (struct node * )malloc (sizeof(struct node ));
third = (struct node * )malloc (sizeof(struct node ));

head->data =5;
head->next =second ;
second->data =15;
second->next =third;
third->data =25;
third->next=NULL;

// calling the function
add_at_the_end(head , 35);
add_at_the_end(head , 45);

// traversing the linked list
struct node * ptr;
ptr=head;

while(ptr!=NULL)
{
printf("%d \t",ptr->data);
ptr=ptr->next;
}

}
// function to add the node at the end of linked list
void add_at_the_end(struct node * head ,int data )
{
    struct node *temp , *ptr;

    temp=(struct node*)malloc(sizeof(struct node ));
    ptr=head;

    while(ptr->next != NULL)
    {
        ptr=ptr->next;
    }
    ptr->next =temp ;
    temp->data =data;
    temp->next = NULL;
}
