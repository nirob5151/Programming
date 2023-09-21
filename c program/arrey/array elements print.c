#include<stdio.h>
int main()
{
    int a[30],i,N;
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {   printf("a[%d]:",i);
        scanf("%d",&a[i]);
    }
    printf("array elements are:\n");
    for(i=0;i<N;i++)
    {

      {
        printf("\t%d\n",a[i]);
      }

    }
    return 0;

}
