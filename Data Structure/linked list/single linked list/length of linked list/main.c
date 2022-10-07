#include <stdio.h>
#include <stdlib.h>

struct Node{
int data ;
struct Node *next;
};




int main()
{
  struct Node *head=NULL;
  struct Node *second=NULL;
  struct Node *third=NULL;
  struct Node *fourth=NULL;
  head =(struct Node *) malloc(sizeof(struct Node ));
  second =(struct Node *) malloc(sizeof(struct Node ));
  third =(struct Node *) malloc(sizeof(struct Node ));
  fourth =(struct Node *) malloc(sizeof(struct Node ));

  // assign data at first node
  head->data = 10;
  head->next = second ;
  //assign the second node
  second->data =20;
  second->next =third;
  //assign the third node
  third->data = 30;
  third->next = fourth;
  //assign the fourth node
  fourth->data = 40;
  fourth->next = NULL;

//printing the linked list length
int count = get_length(head);
printf("the length of linked list is : %d \n",count);

    return 0;
}
int get_length (struct Node *head)
{
    int count =0;
    struct Node *current;
    current=head;
    while (current!=NULL)
    {
         current=current->next;
        count++;

    }
   return count;
}
