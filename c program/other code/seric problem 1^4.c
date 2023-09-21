#include <stdio.h>
int main()
{
    int i,N,sum=0;
    printf("Enter a value");
    scanf("%d",&N);
    printf("(%d^4)",sum);
    for ( i = 1; i<=N; i++)
    {
        printf("+(%d^4)",i);
        sum=sum+i*i*i*i;
    }
    
    printf("=%d",sum);
    return 0;
}