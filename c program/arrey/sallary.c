# include <stdio.h>
int main()
{
    int i,j,N,M;
    double R;
    scanf("%d %d %lf",&N,&M,&R);
    int a[N],b[N] ;
    for ( i = 0; i <N; i++)
    {
        scanf("%d",&a[i]);
    }
    for ( j= 0; j < N; j++)
    {
         b[j] = a[j]*R*2;
        printf("%d ",b[j]);
    }
    return 0 ;
    
    
}   