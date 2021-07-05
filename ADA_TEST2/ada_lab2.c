#include <time.h>
#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b) 
{
  int t = *a;
  *a = *b;
  *b = t;
}

void heap(int arr[], int n, int i)
{
  int largest = i; 
  int l = 2 * i + 1; 
  int r = 2 * i + 2; 

  
  if (l < n && arr[l] > arr[largest])
    largest = l;

  
  if (r < n && arr[r] > arr[largest])
    largest = r;

  
  if (largest != i)
    {
    swap(&arr[i], &arr[largest]);
    heap(arr, n, largest);
  }
}


void heapSort(int arr[], int n)
{
  
  for (int i = n / 2 - 1; i >= 0; i--)
    minheap(arr, n, i);

  
  for (int i = n - 1; i > 0; i--) 
    {
    
    swap(arr[0], arr[i]);
    minheap(arr, i, 0);
  }
}

void minheap(int arr[], int n, int i)
{
    int smallest = i; // Initialize smalles as root
    int l = 2 * i + 1; // left = 2*i + 1
    int r = 2 * i + 2; // right = 2*i + 2
 
    // If left child is smaller than root
    if (l < n && arr[l] < arr[smallest])
        smallest = l;
 
    // If right child is smaller than smallest so far
    if (r < n && arr[r] < arr[smallest])
        smallest = r;
 
    // If smallest is not root
    if (smallest != i) {
        swap(arr[i], arr[smallest]);
 
        // Recursively heapify the affected sub-tree
        minheap(arr, n, smallest);
    }
}
int main()
{
    clock_t start, end;
    double t;
  for(int n=100;n<401;n=n+100)
  {
      int array[n];
        for (int i = 0; i < n; i++)
        {
           array[i]= rand ()%1000;
        }
      
        start = clock();
        heapSort(array, n);
        end = clock();
        t = ((double) (end - start)) / CLOCKS_PER_SEC;
        printf("\nTime taken by Heap Sort for %d elements : %lf\n",n,t);
      
  }

  
}
