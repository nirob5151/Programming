#include<stdio.h>
int main()
{
    int a[50],size,i;
    printf("Enter Size Of Array:");
    scanf("%d",&size);
    printf("Enter Your Array Element:");
    for ( i = 0; i < size; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Array Element Are\n");
    for ( i = 0; i < size; i++)
    {
        printf("%d",a[i]);
        printf("\n");
    }
    return 0;   
}