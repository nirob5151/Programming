#include<stdio.h>
int main()
{
    int a[50],size,i,num,pos;
    printf("Enter Array Size:");
    scanf("%d",&size);
    printf("Enter Array Element:");
    for ( i = 0; i < size; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter Your Pos You Want to Insert: ");
    scanf("%d",&pos);
    printf("Enter Your Number You Want to Insert");
    scanf("%d",&num);
    for ( i = size-1; i >=pos-1; i--)
    {
        a[i+1]=a[i];
    }
    a[pos-1]=num;
    size++;
    printf("Array Element Are:\n");
    for ( i = 0; i < size; i++)
    {
        printf("%d",a[i]);
        printf("\n");
    }
    return 0;  
}