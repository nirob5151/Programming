#include<stdio.h>
int main ()
{
    int a[10][10],b[10][10],m,n,x,y,sum,k,mult[10][10];
    scanf("%d %d",&x,&y);
    printf("elemets of matrix 1:\n");
    for(m=1;m<=x;m++)
    {
        for(n=1;n<=y;n++)
        {   printf("a[%d][%d]:",m,n);
            scanf("%d",&a[m][n]);
        }
    } printf("elemets of matrix 2:\n");
    for(m=1;m<=x;m++)
    {
        for(n=1;n<=y;n++)
        {   printf("b[%d][%d]:",m,n);
            scanf("%d",&b[m][n]);
        }
    }
    printf("matrix 1:\n");
    for(m=1;m<=x;m++)
    {
      for(n=1;n<=y;n++)
      {
          printf("\t%d",a[m][n]);
      }
      printf("\n");
    }
   printf("matrix 2:\n");
    for(m=1;m<=x;m++)
    {
      for(n=1;n<=y;n++)
      {
          printf("\t%d",b[m][n]);
      }
      printf("\n");
    }
    for(m=1;m<=x;m++)
    {
        for(n=1;n<=y;n++)
          {
            sum=0;
            for(k=1;k<=x;k++)
            {
                 sum=sum+(a[m][k]*b[k][n]);
            }
            mult[m][n]=sum;
          } }
    printf("multiplication of two matrix:\n");
    for(m=1;m<=x;m++)
    { 
for(n=1;n<=y;n++)
        { 
printf("\t%d",mult[m][n]);
 }
        printf("\n");}
    return 0;
}

