 #include<stdio.h>
 int main()
 {
    int n,rows,col;
    printf("enter N=");
    scanf("%d",&n);
    for (rows=1;rows<=n;rows++)
    {
        for(col=1;col<=rows;col++)
        {
            printf("%d",rows%2);
        }
        printf("\n");
    }
    return 0;
 }