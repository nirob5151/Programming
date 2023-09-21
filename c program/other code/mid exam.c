#include<stdio.h>
int main ()
{
    int num1,num2,n1,n2,gcd,lcm,r;
    printf("Enter Two Number:");
    scanf("%d %d",&num1,&num2);
    n1=num1;
    n2=num2;
    while(n2!=0)
    {
        r=n1%n2;
        n1=n2;
        n2=r;
    }
    gcd=n1;
    printf("GCD is:%d\n",gcd);
    lcm=(num1*num2)/gcd;
    printf("LCM is:%d",lcm);

    return 0;
}
