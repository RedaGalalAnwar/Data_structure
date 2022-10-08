#include <stdio.h>
#include <stdlib.h>

//structure of the node
struct node {
int data ;
struct node *next ;

};
//global declaration
struct node *front = NULL;
struct node *rear = NULL;

// function to insert elements to stack
void inqueue(int value)
{
struct node * NewNode ;
NewNode=(struct node *)malloc(sizeof(struct node ));

NewNode->data=value;
NewNode->next=NULL;

if(front==NULL && rear==NULL)
{
front=rear=NewNode;
}
else
{
  rear->next=NewNode;
  rear=NewNode;
}

}

//function to delete element from the stack
int dequeue()
{
 if(front==NULL)
 {
     printf("queue underflow \n");
     return -1;
 }
struct node * temp;
temp=front;
int value =front->data;
front=front->next;
free(temp);
temp=NULL;
return value;

}

//function to print the element in the stack
void print()
{
struct node *ptr;
ptr=front;
while(ptr!=NULL)
{
    printf("%d\n",ptr->data);
    ptr=ptr->next;
}
}




int main()
{
inqueue(10);
inqueue(20);
inqueue(30);
inqueue(40);
inqueue(50);
dequeue();
dequeue();
print();
}
