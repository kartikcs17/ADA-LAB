#include <time.h>
#include <stdio.h>
#include <stdlib.h>

void swap (int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}

void minheap (int arr[], int n, int i)
{
  int smallest = i;
  int l = 2 * i + 1;
  int r = 2 * i + 2;


  if (l < n && arr[l] < arr[smallest])
    smallest = l;


  if (r < n && arr[r] < arr[smallest])
    smallest = r;


  if (smallest != i)
    {
      swap (&arr[i], &arr[smallest]);
      minheap (arr, n, smallest);
    }
}


void heapSort (int arr[], int n)
{

  for (int i = n / 2 - 1; i >= 0; i--)
    minheap (arr, n, i);


  for (int i = n - 1; i > 0; i--)
    {

      swap (&arr[0], &arr[i]);
      minheap (arr, i, 0);
    }
}

int main ()
{
  clock_t start, end;
  double t;
  int array[50]; 
  int i, N;

  printf("Enter size of array: ");
  scanf("%d", &N);

  printf("Enter %d elements in the array : ", N);
  for(i=0; i<N; i++)
  {
     scanf("%d", &array[i]);
  }
  
  heapSort(array, N);
 
   
   printf("\nElements:- ");
    for(i=0; i<N; i++)
    {
        printf("%d, ", array[i]);
    }
}