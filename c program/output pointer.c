#include <stdio.h>
int main()
{
    int *ptr[4];
    int num[4]={10,-9,80,7};
    int i,j,large;
    for ( i = 0; i < 4; i++)
    ptr[i]=&num[i];
    for ( i = 0; i < 4; i++)
    {
        for ( j = 0; j <4; j++)
        {
            if (*ptr[i]>*ptr[j])
            {
                large=*ptr[i];
                *ptr[i]=*ptr[j];
                *ptr[j]=large;
            }
            }
            }
    for ( i = 0; i <4; i++)
    printf(" %d",*ptr[i]);
    }