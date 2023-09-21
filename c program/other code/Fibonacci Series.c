#include <stdio.h>
int main()
{
    int i, n1=0,n2=1,n3,N;
    printf("Enter a Value:");
    scanf("%d",&N);
    printf("%d %d",n1,n2);
    for ( i=1; i<=N-2; i++)   // or for ( i=2; i<=N; i++)
    {
        n3=n1+n2;
        printf("%d",n3);
        n1=n2;
        n2=n3;

    }
    return 0;
    
}