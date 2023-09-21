#include<stdio.h>
int main()
{
    int a[50][40],i,j,x,y;
    scanf("%d %d",&x,&y);
    printf("the matrix elements are:\n");
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            printf("a[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("matrix elements are:\n");
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {	
            printf("\t%d",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}	
