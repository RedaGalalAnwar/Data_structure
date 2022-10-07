#include <stdio.h>
#include <stdlib.h>

// the aim of this code is to delete an element from the array

int main()
{
int arr[6]={4,6,8,10,12};
//  N: is the number of in the array
// k : is the index of the element which we want to delete
int N=5 , k=2 ;

// printing the array elements before deletion
  for(int i=0;i<N;i++)
  {
      printf("arr[%d]=%d \n",i,arr[i]);

  }
  printf("\n");
  //making shift to elements in the array
while(N>k)
  {
      arr[k]=arr[k+1];
      k=k+1;
  }
  N=N-1;
// printing the array elements after deletion
  for(int i=0;i<N;i++)
  {
      printf("arr[%d]=%d \n",i,arr[i]);
  }
  return 0 ;
}
