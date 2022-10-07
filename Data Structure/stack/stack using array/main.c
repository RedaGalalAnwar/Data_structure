// stack implementation using array
#include <stdio.h>
#include <stdlib.h>

//it is preferred to declare the TOP and array as a global
#define max 10
int arr[max];
int TOP=-1;

// function to insert elements in stack
void push (int data)
{
if(TOP==max-1)
{
    printf("stack overflow \n");
    return;
}

TOP=TOP+1;
arr[TOP]=data;
}


// function to delete element from the stack
int pop()
{
    if(TOP ==-1)
    {
        printf(" stack underflow \n");
       // exit(1) means abnormal termination of the program
        exit(1);
    }

  int value ;
  value =arr[TOP];
  TOP=TOP-1;
  return value ;
}


//printing the elements
int print()
{
    for(int i=TOP;i>=0;i--)
{
    printf("%d  \n",arr[i]);
}
}



int main()
{
    int data ;
push(10);
push(20);
push(30);
push(40);
push(50);
data=pop();
print();

}

