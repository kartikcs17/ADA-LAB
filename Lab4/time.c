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
int search(int a[], int n, int x)
{
	int i;
	for (i = 0; i < n; i++){
	    
	       delay(2);  
	
		if (a[i] == x)
			return i;
	    
	}
	return -1;
}

int binarySearch(int a[], int l, int r, int x)
{
       delay(2);  
	if (r >= l) {
		int mid = l + (r - l) / 2;


		if (a[mid] == x)
			return mid;

		if (a[mid] > x)
			return binarySearch(a, l, mid - 1, x);

		return binarySearch(a, mid + 1, r, x);
	}


	return -1;
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
    for (int i = 0; i < n; i++) {     
        for (int j = i+1; j < n; j++) {     
           if(a[i] > a[j]) {    
               temp = a[i];    
               a[i] = a[j];    
               a[j] = temp;    
           }     
        }     
    }  
     for(i=0;i<n;i++)
    {
              
        printf("\n sorted : %d nmbr added to the array",a[i]);
  
    }
           
 printf("\n entr element to be searched");
 scanf("%d",&x);          
 printf("\n :entr method of searching 1 for linear and 0 for binary");
 scanf("%d",&y);  
if(y==0)
{
    start = time(NULL);
    result = binarySearch(a, 0, n - 1, x);
    end = time(NULL);
    printf("Time taken is %.2f seconds",
           difftime(end, start));
	(result == -1) ? printf("Element is not present in array")
				: printf("Element is present at index %d",
							result);
}
else if(y==1)
{
    start = time(NULL);
    	result = search(a, n, x);
    end = time(NULL);
    printf("Time taken is %.2f seconds",
           difftime(end, start));
	(result == -1)
		? printf("Element is not present in array")
		: printf("Element is present at index %d", result);
	return 0;
}
else{
    printf("sorry wrong methodology");
}
}
