#include <stdio.h>
int main()
{
    int i,N,sum=0;
    printf("Enter a value");
    scanf("%d",&N);
    printf("%d",sum);
    for(i=1;i<=N;i++)
    {
        printf("+%d",i);
    sum=sum+i;
    }
    printf("=%d",sum);
    return 0;

}