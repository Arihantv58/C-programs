#include<stdio.h>
#include<stdlib.h>
void main()
{
int a[10][10],i,j,r,c;
printf("Enter rows and columns");
scanf("%d%d",&r,&c);
if(r!=c)
{printf("Matrix is not a Square Matrix so, Diagional is not possible");
exit(0);
}

printf("Enter %d values",r*c);


for(i=0;i<r;i++)
for(j=0;j<c;j++)
scanf("%d",&a[i][j]);

printf("Array is:------------------\n\n");

for(i=0;i<r;i++)
{
 for(j=0;j<c;j++)
 if(i==j)
 printf("%d  ",a[i][j]);
 else
  printf("   ");
 printf("\n\n");
}

}


