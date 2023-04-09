#include<stdio.h>
int main()
{
    int n,x,rem,sum=0;
    printf("Enter the number : ");
    scanf("%d",&n);
    x=n;

    while(n!=0)
    {
        rem=n%10;
        n=n/10;
        sum=sum+rem;
    }
    printf("Sum of digits of %d is %d",x, sum);
    
    return 0;
}