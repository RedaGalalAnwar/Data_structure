#include <stdio.h>
#include <stdlib.h>

//structure of the node
struct node {
int data ;
struct node *next ;

};
//global declaration
struct node *TOP = NULL;

// function to insert elements to stack
struct node * push(int data)
{
struct node * NewNode ;
NewNode=(struct node *)malloc(sizeof(struct node ));

if(NewNode==NULL)
{
    printf("stack overflow \n");
}

NewNode->data=data;
NewNode->next=TOP;
TOP=NewNode;
};

//function to delete element from the stack
int pop()
{
 if(TOP==NULL)
 {
     printf("stack under flow \n");
 }
struct node * temp;
temp=TOP;
int value =temp->data;
TOP=TOP->next;
free(temp);
temp=NULL;
return value;

}

//function to print the element in the stack
void print()
{
struct node *ptr;
ptr=TOP;
while(ptr!=NULL)
{
    printf("%d\n",ptr->data);
    ptr=ptr->next;
}
}




int main()
{
push(10);
push(20);
push(30);
push(40);
push(50);
pop();
pop();
print();
}
