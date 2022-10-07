#include <stdio.h>
#include <stdlib.h>
//delete first node

struct node{
int data;
struct node * next;
};

// you should make the function of the struct before the function of main
struct node *delete_first_node(struct node* head)
{
    if(head == NULL)
    {
        printf("the list is already empty !");
    }
   else
   {
       struct node*temp;
       temp=head;
      head=head->next;
//free the space of the first node in the memory
      free(temp);
   }
//return a new head
   return head;
}

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

//calling a new head
head=delete_first_node(head);

struct node * ptr;
ptr=head;

while(ptr!=NULL)
{
printf("%d \t",ptr->data);
ptr=ptr->next;
}

}


