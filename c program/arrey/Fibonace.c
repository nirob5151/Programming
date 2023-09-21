#include <stdio.h>
int fibo(int);
int main()

{
    int n, i,a=0;
    
    printf("Enter a number: ");
    scanf("%d",&n);
    for ( i = 0; i <= n; i++)
    {
        printf(" %d", fibo(a));
        a++;
    }
    return 0;
}
    int fibo(int n)
    {
    if(n==  0)
        return 0;

    else if(n== 1)
        return 1;

    else
    
        return (fibo(n-1) + fibo(n-2));
    

}