#include <stdio.h>
#include <stdlib.h>
  //delete a node at the middle of linked list
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
delete_at_the_middle(head ,2);

//printing the list
struct node * ptr;
ptr=head;

while(ptr!=NULL)
{
printf("%d \t",ptr->data);\
ptr=ptr->next;
}

}


void delete_at_the_middle (struct node *head ,int position)
{

    struct node *temp ,* pervios ;
    temp =head ;

    if (head ==NULL)
    {
        printf("the list is already empty !");
    }
    else if(position==1)
    {
        head =temp->next;
        free(temp);
        temp=NULL;
    }
    else
    {

        while (position != 1)
        {
        pervios=temp;
       temp=temp->next;
        position--;
        }

    }
// to connect the previous node to the next node
      pervios->next=temp->next;
      free(temp);
      temp=NULL;
}
