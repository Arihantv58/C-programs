#include<stdio.h>
int main()
{
    int n1,n2,x,y;
    printf("Enter two numbers\n");
    scanf("%d %d",&n1,&n2);
    x=n1;
    y=n2;
    while(n1!=n2)
    {
        if(n1>n2)
        {
            n1=n1-n2;
        }
        else{
            n2=n2-n1;
        }
    }
    printf("LCM of %d and %d is %d",x,y,x*y/n1);
    return 0;
}