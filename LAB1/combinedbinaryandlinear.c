
#include <stdio.h>


int search(int a[], int n, int x)
{
	int i;
	for (i = 0; i < n; i++)
		if (a[i] == x)
			return i;
	return -1;
}

int binarySearch(int a[], int l, int r, int x)
{
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
    int a[120],n,x,temp,i,y;
    
printf("+enter size of array btw 1 to 120 ");
    scanf("%d",&n);

    
    for(i=0;i<n;i++)
    {
              a[i]=rand()%200;
              
        printf("  %d nmbr added to the array",a[i]);
  
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
              
        printf("sorted : %d nmbr added to the array",a[i]);
  
    }
           
 printf("entr element to be searched");
 scanf("%d",&x);          
 printf(":entr method of searching 1 for linear and 0 for binary");
 scanf("%d",&y);  
if(y==0)
{
    int result = binarySearch(a, 0, n - 1, x);
	(result == -1) ? printf("Element is not present in array")
				: printf("Element is present at index %d",
							result);
}
else if(y==1)
{
    	int result = search(a, n, x);
	(result == -1)
		? printf("Element is not present in array")
		: printf("Element is present at index %d", result);
	return 0;
}
else{
    printf("sorry wrong methodology");
}
}
