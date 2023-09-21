# include <stdio.h>
int main()
{
    int i, n,num[5]={10,20,30,40,50};
    printf("Enter a number:");
    scanf("%d",&n);

    for ( i = 0; i <n; i++)
    {
        printf("%d\n",num[i]); // or printf("%d\n",num[0]);*//
    }
    

    return 0;
}