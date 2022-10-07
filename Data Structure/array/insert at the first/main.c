// Reda galal
#include <stdio.h>
#include <stdlib.h>

// the aim of this code is to insert element at the beginning of array

int main()
{
int arr[6]={4,6,8,10,12};
//  N: is the number of in the array
// item : is the value  which we need to insert
int N=5 , item=2;
// printing the array elements before insertion
  for(int i=0;i<N;i++)
  {
      printf("arr[%d]=%d \n",i,arr[i]);

  }
  printf("\n");
  //making shift to elements in the array
  for(int i=N-1;i>=0;i--)
  {
      arr[i+1]=arr[i];
  }
  N++;
  //printing the array elements after insertion
  arr[0]=item;
  for(int i=0;i<N;i++)
  {
      printf("arr[%d]=%d \n",i,arr[i]);
  }
  return 0 ;
}
