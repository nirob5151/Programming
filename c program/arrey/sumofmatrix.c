#include<stdio.h>
int main()
{
    int a[50][40],m,n,x,y,sum=0;
    scanf("%d %d",&x,&y);
    printf("the matrix elements are:\n");
    for(m=0;m<x;m++)
    {
        for(n=0;n<y;n++)
        {
            printf("a[%d][%d]=",m,n);
            scanf("%d",&a[m][n]);
            sum=sum+a[m][n];
        }
    }	
    printf("sum of matrix elemets:%d\n",sum);

    return 0;
}