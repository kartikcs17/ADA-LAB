#include <stdio.h>
int gcd(int a, int b);
int main()
{
    int a,b,c,i,r;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
      printf("Enter 1 for non recursive method and 2 for recursive method ");
    scanf("%d",&c );
    if(c==1)
    {
    for(i=1; i <= a && i <= b; ++i)
    {
 
        if(a%i==0 && b%i==0)
            r = i;
    }

    printf("G.C.D of %d and %d is %d",a,b,r);
    }
    else if (c==2)
    {
         printf("G.C.D of %d and %d is %d.",a,b,gcd(a,b));
    }
    else
    {
        printf("Wrong value entered");
    }
    return 0;
}
int gcd(int a, int b)
{
    if (b != 0)
        return gcd(b, a % b);
    else
        return a;
}
