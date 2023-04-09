#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,c,d,sum=0;
    printf("Enter number of digits\n");
    scanf("%d",&d);
    if(d==3||d==4)
    {
    printf("Enter a %d digit number\n",d);
    }
    else
    {
    printf("Please enter right input");
    exit(0);
    }
    scanf("%d",&a);
    b=a;
    switch(d)
    {
   case 3 : while(b!=0)
   {
    c=b%10;
    sum=sum+(c*c*c);
    b=b/10;
   }
   case 4 : while(b!=0)
   {
    c=b%10;
    sum=sum+(c*c*c*c);
    b=b/10;
   }
    if(sum==a)
    {
        printf("The given number is Armstrong Number\n");
    }
    else
    {
        printf("The given number is not Armstrong number\n");
    }
    }

    return 0;
    
}