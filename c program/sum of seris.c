#include<stdio.h>
int main()
{
    int n;
    printf("Enter a value: ");
    scanf("%d",&n);
    int result = sum_of_seris(n);
    printf("Sum of Seris from 1 to %d is %d\n",n,result);

}
 int sum_of_seris (int n)
{
    if (n==0)
    {
        return 0;
    }
    else
    {
        return(n*n)+sumofseris (n-1);
    }
}