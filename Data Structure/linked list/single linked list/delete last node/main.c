
#include <stdio.h>
#include <stdlib.h>
  //delete the last node in the linked list
struct node{
int data;
struct node * next;
};

struct node *delete_last_node (struct node *head)
{
 if(head==NULL)
 {
     printf("the list is already empty !");
 }
 else if (head->next ==NULL)//if the list has only on element
 {
     free(head);
     head=NULL;
 }
 else
 {
     struct node *pervuis ,*temp;
     temp =head;

     while(temp->next!=NULL)
     {
         pervuis =temp;
         temp=temp->next;
     }
     pervuis->next=NULL;
     free(temp);
 }

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

//calling the delete function
delete_last_node(head);

struct node * ptr;
ptr=head;

while(ptr!=NULL)
{
printf("%d \t",ptr->data);\
ptr=ptr->next;
}

}
