#include <stdio.h>
#include <stdlib.h>

#define N 5
int arr[N];
int front=-1,rear=-1;
int main()
{
inqueue(5);
inqueue(6);
inqueue(7);
dequeue();
print();



    return 0;
}

void inqueue(int x)
{
    if(rear==N-1)
    {
        printf("queue overflow \n");
    }
    else if(front==-1 && rear==-1) //queue is empty
    {
        front=rear=0;
        arr[rear]=x;
    }
    else
    {
    rear++;
    arr[rear]=x;

    }

}

int dequeue()
{
    int var;
    if(front==-1 && rear==-1)
    {
        printf("queue underflow \n");
    }
    else if(front==rear)//queue has only one item
    {
       var=arr[front];
    front=rear-1;
    return var;
    }
   else
   {
       var=arr[front];
       front++;
       return var;
   }
}


void print()
{
  int i=0;
  if(front==-1  && rear==-1)
  {
      printf("queue is empty \n");
  }
  else
    {
    for(i=front;i<=rear;i++)
      {
        printf("\n %d ",arr[i]);
      }


    }

}
