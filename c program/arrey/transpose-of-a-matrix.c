#include<stdio.h>
int main()
{ int a[50][50],i,j,n,m;
    scanf("%d %d",&n,&m);
    printf("the matrix elements are:\n");
    for(i=0;i<n;i++)
    {  for(j=0;j<m;j++)
        {
            printf("a[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
        } }
    printf("matrix :\n");
    for(i=0;i<n;i++)
    { for(j=0;j<m;j++)
        {      printf("\t%d",a[i][j]);
        } printf("\n"); }
printf(" transpose matrix:\n");
for(i=0;i<n;i++)
    {        for(j=0;j<m;j++)
        {       printf("\t%d",a[j][i]); }
        printf("\n");
    }
    return 0;
}