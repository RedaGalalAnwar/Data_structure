 //traverse linked list
#include <stdio.h>
#include <stdlib.h>

 //structure of the node
struct node{
int data;
struct node * next;
};

int main()
{
struct node * head =NULL;
struct node * second =NULL;
struct node * third = NULL;

// memory allocation
head = (struct node *)malloc (sizeof (struct node ));
second = (struct node * )malloc (sizeof(struct node ));
third = (struct node * )malloc (sizeof(struct node ));

head->data =5;
head->next =second ;
second->data =15;
second->next =third;
third->data =25;
third->next=NULL;


//print all elements
struct node * ptr;
ptr=head;

while(ptr!=NULL)
{
printf("%d \t",ptr->data);\
ptr=ptr->next;
}

}
