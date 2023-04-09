#include<stdio.h>
//#include<stdlib.h>
void main()
{
int a[10][10],i,j,r,c,b[10][10];
printf("Enter rows and columns\n");
scanf("%d%d",&r,&c);


printf("Enter %d values\n",r*c);


for(i=0;i<r;i++)
{
 for(j=0;j<c;j++)
 {
 scanf("%d",&a[i][j]);
 b[j][i]=a[i][j];
 }
}

printf("Matrix is:------------------\n\n");

for(i=0;i<r;i++)
{
 for(j=0;j<c;j++)
 printf("%d  ",a[i][j]);
 printf("\n\n");
}
printf("Transpose of Matrix is:------------------\n\n");

for(i=0;i<r;i++)
{
 for(j=0;j<c;j++)
 printf("%d  ",b[i][j]);
 printf("\n\n");
}

}