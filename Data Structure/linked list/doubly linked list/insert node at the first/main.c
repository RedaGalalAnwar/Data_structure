#include <stdio.h>
#include <stdlib.h>


struct node{
int data;
struct node * next;
struct node *prev;
};
//function to insert a node at the beginning
struct node* add_at_the_front(struct node *head , int data  )
{
struct node *temp;
temp=(struct node *)malloc(sizeof(struct node ));
temp->next=head ;
temp->data=data;
temp->prev=NULL;
head->prev=temp;
head=temp;
return head;
};

//function to insert node at the end
struct node* add_at_the_end(struct node *head , int data  )
{
struct node *temp;
temp=(struct node *)malloc(sizeof(struct node ));

struct node* ptr;
ptr=head;
while(ptr->next !=NULL)
{
    ptr=ptr->next;
}
temp->next=NULL ;
temp->data=data;
temp->prev=ptr;
ptr->next =temp;


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
head->prev=NULL;

second->data =15;
second->next =third;
second->prev=head;

third->data =25;
third->next=NULL;
third->prev=second;

//calling the function of insert node at the beginning
head=add_at_the_front(head,3);
head=add_at_the_front(head, 2);

//calling the function of insert node at the end
add_at_the_end(head,50);
add_at_the_end(head,75);


//printing the elements
struct node * ptr;
ptr=head;

while(ptr!=NULL)
{
printf("%d \t",ptr->data);\
ptr=ptr->next;
}

}

