#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter the numbers that you want to swap : \n");
    scanf("%d %d", &x,&y);
    x=x+y;
    y=x-y;
    x=x-y;
    printf("Swapped numbers are %d %d", x,y);
    return 0;

}