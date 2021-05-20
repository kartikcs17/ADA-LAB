

#include <stdio.h>

int search(int a[], int n, int x)
{
	int i;
	for (i = 0; i < n; i++)
		if (a[i] == x)
			return i;
	return -1;
}


int main(void)
{
    int a[120],n,x,i;
    
printf("+enter size of array btw 1 to 120 ");
    scanf("%d",&n);

    
    for(i=0;i<n;i++)
    {
              a[i]=rand();
              
        printf("%d nmbr added to the array",a[i]);
  
    }
    
 printf("entr element to be searched");
 scanf("%d",&x);          

	int result = search(a, n, x);
	(result == -1)
		? printf("Element is not present in array")
		: printf("Element is present at index %d", result);
	return 0;
}
