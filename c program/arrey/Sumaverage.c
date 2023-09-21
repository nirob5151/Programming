#include<stdio.h>
int main()
{
    int a[30],i,n,sum=0;
    float avg;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {   printf("a[%d]:",i);
        scanf("%d",&a[i]);

    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
        avg=(float)sum/n;
    }
    printf("\nsum=%d\navg=%.2f",sum,avg);
    return 0;

}
