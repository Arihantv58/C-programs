#include<stdio.h>
#include<stdlib.h>
void main()
{
int a[10][10],i,j,r1,c1,r2,c2,b[10][10],c[10][10];
printf("Enter rows and columns of first matrix\n");
scanf("%d%d",&r1,&c1);

printf("Enter rows and columns of second matrix\n");
scanf("%d%d",&r2,&c2);

if(r1!=r2||c1!=c2)
{
    printf("Matrix addition is not possible");
    exit(0);
}


printf("Enter %d values for first matrix\n",r1*c1);
for(i=0;i<r1;i++)
{
 for(j=0;j<c1;j++)
 {
 scanf("%d",&a[i][j]);
 }
}


printf("Enter %d values for second matrix\n",r2*c2);
for(i=0;i<r2;i++)
{
 for(j=0;j<c2;j++)
 {
 scanf("%d",&b[i][j]);
 }
}
for(i=0;i<r2;i++)
for(j=0;j<c2;j++)
c[i][j]=a[i][j]+b[i][j];

printf("First Matrix is:------------------\n\n");

for(i=0;i<r1;i++)
{
 for(j=0;j<c1;j++)
 printf("%d  ",a[i][j]);
 printf("\n\n");
}

printf("Second Matrix is:------------------\n\n");

for(i=0;i<r2;i++)
{
 for(j=0;j<c2;j++)
 printf("%d  ",b[i][j]);
 printf("\n\n");
}

printf("Matrix sum is:------------------\n\n");

for(i=0;i<r1;i++)
{
 for(j=0;j<c1;j++)
 printf("%d  ",c[i][j]);
 printf("\n\n");
}
}