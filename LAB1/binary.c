#include <stdio.h>


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
    int a[120],n,x,temp,i;
    
printf("+enter size of array btw 1 to 120 ");
    scanf("%d",&n);

    
    for(i=0;i<n;i++)
    {
              a[i]=rand();
              
        printf("%d nmbr added to the array",a[i]);
  
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
              
        printf("%d nmbr added to the array",a[i]);
  
    }
           
 printf("entr element to be searched");
 scanf("%d",&x);          


	int result = binarySearch(a, 0, n - 1, x);
	(result == -1) ? printf("Element is not present in array")
				: printf("Element is present at index %d",
							result);

}

