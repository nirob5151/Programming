#include<stdio.h>
int main()
{
    int n,rows, col;
    printf("Entre N:");
    scanf("%d",&n);

    for(rows=1;rows<=n;rows++)
    {
        for(col=1;col<=rows;col++)
    {
        printf("%c",col+96);
    }

    printf("\n");

    }
    return 0;

}
