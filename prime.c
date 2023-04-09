#include<stdio.h>
int main()
{
    int i,n,m;
    printf("Enter the number : ");
    scanf("%d",&n);
    m=n/2;
    for(i=2;i<=m;i++)
    {
        if(n%i==0)
        {
            printf("The given number is not a Prime Number\n");
            break;
        }
        else
        {
            printf("The given number is a Prime Number");
            break;
        }
    }
    return 0;
}