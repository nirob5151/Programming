#include <stdio.h>
int main()
{
    float i,N,sum=0;
    printf("Enter a Value:");
    scanf("%f",&N);

    printf("%f",sum);
    for ( i =1; i<=N; i++)
    {
        printf("+1/%f",i);
        sum=sum+1/i;
    }
    printf("=%f",sum);

    return 0;
    

}