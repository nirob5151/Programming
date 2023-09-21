#include<stdio.h>
int main()
{
    int  a[15];
    int b,n;
    scanf("%d",&n);
    printf("array elements are:");
    for (b=1;b<=n;b++)
    {
        scanf("%d",&a[b]);
    }
    int S1=a[1],S2=a[2];
    for(b=1;b<=n;b++)
    {
        if (S1>a[b])
    {
            S2=S1;
            S1=a[b];
    }
        else if ((a[b]<S2)&&(a[b]>S1))
    {
            S2=a[b];
    }
    }
    printf("\nSmallest number=%d\n",S1);
    printf ("2nd smallest number=%d",S2);	
    return 0;

}
