#include<stdio.h>
int main()
{
    int a[50][50],b[50][50],m,n,x,y,sum[50][50];
    scanf("%d %d",&x,&y);
    printf("the matrix 1 elements are:\n");
    for(m=0;m<x;m++)
    { 
for(n=0;n<y;n++)
        { printf("a[%d][%d]=",m,n);
            scanf("%d",&a[m][n]);
        }}
    printf("matrix 1:\n");
    for(m=0;m<x;m++)
    {
 for(n=0;n<y;n++)
        { printf("\t%d",a[m][n]); }	
        printf("\n");}
    printf("elements of matrix 2:\n");
    for(m=0;m<x;m++)
    {
 for(n=0;n<y;n++)
        { printf("a[%d][%d]=",m,n);
            scanf("%d",&b[m][n]);
        }}
    printf("matrix 2:\n");
    for(m=0;m<x;m++)
    {
 for(n=0;n<y;n++)
        { printf("\t%d",b[m][n]);}
        printf("\n");}
        
    printf("sum of two matrix:\n");
    for(m=0;m<x;m++)
   {   for(n=0;n<y;n++)
        { sum[m][n]=a[m][n]+b[m][n];
        printf("\t%d",sum[m][n]);
        }
        printf("\n");}
    return 0;
}
