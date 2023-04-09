#include<stdio.h>
int main()
{
    char opt;
    int n1,n2;
    float sol;
    printf("Choose operator amuong +,-,/,* : \n");
    scanf("%c", &opt);
    if(opt== '+')
    {
        printf("You have choosed Addition\n");
        printf("Enter first numbers : \n");
        scanf("%d",&n1);
        printf("Enter second numbers : \n");
        scanf("%d",&n2);
    }
    if(opt== '-')
    {
        printf("You have choosed Subtraction\n");
        printf("Enter first numbers : \n");
        scanf("%d",&n1);
        printf("Enter second numbers : \n");
        scanf("%d",&n2);
    }
    if(opt== '*')
    {
        printf("You have choosed Multiplication\n");
        printf("Enter first numbers : \n");
        scanf("%d",&n1);
        printf("Enter second numbers : \n");
        scanf("%d",&n2);
    }
    if(opt== '/')
    {
        printf("You have choosed Division\n");
        printf("Enter first numbers : \n");
        scanf("%d",&n1);
        printf("Enter second numbers : \n");
        scanf("%d",&n2);        
    }
    
    switch(opt)
    {
        case '+' : 
        sol=n1+n2;
        printf("Addition of %d and %d is %.2f\n",n1,n2,sol);
        break;
        case '-' : sol=n1-n2;
        printf("Subtraction of %d and %d is %.2f\n",n1,n2,sol);
        break;
        case '*' : sol=n1*n2; 
        printf("Multiplication of %d and %d is %.2f\n",n1,n2,sol);
        break;
        case '/' : if(n2==0)
        {
            printf("Denominator can not be zero please choose right number : \n");
            scanf("%d",&n2);
            sol=n1/n2;
            printf("Division of %d and %d is %.2f\n",n1,n2,sol);
        }
        else{
            sol=n1/n2;
            printf("Division of %d and %d is %.2f\n",n1,n2,sol);
        }
        break;
        default :
        printf("Something went wrong please check the options.");
    }
    return 0;
} 