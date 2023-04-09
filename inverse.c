#include<stdio.h>
int main()
{
    int n,x,rem,rev=0;
    printf("Enter the number : ");
    scanf("%d",&n);
    x=n;

    while(n!=0)
    {
        rem=n%10;
        rev= rev*10+rem;
        n=n/10;
    }
    printf("Reverse of %d is %d",x, rev);
    
    return 0;
}