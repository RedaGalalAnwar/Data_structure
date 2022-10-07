//Reda galal
#include <stdio.h>
#include <stdlib.h>

// the aim of this code is to insert element at the the given index

int main()
{
int arr[6]={4,6,8,10,12};
//  N: is the number of in the array
// item : is the value  which we need to insert
//  k : is the given index
int N=5 , item=7,k=3 , temp;
temp=N;
// printing the array elements before insertion
  for(int i=0;i<N;i++)
  {
      printf("arr[%d]=%d \n",i,arr[i]);

  }
  printf("\n");
  //making shift to elements in the array
while(temp > k)
  {
      arr[temp]=arr[temp-1];
      temp=temp-1;
  }
  N++;
  //printing the array elements after insertion
  arr[k]=item;
  for(int i=0;i<N;i++)
  {
      printf("arr[%d]=%d \n",i,arr[i]);
  }
  return 0 ;
}
