#include <stdio.h>
#include<time.h>
#include<stdlib.h>

void delay(int number_of_seconds)
{

    int milli_seconds = 1000 * number_of_seconds;

    clock_t start_time = clock();

    while (clock() < start_time + milli_seconds)
        ;
}
void sort(int a[], int n)
{

   int i,j,p,temp;
   for(i=0;i<(n-1);i++)
     {
       p=i;
         for(j=i+1;j<n;j++)
            {
               if(a[p]>a[j])
                     p=j;
            }
               if(p!=i)
                  {
                       temp=a[i];
                       a[i]=a[p];
                       a[p]=temp;
                  }
            }

}
void bubblesort(int a[], int n)
{
    int i,j,temp;
      for(i=0;i<n-1;i++)
  {
    for(j=0;j<n-i-1;j++)
    {
      if(a[j]>a[j+1]) 
      {
        temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;
      }
    }
  }
}

void main()
{
    int a[25000],n,x,temp,i,y,result;
    time_t start, end;
    
printf("+enter size of array btw 1 to 23999 ");
    scanf("%d",&n);

    
    for(i=0;i<n;i++)
    {
              a[i]=rand()%23999;
              
        printf(" \n %d nmbr added to the array",a[i]);
  
    }
     printf("\n :entr method of sorting 1 for bubblesort and 0 for selectionsort");
 scanf("%d",&y); 

if(y==0)
{
    start = time(NULL);
    sort(a,n);
    end = time(NULL);
                    for(i=0;i<n;i++)
    {
              
        printf("\n sorted : %d nmbr added to the array",a[i]);
  
    }
    printf("Time taken is %.8f seconds",
           difftime(end, start));


}
else if(y==1)
{
    start = time(NULL);
    bubblesort(a, n);
    end = time(NULL);
                    for(i=0;i<n;i++)
    {
              
        printf("\n sorted : %d nmbr added to the array",a[i]);
  
    }
    printf("Time taken is %.8f seconds",
           difftime(end, start));

}
else{
    printf("sorry wrong methodology");
}

}
