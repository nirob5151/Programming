 #include <stdio.h>
 int main()
 {
    int a[100],n,i,max,min;
    printf("Enter a Number: ");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    min=a[0];
    for ( i = 0; i < n; i++)
    {
        if(max < a[i])
        max=a[i];
        if(min > a[i])
        min=a[i];
    }
    printf("max num is: %d\n",max );
    printf("min num is: %d",min );
 }