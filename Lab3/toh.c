#include<stdio.h>
void hanoi(int n,char x,char y,char z);

void main() {
    int n,a,b;
 
    printf("Enter the number of disks : ");
    scanf("%d", &n);
    printf("For recursive solution press1 else press 2 for non recursive solution ");
    scanf("%d", &a);
 if(a==1)
 {
        printf("\n");
    printf("The sequence of moves involved in the Tower of Hanoi are :\n");
    hanoi(n, 'A', 'B', 'C');
 }
 else if (a==2)
 {
         for (b = 1; b < (1 << n); b++)
    {
       

      printf("Move from rod %d to rod %d\n",(b & (b-1))%3,(((b |(b-1)) + 1)%3)); 
   }
}
else 
{
    printf("Wrong number pressed");
}

    
    
}

void hanoi(int n,char x,char y,char z) {
    
    if (n == 1)
    {
        printf("\n Move disk 1 from rod %c to rod %c", x, y);
        return;
    }
    

      hanoi(n-1,x,z,y);
 printf("\n Move disk %d from rod %c to rod %c", n, x, y);
      hanoi(n-1,z,y,x);
}
