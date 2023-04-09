#include<stdio.h>
int main()
{
    int n,i,a=1;
    printf("Enter number of terms : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        a=a*i;  
    }
    printf("%d",a);
    return 0;
}